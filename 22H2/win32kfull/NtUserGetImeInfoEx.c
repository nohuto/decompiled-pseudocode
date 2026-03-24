/*
 * XREFs of NtUserGetImeInfoEx @ 0x1C000EB90
 * Callers:
 *     <none>
 * Callees:
 *     GetImeInfoEx @ 0x1C000ED94 (GetImeInfoEx.c)
 *     _GetProcessWindowStation @ 0x1C000EED0 (_GetProcessWindowStation.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall NtUserGetImeInfoEx(_OWORD *a1, unsigned int a2)
{
  _BYTE *v4; // rdx
  _OWORD *v5; // rax
  _OWORD *v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 ProcessWindowStation; // rax
  int ImeInfo; // edi
  _OWORD *v11; // rcx
  _BYTE v13[352]; // [rsp+40h] [rbp-178h] BYREF

  memset(v13, 0, sizeof(v13));
  EnterSharedCrit(0LL, 1LL);
  if ( (*gpsi & 4) != 0 )
  {
    v4 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v4 = (_BYTE *)MmUserProbeAddress;
    *v4 = *v4;
    v4[351] = v4[351];
    v5 = a1;
    v6 = v13;
    v7 = 2LL;
    v8 = 2LL;
    do
    {
      *v6 = *v5;
      v6[1] = v5[1];
      v6[2] = v5[2];
      v6[3] = v5[3];
      v6[4] = v5[4];
      v6[5] = v5[5];
      v6[6] = v5[6];
      v6 += 8;
      *(v6 - 1) = v5[7];
      v5 += 8;
      --v8;
    }
    while ( v8 );
    *v6 = *v5;
    v6[1] = v5[1];
    v6[2] = v5[2];
    v6[3] = v5[3];
    v6[4] = v5[4];
    v6[5] = v5[5];
    ProcessWindowStation = GetProcessWindowStation(0LL, 0LL);
    ImeInfo = GetImeInfoEx(ProcessWindowStation, v13, a2);
    v11 = v13;
    do
    {
      *a1 = *v11;
      a1[1] = v11[1];
      a1[2] = v11[2];
      a1[3] = v11[3];
      a1[4] = v11[4];
      a1[5] = v11[5];
      a1[6] = v11[6];
      a1 += 8;
      *(a1 - 1) = v11[7];
      v11 += 8;
      --v7;
    }
    while ( v7 );
    *a1 = *v11;
    a1[1] = v11[1];
    a1[2] = v11[2];
    a1[3] = v11[3];
    a1[4] = v11[4];
    a1[5] = v11[5];
  }
  else
  {
    UserSetLastError(120LL);
    ImeInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v11);
  return ImeInfo;
}
