/*
 * XREFs of MiUnlockWsle @ 0x140338C2C
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140294160 (MmUnmapViewInSystemCache.c)
 *     MiTerminateWsle @ 0x1402B7440 (MiTerminateWsle.c)
 *     MiDeleteVa @ 0x1402B8110 (MiDeleteVa.c)
 *     MiTerminateWsleCluster @ 0x1402BB3B0 (MiTerminateWsleCluster.c)
 *     MiUnlockVa @ 0x140338B10 (MiUnlockVa.c)
 * Callees:
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiSetVaAgeList @ 0x1402ADD40 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTableCharges @ 0x140338DA8 (MiUnlockPageTableCharges.c)
 *     MiGetEffectivePagePriorityThread @ 0x140339E94 (MiGetEffectivePagePriorityThread.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiUnlockWsle(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned int EffectivePagePriorityThread; // eax
  unsigned __int8 v10; // dl
  unsigned __int8 v11; // r9
  __int64 result; // rax
  unsigned __int64 v13; // rax

  if ( (unsigned int)MI_PFN_IS_PROTO(a3) && (*(_DWORD *)(v6 + 16) & 0x400LL) != 0 && (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    v7 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v6 + 40) >> 39) & 0x3FFLL));
    MiReturnCommit(v7, 1LL);
    _InterlockedDecrement64((volatile signed __int64 *)(v7 + 7616));
  }
  v8 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  LOBYTE(v8) = (v8 & 0x20) == 0;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(KeGetCurrentThread(), v8);
  v11 = v10;
  if ( EffectivePagePriorityThread < 5 )
    v11 = 7;
  MiSetVaAgeList(a1, a2, 1u, v11);
  result = 0xFFFF800000000000uLL;
  if ( a2 < 0xFFFF800000000000uLL )
  {
    if ( (unsigned int)MI_PFN_IS_PROTO(a3) )
      MiUnlockPageTableCharges(48 * (*(_QWORD *)(a3 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    v13 = MI_READ_PTE_LOCK_FREE(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    return MiUnlockPageTableCharges(48 * ((v13 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  }
  return result;
}
