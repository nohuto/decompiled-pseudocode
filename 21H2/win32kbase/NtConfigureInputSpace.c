/*
 * XREFs of NtConfigureInputSpace @ 0x1C0128AA0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00295D0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     EnterCrit @ 0x1C002EB00 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     ?AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z @ 0x1C006DE84 (-AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z.c)
 *     ??0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z @ 0x1C006DF88 (--0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z.c)
 *     ?FreeRegions@CInputSpace@@QEAAXXZ @ 0x1C00716D8 (-FreeRegions@CInputSpace@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 *     ?ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1C01B31E0 (-ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 *     ?Validate@CInputConfig@@SA_NAEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@K@Z @ 0x1C01B3628 (-Validate@CInputConfig@@SA_NAEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@K@Z.c)
 */

__int64 __fastcall NtConfigureInputSpace(ULONG64 a1, char *a2, unsigned int a3)
{
  __int64 v3; // rsi
  int v6; // ebx
  __int64 v7; // rdx
  unsigned int v8; // r14d
  char *v9; // rdi
  __int64 v10; // rcx
  ULONG64 v11; // rcx
  __int64 v12; // r15
  CInputConfig *v13; // rcx
  int v14; // r14d
  char *v15; // rax
  NTSTATUS v16; // eax
  __int64 v18; // [rsp+40h] [rbp-8C8h] BYREF
  int v19; // [rsp+48h] [rbp-8C0h]
  __int64 v20; // [rsp+50h] [rbp-8B8h]
  int v21; // [rsp+58h] [rbp-8B0h]
  _OWORD v22[12]; // [rsp+70h] [rbp-898h] BYREF
  __int64 v23; // [rsp+130h] [rbp-7D8h]
  _BYTE v24[504]; // [rsp+138h] [rbp-7D0h] BYREF
  __int64 v25; // [rsp+330h] [rbp-5D8h] BYREF
  int v26; // [rsp+338h] [rbp-5D0h]

  v3 = a3;
  v6 = 1;
  EnterCrit(0, 1);
  v18 = 0LL;
  v19 = 0;
  CInputSpace::CInputSpace((CInputSpace *)&v25, (const struct INPUT_SPACE *)&v18, 0);
  v8 = 0;
  v9 = 0LL;
  if ( (_DWORD)v3 )
  {
    v8 = 200 * v3;
    if ( (unsigned __int64)(200 * v3) > 0xFFFFFFFF )
    {
LABEL_5:
      v10 = 87LL;
      goto LABEL_6;
    }
    v9 = (char *)Win32AllocPoolWithQuota(v8, 0x63736955u);
    if ( !v9 )
    {
      v10 = 8LL;
LABEL_6:
      v6 = 0;
LABEL_7:
      UserSetLastError(v10, v7);
      goto LABEL_26;
    }
  }
  v11 = a1 + 12;
  if ( a1 + 12 < a1 || v11 > MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  v20 = *(_QWORD *)a1;
  v21 = *(_DWORD *)(a1 + 8);
  v25 = v20;
  v26 = v21;
  if ( (_DWORD)v3 )
  {
    v12 = 200 * v3;
    if ( 200 * v3 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v11) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a2[v12] > MmUserProbeAddress || &a2[v12] < a2 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v9, a2, v8);
  }
  if ( !CInputConfig::Validate((const struct INPUT_SPACE *)&v25, (const struct INPUT_SPACE_REGION *)v9, v3) )
    goto LABEL_5;
  if ( (_DWORD)v3 )
  {
    v14 = 0;
    do
    {
      v15 = &v9[200 * v14];
      v22[0] = *(_OWORD *)v15;
      v22[1] = *((_OWORD *)v15 + 1);
      v22[2] = *((_OWORD *)v15 + 2);
      v22[3] = *((_OWORD *)v15 + 3);
      v22[4] = *((_OWORD *)v15 + 4);
      v22[5] = *((_OWORD *)v15 + 5);
      v22[6] = *((_OWORD *)v15 + 6);
      v22[7] = *((_OWORD *)v15 + 7);
      v15 += 128;
      v22[8] = *(_OWORD *)v15;
      v22[9] = *((_OWORD *)v15 + 1);
      v22[10] = *((_OWORD *)v15 + 2);
      v22[11] = *((_OWORD *)v15 + 3);
      v23 = *((_QWORD *)v15 + 8);
      memset(v24, 0, 289);
      memset(&v24[296], 0, 0xC8uLL);
      v16 = CInputSpace::AddRegion((CInputSpace *)&v25, (const struct CInputSpaceRegion *)v22, 0LL);
      if ( v16 < 0 )
        goto LABEL_25;
    }
    while ( ++v14 != (_DWORD)v3 );
  }
  v16 = CInputConfig::ConfigureInputSpace(v13, (struct CInputSpace *)&v25);
  if ( v16 < 0 )
  {
LABEL_25:
    v6 = 0;
    v10 = RtlNtStatusToDosError(v16);
    goto LABEL_7;
  }
LABEL_26:
  CInputSpace::FreeRegions((CInputSpace *)&v25);
  if ( v9 )
    Win32FreePool((__int64)v9);
  UserSessionSwitchLeaveCrit();
  return v6;
}
