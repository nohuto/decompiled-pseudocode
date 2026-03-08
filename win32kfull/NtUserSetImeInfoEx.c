/*
 * XREFs of NtUserSetImeInfoEx @ 0x1C00C2070
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     _GetProcessWindowStation @ 0x1C00BF460 (_GetProcessWindowStation.c)
 *     ?SetImeInfoEx@@YAHPEAUtagWINDOWSTATION@@PEAUtagIMEINFOEX@@@Z @ 0x1C00C23E8 (-SetImeInfoEx@@YAHPEAUtagWINDOWSTATION@@PEAUtagIMEINFOEX@@@Z.c)
 */

__int64 __fastcall NtUserSetImeInfoEx(_OWORD *a1)
{
  _OWORD *v2; // rax
  __int64 v3; // rcx
  struct tagWINDOWSTATION *ProcessWindowStation; // rax
  __int64 v5; // rcx
  int v6; // ebx
  _BYTE v8[360]; // [rsp+30h] [rbp-168h] BYREF

  EnterCrit(0LL, 0LL);
  if ( (*gpsi & 4) != 0 )
  {
    v2 = v8;
    v3 = 2LL;
    do
    {
      *v2 = *a1;
      v2[1] = a1[1];
      v2[2] = a1[2];
      v2[3] = a1[3];
      v2[4] = a1[4];
      v2[5] = a1[5];
      v2[6] = a1[6];
      v2 += 8;
      *(v2 - 1) = a1[7];
      a1 += 8;
      --v3;
    }
    while ( v3 );
    *v2 = *a1;
    v2[1] = a1[1];
    v2[2] = a1[2];
    v2[3] = a1[3];
    v2[4] = a1[4];
    v2[5] = a1[5];
    ProcessWindowStation = (struct tagWINDOWSTATION *)GetProcessWindowStation(0LL);
    v6 = SetImeInfoEx(ProcessWindowStation, (struct tagIMEINFOEX *)v8);
  }
  else
  {
    UserSetLastError(120);
    v6 = 0;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
