/*
 * XREFs of MiInsertLargeVadMapping @ 0x140643BA8
 * Callers:
 *     MiInPagePageTable @ 0x140345FA0 (MiInPagePageTable.c)
 * Callees:
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiLockProtoPoolPage @ 0x140283CA0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     TRY_ACQUIRE_EXLOCK_SHARED_TO_EXCLUSIVE @ 0x140608DC8 (TRY_ACQUIRE_EXLOCK_SHARED_TO_EXCLUSIVE.c)
 */

__int64 __fastcall MiInsertLargeVadMapping(
        unsigned __int64 a1,
        unsigned __int64 a2,
        int a3,
        unsigned __int64 *a4,
        int a5)
{
  _KPROCESS *Process; // rsi
  __int64 v10; // rbp
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  volatile signed __int32 *SharedVm; // rax
  int v15; // ebp
  unsigned __int64 v16; // rbx
  __int64 v17; // r8
  bool v18; // zf
  volatile signed __int32 *v19; // r8
  signed __int32 v20; // eax
  int v22; // [rsp+20h] [rbp-38h]
  signed __int32 v23; // [rsp+24h] [rbp-34h]
  signed __int32 v24; // [rsp+28h] [rbp-30h]
  unsigned __int64 v25[5]; // [rsp+30h] [rbp-28h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = MiLockProtoPoolPage(a2, 0LL);
  if ( !v10 )
    return 0LL;
  v25[0] = MI_READ_PTE_LOCK_FREE(a2);
  MiUnlockProtoPoolPage(v10, 0x11u);
  v11 = (unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v25) >> 12;
  v12 = 0xFFFFFC0000LL;
  if ( a3 != 2 )
    v12 = 0xFFFFFFFE00LL;
  v25[0] = MiMakeValidPte(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v12 & v11, a5 | 0x84000000);
  v13 = v25[0];
  if ( a3 != 1 )
  {
    SharedVm = (volatile signed __int32 *)MiGetSharedVm((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
    if ( !(unsigned int)TRY_ACQUIRE_EXLOCK_SHARED_TO_EXCLUSIVE(SharedVm) )
      return 0LL;
  }
  v15 = 0;
  v16 = v13;
  if ( MiPteInShadowRange((unsigned __int64)a4) )
  {
    if ( MiPteHasShadow() )
    {
      v15 = 1;
      if ( !HIBYTE(word_140C6697C) )
      {
        v18 = (v13 & 1) == 0;
        goto LABEL_12;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v18 = (v13 & 1) == 0;
LABEL_12:
      if ( !v18 )
        v16 = v13 | 0x8000000000000000uLL;
    }
  }
  *a4 = v16;
  if ( v15 )
    MiWritePteShadow((__int64)a4, v16, v17);
  if ( a3 != 1 )
  {
    v19 = (volatile signed __int32 *)MiGetSharedVm((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
    v22 = 1;
    v23 = _InterlockedCompareExchange(v19, 1, 0x80000000);
    if ( v23 != 0x80000000 )
    {
      do
      {
        if ( (v23 & 0x40000000) != 0 )
          v20 = v22 | 0x40000000;
        else
          v20 = v22 & 0xBFFFFFFF;
        v22 = v20;
        v24 = v23;
        v23 = _InterlockedCompareExchange(v19, v20, v23);
      }
      while ( v23 != v24 );
    }
  }
  return 1LL;
}
