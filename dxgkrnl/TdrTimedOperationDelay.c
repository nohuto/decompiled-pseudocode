__int64 __fastcall TdrTimedOperationDelay(
        struct _DXGK_TIMED_OPERATION *a1,
        KPROCESSOR_MODE a2,
        BOOLEAN a3,
        union _LARGE_INTEGER *a4)
{
  unsigned int v5; // ebp
  union _LARGE_INTEGER v9; // rbx
  __int64 QuadPart; // rcx
  union _LARGE_INTEGER v11; // rax
  union _LARGE_INTEGER v13; // [rsp+20h] [rbp-28h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+28h] [rbp-20h] BYREF

  v5 = 0;
  v13.QuadPart = 0LL;
  _TdrTimedOperationGetRelativeTimeLeft(a1, &v13);
  v9 = v13;
  if ( v13.QuadPart )
  {
    if ( KeGetCurrentIrql() <= 1u )
    {
      if ( a4 )
      {
        QuadPart = a4->QuadPart;
        if ( a4->QuadPart )
        {
          v11.QuadPart = -QuadPart;
          if ( QuadPart <= 0 )
            v11 = *a4;
          if ( v11.QuadPart < v9.QuadPart )
            v11 = v9;
          Interval = v11;
          v5 = KeDelayExecutionThread(a2, a3, &Interval);
          _TdrTimedOperationGetRelativeTimeLeft(a1, &v13);
          v9 = v13;
        }
      }
    }
    if ( v9.QuadPart )
      return v5;
  }
  a1->TimeoutTriggered = 1;
  if ( (unsigned int)TdrTimedOperationAllowToDebugTimeout(a1) )
  {
    a1->StartTick.QuadPart = MEMORY[0xFFFFF78000000320];
    return 0LL;
  }
  else
  {
    if ( a1->OsHandled )
      TdrTimedOperationBugcheckOnTimeout();
    return 258LL;
  }
}
