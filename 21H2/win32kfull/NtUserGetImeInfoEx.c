/*
 * XREFs of NtUserGetImeInfoEx @ 0x1C00CE910
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?GetImeInfoEx@@YAHPEAUtagWINDOWSTATION@@PEAUtagIMEINFOEX@@W4_IMEINFOEXCLASS@@@Z @ 0x1C00CEB0C (-GetImeInfoEx@@YAHPEAUtagWINDOWSTATION@@PEAUtagIMEINFOEX@@W4_IMEINFOEXCLASS@@@Z.c)
 *     _GetProcessWindowStation @ 0x1C00CEC40 (_GetProcessWindowStation.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall NtUserGetImeInfoEx(_OWORD *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  _BYTE *v8; // rdx
  _OWORD *v9; // rax
  _OWORD *v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 ProcessWindowStation; // rax
  int ImeInfo; // edi
  _OWORD *v15; // rcx
  _BYTE v17[352]; // [rsp+40h] [rbp-178h] BYREF

  memset(v17, 0, sizeof(v17));
  EnterSharedCrit(v5, v4, v6);
  if ( (*gpsi & 4) != 0 )
  {
    v8 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v8 = (_BYTE *)MmUserProbeAddress;
    *v8 = *v8;
    v8[351] = v8[351];
    v9 = a1;
    v10 = v17;
    v11 = 2LL;
    v12 = 2LL;
    do
    {
      *v10 = *v9;
      v10[1] = v9[1];
      v10[2] = v9[2];
      v10[3] = v9[3];
      v10[4] = v9[4];
      v10[5] = v9[5];
      v10[6] = v9[6];
      v10 += 8;
      *(v10 - 1) = v9[7];
      v9 += 8;
      --v12;
    }
    while ( v12 );
    *v10 = *v9;
    v10[1] = v9[1];
    v10[2] = v9[2];
    v10[3] = v9[3];
    v10[4] = v9[4];
    v10[5] = v9[5];
    ProcessWindowStation = GetProcessWindowStation(0LL);
    ImeInfo = GetImeInfoEx(ProcessWindowStation, v17, a2);
    v15 = v17;
    do
    {
      *a1 = *v15;
      a1[1] = v15[1];
      a1[2] = v15[2];
      a1[3] = v15[3];
      a1[4] = v15[4];
      a1[5] = v15[5];
      a1[6] = v15[6];
      a1 += 8;
      *(a1 - 1) = v15[7];
      v15 += 8;
      --v11;
    }
    while ( v11 );
    *a1 = *v15;
    a1[1] = v15[1];
    a1[2] = v15[2];
    a1[3] = v15[3];
    a1[4] = v15[4];
    a1[5] = v15[5];
  }
  else
  {
    UserSetLastError(120LL, v7);
    ImeInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v15);
  return ImeInfo;
}
