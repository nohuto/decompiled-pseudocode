__int64 PopPolicyWorkerNotify()
{
  unsigned int v0; // ebx
  ULONG v1; // eax
  __int64 *v2; // rcx
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  while ( 1 )
  {
    v0 = _InterlockedExchange(&PopNotifyEvents, 0);
    if ( !v0 )
      break;
    do
    {
      _BitScanForward(&v1, v0);
      v0 &= ~(1 << v1);
      Interval.LowPart = v1;
      v2 = &PopNotifyWork[2 * v1];
      if ( *v2 )
      {
        ((void (__fastcall *)(_QWORD))*v2)(*((unsigned int *)v2 + 2));
        if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
          __fastfail(0x20u);
      }
    }
    while ( v0 );
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return 0LL;
}
