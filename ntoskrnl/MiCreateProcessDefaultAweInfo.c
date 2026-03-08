/*
 * XREFs of MiCreateProcessDefaultAweInfo @ 0x140A3EA20
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x140A3D6E8 (MiAllocateUserPhysicalPages.c)
 *     MiCreateUserPhysicalView @ 0x140A3EB08 (MiCreateUserPhysicalView.c)
 * Callees:
 *     MiLockAweVadsExclusive @ 0x140648A8C (MiLockAweVadsExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x1406498DC (MiUnlockAweVadsExclusive.c)
 *     MiAllocateAweInfo @ 0x140A3D3BC (MiAllocateAweInfo.c)
 *     MiDeleteAweInfo @ 0x140A3EDD8 (MiDeleteAweInfo.c)
 */

__int64 __fastcall MiCreateProcessDefaultAweInfo(KPROCESSOR_MODE a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbp
  unsigned __int64 v5; // r15
  __int64 v6; // rbx
  __int64 result; // rax
  int v8; // edi
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v5 = Process[1].ActiveProcessors.StaticBitmap[28];
  v6 = *(_QWORD *)(v5 + 376);
  v9 = v6;
  if ( !v6 )
  {
    result = MiAllocateAweInfo(0LL, 1, 0, a1, &v9);
    if ( (int)result < 0 )
      return result;
    v8 = 0;
    MiLockAweVadsExclusive((__int64)CurrentThread);
    v6 = v9;
    if ( !*(_QWORD *)(Process[1].ActiveProcessors.StaticBitmap[28] + 376) )
    {
      *(_QWORD *)(v5 + 376) = v9;
      v8 = 1;
    }
    MiUnlockAweVadsExclusive((__int64)CurrentThread);
    if ( !v8 )
    {
      MiDeleteAweInfo(KeGetCurrentThread()->ApcState.Process, v9);
      v6 = *(_QWORD *)(Process[1].ActiveProcessors.StaticBitmap[28] + 376);
    }
  }
  *a2 = v6;
  return 0LL;
}
