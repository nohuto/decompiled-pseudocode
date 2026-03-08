/*
 * XREFs of PspWaitOnAllProcessesJobCallback @ 0x1409B04F0
 * Callers:
 *     <none>
 * Callees:
 *     PspGetNextJobProcess @ 0x1406F90E0 (PspGetNextJobProcess.c)
 *     PspWaitForUsermodeExit @ 0x1409B0E8C (PspWaitForUsermodeExit.c)
 */

__int64 __fastcall PspWaitOnAllProcessesJobCallback(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rsi
  _KPROCESS *v5; // r9
  _KPROCESS *NextJobProcess; // rax
  _KPROCESS *v7; // rbx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  v5 = 0LL;
  while ( 1 )
  {
    NextJobProcess = (_KPROCESS *)PspGetNextJobProcess(a1, (__int64)CurrentThread, &v9, v5);
    v7 = NextJobProcess;
    if ( !NextJobProcess )
      break;
    if ( (HIDWORD(NextJobProcess[2].Header.WaitListHead.Flink) & 0x40) == 0
      && NextJobProcess != KeGetCurrentThread()->ApcState.Process )
    {
      *(_BYTE *)(a2 + 4) |= 2u;
      PspWaitForUsermodeExit(NextJobProcess);
    }
    v5 = v7;
    a1 = v4;
  }
  return 0LL;
}
