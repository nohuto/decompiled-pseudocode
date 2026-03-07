__int64 __fastcall TdrTimedOperationWaitForSingleObject(
        struct _DXGK_TIMED_OPERATION *a1,
        PVOID Object,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        union _LARGE_INTEGER *a6)
{
  __int64 QuadPart; // rdx
  union _LARGE_INTEGER v11; // rcx
  unsigned int v12; // edi
  union _LARGE_INTEGER v14; // [rsp+30h] [rbp-18h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+38h] [rbp-10h] BYREF

  v14.QuadPart = 0LL;
  _TdrTimedOperationGetRelativeTimeLeft(a1, &v14);
  if ( v14.QuadPart )
  {
    if ( !a6 )
      goto LABEL_7;
    QuadPart = a6->QuadPart;
    if ( !a6->QuadPart )
      goto LABEL_7;
    v11.QuadPart = -QuadPart;
    if ( QuadPart <= 0 )
      v11 = *a6;
    Timeout = v11;
    if ( v11.QuadPart < v14.QuadPart )
LABEL_7:
      Timeout = v14;
    v12 = KeWaitForSingleObject(Object, WaitReason, WaitMode, Alertable, &Timeout);
    _TdrTimedOperationGetRelativeTimeLeft(a1, &v14);
    if ( v14.QuadPart )
      return v12;
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
