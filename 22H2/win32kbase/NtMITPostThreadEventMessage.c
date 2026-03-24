/*
 * XREFs of NtMITPostThreadEventMessage @ 0x1C012B630
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C002FF70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0043604 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     PtiFromThreadId @ 0x1C0083920 (PtiFromThreadId.c)
 *     PostThreadEvent @ 0x1C01AECE0 (PostThreadEvent.c)
 */

__int64 __fastcall NtMITPostThreadEventMessage(int a1, __int64 *a2, int a3, int a4, unsigned int a5)
{
  CInputThread *v9; // rcx
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax

  EnterCrit(0, 1);
  v11 = 0;
  if ( CInputThread::IsInputThread(v9) )
  {
    LODWORD(v13) = 0;
    if ( a2 )
    {
      if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
        a2 = (__int64 *)MmUserProbeAddress;
      v13 = *a2;
    }
    v14 = PtiFromThreadId(a1);
    if ( v14 )
    {
      LOBYTE(v11) = (unsigned __int8)PostThreadEvent(v14, v13, a3, a4, a5, 0LL) != 0;
      goto LABEL_12;
    }
    v12 = 87LL;
  }
  else
  {
    v12 = 5LL;
  }
  UserSetLastError(v12, v10);
LABEL_12:
  UserSessionSwitchLeaveCrit();
  return v11;
}
