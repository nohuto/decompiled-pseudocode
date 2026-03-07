__int64 __fastcall NtUserGetCurrentInputMessageSource(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  ULONG64 v5; // rcx
  int CurrentInputMessageSource; // edi
  int v7; // edx
  __int64 v8; // rcx
  _BYTE *v9; // rdx
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h]

  v4 = 0LL;
  v11 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  if ( a1 )
  {
    CurrentInputMessageSource = _GetCurrentInputMessageSource(0, (struct tagINPUT_MESSAGE_SOURCE *)&v11);
    if ( CurrentInputMessageSource )
    {
      v7 = v11;
      v8 = (unsigned int)(v11 - 18);
      if ( (v8 & 0xFFFFFFEF) == 0 )
        v7 = 2;
      LODWORD(v11) = v7;
      if ( PsGetCurrentProcessWow64Process(v8) )
      {
        v12 = 1LL;
      }
      else
      {
        v12 = 4LL;
        v4 = 3LL;
      }
      if ( (v4 & a1) != 0 )
        ExRaiseDatatypeMisalignment();
      v5 = MmUserProbeAddress;
      v9 = (_BYTE *)a1;
      if ( a1 >= MmUserProbeAddress )
        v9 = (_BYTE *)MmUserProbeAddress;
      *v9 = *v9;
      v9[7] = v9[7];
      *(_QWORD *)a1 = v11;
    }
  }
  else
  {
    UserSetLastError(87);
    CurrentInputMessageSource = 0;
  }
  UserSessionSwitchLeaveCrit(v5);
  return CurrentInputMessageSource;
}
