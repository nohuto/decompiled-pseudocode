/*
 * XREFs of MiInitializeTbFlushStamps @ 0x14020E538
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x14020E220 (MiDeleteNonPagedPoolPte.c)
 *     MiReleasePtes @ 0x14027CE90 (MiReleasePtes.c)
 *     MmUnmapViewInSystemCache @ 0x140285250 (MmUnmapViewInSystemCache.c)
 *     MiDeleteSystemPagableVm @ 0x1402B04B0 (MiDeleteSystemPagableVm.c)
 * Callees:
 *     MiSetPteTimeStamp @ 0x14020E59C (MiSetPteTimeStamp.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 */

struct _KTHREAD *__fastcall MiInitializeTbFlushStamps(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  int v4; // esi
  struct _KTHREAD *result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  bool v9; // zf
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = MI_READ_PTE_LOCK_FREE(a1);
  _InterlockedOr(v10, 0);
  v3 = MiSetPteTimeStamp(v2, (unsigned int)KiTbFlushTimeStamp);
  v4 = 0;
  result = (struct _KTHREAD *)MiPteInShadowRange(a1);
  if ( !(_DWORD)result )
    goto LABEL_2;
  result = (struct _KTHREAD *)MiPteHasShadow(v7, v6, v8);
  if ( (_DWORD)result )
  {
    v4 = 1;
    if ( HIBYTE(word_140C6697C) )
      goto LABEL_2;
    v9 = (v3 & 1) == 0;
  }
  else
  {
    result = KeGetCurrentThread();
    if ( (HIDWORD(result->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      goto LABEL_2;
    v9 = (v3 & 1) == 0;
  }
  if ( !v9 )
  {
    result = (struct _KTHREAD *)0x8000000000000000LL;
    v3 |= 0x8000000000000000uLL;
  }
LABEL_2:
  *a1 = v3;
  if ( v4 )
    return (struct _KTHREAD *)MiWritePteShadow(a1, v3);
  return result;
}
