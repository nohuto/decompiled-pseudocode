/*
 * XREFs of MiJoinSession @ 0x140728960
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1407289B8 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiJoinSession(volatile signed __int32 **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rdx
  volatile signed __int32 *v3; // rdx
  signed __int32 v4; // eax
  signed __int32 v5; // ett

  CurrentThread = KeGetCurrentThread();
  *a1 = 0LL;
  Process = CurrentThread->ApcState.Process;
  if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    return 1LL;
  v3 = (volatile signed __int32 *)Process[1].Affinity.StaticBitmap[25];
  if ( !v3 )
    return 1LL;
  v4 = *v3;
  while ( v4 )
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange(v3, v4 + 1, v4);
    if ( v5 == v4 )
    {
      _InterlockedIncrement(v3 + 3);
      *a1 = v3;
      return 1LL;
    }
  }
  return 0LL;
}
