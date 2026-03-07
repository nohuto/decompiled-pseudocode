__int64 __fastcall PopSendSuspendResumeApplicationNotification(__int64 a1, __int64 a2)
{
  char v2; // si
  unsigned int v3; // ebx
  void *i; // rcx
  int SessionId; // eax
  __int64 NextSession; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  void *v9; // rdi
  int v11; // [rsp+20h] [rbp-40h] BYREF
  __int128 v12; // [rsp+28h] [rbp-38h] BYREF
  int v13; // [rsp+38h] [rbp-28h]
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]

  v13 = 0;
  v15 = 0LL;
  LOBYTE(a2) = 1;
  v2 = a1;
  v12 = 0LL;
  v3 = 0;
  v14 = 0LL;
  PopDiagTraceSuspendResumeNotification(a1, a2);
  for ( i = 0LL; ; i = v9 )
  {
    NextSession = MmGetNextSession(i);
    v9 = (void *)NextSession;
    if ( !NextSession )
      break;
    SessionId = MmGetSessionId(NextSession);
    DWORD2(v12) = 0;
    v11 = SessionId;
    v13 = SessionId;
    HIDWORD(v12) = v2 == 0;
    v3 = PopSuspendResumeInvocation(&v12);
    if ( !v2 )
    {
      HIDWORD(v12) = 2;
      v3 = PopSuspendResumeInvocation(&v12);
    }
    if ( !v3 )
    {
      LOBYTE(v14) = 0;
      DWORD1(v14) = 2;
      HIDWORD(v14) = 0x80000000;
      v15 = 0x140000000ELL;
      DWORD2(v14) = v2 != 0 ? 5 : 1;
      v3 = PopDispatchStateCallout(&v14, (__int64)&v11);
    }
  }
  LOBYTE(v7) = 1;
  LOBYTE(v8) = v2;
  PopDiagTraceSuspendResumeNotification(v8, v7);
  return v3;
}
