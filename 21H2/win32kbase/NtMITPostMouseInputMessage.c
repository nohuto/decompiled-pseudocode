/*
 * XREFs of NtMITPostMouseInputMessage @ 0x1C012B240
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C002EB00 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0042194 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     PostMouseInputMessage @ 0x1C01AECE0 (PostMouseInputMessage.c)
 */

__int64 __fastcall NtMITPostMouseInputMessage(__int64 *a1, unsigned int a2, __int64 *a3)
{
  CInputThread *v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // edi
  __int64 v9; // r9
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  EnterCrit(0, 1);
  v8 = 0;
  if ( CInputThread::IsInputThread(v6) )
  {
    v11 = 0LL;
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      a1 = (__int64 *)MmUserProbeAddress;
    v9 = *a1;
    if ( a3 )
    {
      if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
        a3 = (__int64 *)MmUserProbeAddress;
      v11 = *a3;
      a3 = &v11;
    }
    v8 = (unsigned __int8)PostMouseInputMessage(v9, a2, a3) == 0 ? 0xC0000001 : 0;
  }
  else
  {
    UserSetLastError(5LL, v7);
  }
  UserSessionSwitchLeaveCrit();
  return v8;
}
