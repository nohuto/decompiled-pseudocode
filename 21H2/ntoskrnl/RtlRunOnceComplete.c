/*
 * XREFs of RtlRunOnceComplete @ 0x1405E9FD0
 * Callers:
 *     RtlRunOnceExecuteOnce @ 0x1405E9E40 (RtlRunOnceExecuteOnce.c)
 * Callees:
 *     KeAlertThreadByThreadId @ 0x14027E000 (KeAlertThreadByThreadId.c)
 */

NTSTATUS __stdcall RtlRunOnceComplete(PRTL_RUN_ONCE RunOnce, ULONG Flags, PVOID Context)
{
  unsigned int v4; // edx
  unsigned __int64 Value; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r8
  __int64 v9; // r8
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rbx
  __int64 v12; // rcx
  unsigned __int64 v13; // rtt

  if ( ((Flags - 1) & Flags) != 0 || (Flags & 0xFFFFFFF9) != 0 )
    return -1073741584;
  v4 = ~(unsigned __int8)(Flags >> 1) & 3;
  if ( Context && (((unsigned __int8)Context & 3) != 0 || (v4 & 2) == 0) )
    return -1073741583;
  _m_prefetchw(RunOnce);
  Value = RunOnce->Value;
  v7 = RunOnce->Value & 3;
  v8 = (unsigned __int64)Context & 0xFFFFFFFFFFFFFFFCuLL | (v4 >= 2 ? 2 : 0);
  if ( v7 == 1 )
  {
    if ( (v4 & 1) != 0 )
    {
      v9 = _InterlockedExchange64((volatile __int64 *)RunOnce, v8);
      if ( (v9 & 3) == 1 )
      {
        v10 = v9 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v10 )
        {
          do
          {
            v11 = *(_QWORD *)v10;
            v12 = *(_QWORD *)(v10 + 24);
            _interlockedbittestandset((volatile signed __int32 *)(v10 + 36), 2u);
            KeAlertThreadByThreadId(v12);
            v10 = v11;
          }
          while ( v11 );
        }
        return 0;
      }
      return -1073741734;
    }
    return -1073741584;
  }
  if ( v7 != 3 )
    return -1073741823;
  if ( (v4 & 1) != 0 )
    return -1073741584;
  v13 = RunOnce->Value;
  if ( v13 == _InterlockedCompareExchange64((volatile signed __int64 *)RunOnce, v8, Value) )
    return 0;
  return -1073741771;
}
