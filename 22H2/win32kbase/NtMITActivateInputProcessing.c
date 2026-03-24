/*
 * XREFs of NtMITActivateInputProcessing @ 0x1C00887C0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C002FF70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0043604 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     UserActivateMITInputProcessing @ 0x1C0088848 (UserActivateMITInputProcessing.c)
 */

__int64 __fastcall NtMITActivateInputProcessing(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  CInputThread *v5; // rcx
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  v9 = 0LL;
  EnterCrit(0, 1);
  if ( CInputThread::IsInputThread(v5) )
  {
    v7 = UserActivateMITInputProcessing(a1, &v9);
    v4 = v9;
  }
  else
  {
    v7 = 0;
    UserSetLastError(5LL, v6);
  }
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_QWORD *)MmUserProbeAddress;
  *a2 = v4;
  UserSessionSwitchLeaveCrit();
  return v7;
}
