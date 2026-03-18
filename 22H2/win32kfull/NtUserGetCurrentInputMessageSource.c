/*
 * XREFs of NtUserGetCurrentInputMessageSource @ 0x1C00A1400
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00A14E4 (-_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetCurrentInputMessageSource(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  _BYTE *v5; // rdx
  ULONG64 v6; // rcx
  int CurrentInputMessageSource; // edi
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h]

  v4 = 0LL;
  v12 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  if ( a1 )
  {
    CurrentInputMessageSource = _GetCurrentInputMessageSource(0, (struct tagINPUT_MESSAGE_SOURCE *)&v12);
    if ( CurrentInputMessageSource )
    {
      v10 = v12;
      if ( (((_DWORD)v12 - 18) & 0xFFFFFFEF) == 0 )
        v10 = 2;
      LODWORD(v12) = v10;
      if ( PsGetCurrentProcessWow64Process() )
      {
        v13 = 1LL;
      }
      else
      {
        v13 = 4LL;
        v4 = 3LL;
      }
      if ( (v4 & a1) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = MmUserProbeAddress;
      v5 = (_BYTE *)a1;
      if ( a1 >= MmUserProbeAddress )
        v5 = (_BYTE *)MmUserProbeAddress;
      *v5 = *v5;
      v5[7] = v5[7];
      *(_QWORD *)a1 = v12;
    }
  }
  else
  {
    UserSetLastError(87LL);
    CurrentInputMessageSource = 0;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v8, v9);
  return CurrentInputMessageSource;
}
