/*
 * XREFs of SshpWnfCallback @ 0x140879A40
 * Callers:
 *     <none>
 * Callees:
 *     SSHSupportQueryInterruptTime @ 0x1402A4AA4 (SSHSupportQueryInterruptTime.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x140793060 (ExQueryWnfStateData.c)
 *     SshpSendSessionData @ 0x140879EBC (SshpSendSessionData.c)
 */

__int64 __fastcall SshpWnfCallback(__int64 a1, _QWORD *a2)
{
  int v2; // ebx
  unsigned int v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+28h] [rbp-30h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  if ( *a2 == WNF_PO_UMPO_SCENARIO_CHANGE )
  {
    v4 = 24;
    v2 = ExQueryWnfStateData(a1, &v5, &v6, &v4);
    if ( v2 >= 0 )
    {
      SshpSendSessionData();
      SshpSessionId = v7;
      SshpSessionGuid = v6;
      SSHSupportQueryInterruptTime();
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v2;
}
