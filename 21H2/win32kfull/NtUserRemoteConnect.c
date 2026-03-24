/*
 * XREFs of NtUserRemoteConnect @ 0x1C0131940
 * Callers:
 *     <none>
 * Callees:
 *     wcsncpycch @ 0x1C002467C (wcsncpycch.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C0165DB0 (__report_rangecheckfailure.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserRemoteConnect(_OWORD *a1, unsigned int a2, volatile void *a3)
{
  SIZE_T v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 CurrentProcess; // rax
  __int64 v10; // rcx
  _OWORD *v11; // rax
  __int64 v12; // rcx
  _OWORD *v13; // rax
  _OWORD *v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // ebx
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // ebx
  _BYTE v21[320]; // [rsp+30h] [rbp-2F8h] BYREF
  _QWORD v22[10]; // [rsp+170h] [rbp-1B8h] BYREF
  _BYTE v23[320]; // [rsp+1C0h] [rbp-168h] BYREF
  _WORD v24[12]; // [rsp+300h] [rbp-28h] BYREF

  v4 = a2;
  memset(v22, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v22[1]);
  v22[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v22[3]) = 31;
  LOBYTE(v22[6]) = -1;
  memset(v23, 0, sizeof(v23));
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v7, v6, v8);
  v10 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( a1 + 20 < a1 || (unsigned __int64)(a1 + 20) > MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    v11 = v21;
    v12 = 2LL;
    do
    {
      *v11 = *a1;
      v11[1] = a1[1];
      v11[2] = a1[2];
      v11[3] = a1[3];
      v11[4] = a1[4];
      v11[5] = a1[5];
      v11[6] = a1[6];
      v11 += 8;
      *(v11 - 1) = a1[7];
      a1 += 8;
      --v12;
    }
    while ( v12 );
    *v11 = *a1;
    v11[1] = a1[1];
    v11[2] = a1[2];
    v11[3] = a1[3];
    v13 = v23;
    v14 = v21;
    v15 = 2LL;
    do
    {
      *v13 = *v14;
      v13[1] = v14[1];
      v13[2] = v14[2];
      v13[3] = v14[3];
      v13[4] = v14[4];
      v13[5] = v14[5];
      v13[6] = v14[6];
      v13 += 8;
      *(v13 - 1) = v14[7];
      v14 += 8;
      --v15;
    }
    while ( v15 );
    *v13 = *v14;
    v13[1] = v14[1];
    v13[2] = v14[2];
    v13[3] = v14[3];
    v16 = v4;
    ProbeForRead(a3, v4, 2u);
    if ( (unsigned int)v4 > 9 )
      v16 = 9;
    wcsncpycch(v24, (__int64)a3, v16);
    if ( 2 * (unsigned __int64)v16 >= 0x14 )
      _report_rangecheckfailure(v17);
    v24[v16] = 0;
    gptiTSRequest = gptiCurrent;
    v18 = xxxRemoteConnect(v23, v16, v24, v22, v16);
    v19 = v18;
    if ( v18 < 0 )
    {
      v10 = gptiTSRequest;
      gptiTSRequest = 0LL;
    }
  }
  else
  {
    v19 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v10);
  return v19;
}
