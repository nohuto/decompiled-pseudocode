/*
 * XREFs of NtUserRemoteConnect @ 0x1C00D46B0
 * Callers:
 *     <none>
 * Callees:
 *     wcsncpycch @ 0x1C00D50E0 (wcsncpycch.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C01593E0 (__report_rangecheckfailure.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserRemoteConnect(_OWORD *a1, unsigned int a2, volatile void *a3)
{
  SIZE_T v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 v9; // rcx
  _OWORD *v10; // rax
  __int64 v11; // rcx
  _OWORD *v12; // rax
  _OWORD *v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // ebx
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // ebx
  _BYTE v20[320]; // [rsp+30h] [rbp-2F8h] BYREF
  _QWORD v21[10]; // [rsp+170h] [rbp-1B8h] BYREF
  _BYTE v22[320]; // [rsp+1C0h] [rbp-168h] BYREF
  _WORD v23[12]; // [rsp+300h] [rbp-28h] BYREF

  v4 = a2;
  memset(v21, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v21[1]);
  v21[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v21[3]) = 31;
  LOBYTE(v21[6]) = -1;
  memset(v22, 0, sizeof(v22));
  EnterCrit(0LL, 0LL);
  CurrentProcess = PsGetCurrentProcess(v7, v6);
  v9 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( a1 + 20 < a1 || (unsigned __int64)(a1 + 20) > MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    v10 = v20;
    v11 = 2LL;
    do
    {
      *v10 = *a1;
      v10[1] = a1[1];
      v10[2] = a1[2];
      v10[3] = a1[3];
      v10[4] = a1[4];
      v10[5] = a1[5];
      v10[6] = a1[6];
      v10 += 8;
      *(v10 - 1) = a1[7];
      a1 += 8;
      --v11;
    }
    while ( v11 );
    *v10 = *a1;
    v10[1] = a1[1];
    v10[2] = a1[2];
    v10[3] = a1[3];
    v12 = v22;
    v13 = v20;
    v14 = 2LL;
    do
    {
      *v12 = *v13;
      v12[1] = v13[1];
      v12[2] = v13[2];
      v12[3] = v13[3];
      v12[4] = v13[4];
      v12[5] = v13[5];
      v12[6] = v13[6];
      v12 += 8;
      *(v12 - 1) = v13[7];
      v13 += 8;
      --v14;
    }
    while ( v14 );
    *v12 = *v13;
    v12[1] = v13[1];
    v12[2] = v13[2];
    v12[3] = v13[3];
    v15 = v4;
    ProbeForRead(a3, v4, 2u);
    if ( (unsigned int)v4 > 9 )
      v15 = 9;
    wcsncpycch(v23, a3, v15);
    if ( 2 * (unsigned __int64)v15 >= 0x14 )
      _report_rangecheckfailure(v16);
    v23[v15] = 0;
    gptiTSRequest = gptiCurrent;
    v17 = xxxRemoteConnect(v22, v15, v23, v21, v15);
    v18 = v17;
    if ( v17 < 0 )
    {
      v9 = gptiTSRequest;
      gptiTSRequest = 0LL;
    }
  }
  else
  {
    v18 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v9);
  return v18;
}
