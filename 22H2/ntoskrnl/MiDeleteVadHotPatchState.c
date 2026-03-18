/*
 * XREFs of MiDeleteVadHotPatchState @ 0x140A36A4C
 * Callers:
 *     MiFinishVadDeletion @ 0x140289BF0 (MiFinishVadDeletion.c)
 * Callees:
 *     MiUnlockVad @ 0x140289B80 (MiUnlockVad.c)
 *     MiGetVadWakeList @ 0x14028A050 (MiGetVadWakeList.c)
 *     MiLockVad @ 0x14029C6B0 (MiLockVad.c)
 *     MiDeleteHotPatchEntry @ 0x140A367C0 (MiDeleteHotPatchEntry.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteVadHotPatchState(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 VadWakeList; // rax
  void *v4; // rdi
  __int64 v5; // rbx

  CurrentThread = KeGetCurrentThread();
  VadWakeList = MiGetVadWakeList(a1, 512);
  v4 = (void *)VadWakeList;
  v5 = 0LL;
  if ( VadWakeList )
  {
    v5 = *(_QWORD *)(VadWakeList + 8);
    *(_DWORD *)(v5 + 68) |= 2u;
    if ( (*(_DWORD *)(v5 + 68) & 1) != 0 )
      v5 = 0LL;
  }
  MiUnlockVad((__int64)CurrentThread, a1);
  if ( v4 )
  {
    if ( v5 )
      MiDeleteHotPatchEntry((char *)v5);
    ExFreePoolWithTag(v4, 0);
  }
  return MiLockVad((__int64)CurrentThread, a1);
}
