/*
 * XREFs of ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C01DDCF0
 * Callers:
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C01DDB7C (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z @ 0x1C00161D0 (--_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1C0016524 (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     CreateTokenManagerSessionGlobal @ 0x1C0016FC4 (CreateTokenManagerSessionGlobal.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0OUTPUTDUPL_SESSION_MGR@@QEAA@XZ @ 0x1C01DE294 (--0OUTPUTDUPL_SESSION_MGR@@QEAA@XZ.c)
 *     ?Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ @ 0x1C01DE304 (-Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ.c)
 */

DXGSESSIONDATA *__fastcall DXGSESSIONDATA::DXGSESSIONDATA(DXGSESSIONDATA *this, unsigned int a2)
{
  __int64 v2; // r15
  CTokenManager **v3; // r12
  char *v4; // r13
  DispBrokerClientHandle **v6; // rcx
  OUTPUTDUPL_SESSION_MGR *v7; // rax
  OUTPUTDUPL_SESSION_MGR *v8; // rax
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(_DWORD *); // rax
  int v15; // eax
  __int64 (*v16)(void); // rax
  __int64 (*v17)(void); // rax
  struct DXGPROCESS *v18; // rax
  __int64 v19; // rcx
  void *CurrentProcess; // rax
  __int64 ProcessServerSilo; // rax
  bool v22; // al
  struct _KEVENT *v23; // rax
  OUTPUTDUPL_SESSION_MGR *v25; // rcx
  __int64 v26; // rbx
  __int64 HostSilo; // rax
  __int64 v28; // rdi
  int v29; // ebx
  int v30; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+54h] [rbp-ACh] BYREF
  void *EventHandle; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v33[2]; // [rsp+60h] [rbp-A0h] BYREF
  char *v34; // [rsp+68h] [rbp-98h]
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  __int64 v36; // [rsp+80h] [rbp-80h] BYREF
  int v37; // [rsp+88h] [rbp-78h]
  const wchar_t *v38; // [rsp+90h] [rbp-70h]
  int *v39; // [rsp+98h] [rbp-68h]
  int v40; // [rsp+A0h] [rbp-60h]
  __int64 v41; // [rsp+A8h] [rbp-58h]
  int v42; // [rsp+B0h] [rbp-50h]
  __int64 v43; // [rsp+B8h] [rbp-48h]
  int v44; // [rsp+C0h] [rbp-40h]
  __int128 v45; // [rsp+C8h] [rbp-38h]
  __int128 v46; // [rsp+D8h] [rbp-28h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  __int64 v48; // [rsp+F0h] [rbp-10h] BYREF
  int v49; // [rsp+F8h] [rbp-8h]
  const wchar_t *v50; // [rsp+100h] [rbp+0h]
  int *v51; // [rsp+108h] [rbp+8h]
  int v52; // [rsp+110h] [rbp+10h]
  __int64 v53; // [rsp+118h] [rbp+18h]
  int v54; // [rsp+120h] [rbp+20h]
  __int64 v55; // [rsp+128h] [rbp+28h]
  int v56; // [rsp+130h] [rbp+30h]
  __int128 v57; // [rsp+138h] [rbp+38h]
  __int128 v58; // [rsp+148h] [rbp+48h]
  __int64 v59; // [rsp+158h] [rbp+58h]
  __int64 v60; // [rsp+160h] [rbp+60h] BYREF
  int v61; // [rsp+168h] [rbp+68h]
  const wchar_t *v62; // [rsp+170h] [rbp+70h]
  int *v63; // [rsp+178h] [rbp+78h]
  int v64; // [rsp+180h] [rbp+80h]
  __int64 v65; // [rsp+188h] [rbp+88h]
  int v66; // [rsp+190h] [rbp+90h]
  __int64 v67; // [rsp+198h] [rbp+98h]
  int v68; // [rsp+1A0h] [rbp+A0h]
  __int128 v69; // [rsp+1A8h] [rbp+A8h]
  __int128 v70; // [rsp+1B8h] [rbp+B8h]
  __int64 v71; // [rsp+1C8h] [rbp+C8h]
  int v72; // [rsp+220h] [rbp+120h] BYREF
  char v73; // [rsp+228h] [rbp+128h] BYREF
  _NT_PRODUCT_TYPE ProductType; // [rsp+230h] [rbp+130h] BYREF
  int v75; // [rsp+238h] [rbp+138h] BYREF

  v2 = a2;
  *(_DWORD *)this = a2;
  v3 = (CTokenManager **)((char *)this + 18744);
  *((_QWORD *)this + 3) = 0LL;
  v4 = (char *)this + 18776;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = -1;
  *((_DWORD *)this + 14) = 66;
  *((_DWORD *)this + 4624) = 0;
  *((_WORD *)this + 9250) = 0;
  *((_BYTE *)this + 18503) = 0;
  *((_DWORD *)this + 4630) = 0;
  *((_QWORD *)this + 2316) = 0LL;
  *((_QWORD *)this + 2317) = 0LL;
  *((_QWORD *)this + 2318) = 0LL;
  *((_QWORD *)this + 2319) = 0LL;
  *((_DWORD *)this + 4640) = 0;
  *((_DWORD *)this + 4641) = 49;
  *((_DWORD *)this + 4642) = 61;
  *((_DWORD *)this + 4658) = 0;
  *((_QWORD *)this + 2330) = 0LL;
  *((_QWORD *)this + 2334) = 0LL;
  *((_QWORD *)this + 2335) = 0LL;
  *((_QWORD *)this + 2336) = 0LL;
  *((_DWORD *)this + 4674) = 0;
  *((_DWORD *)this + 4675) = 81;
  *((_DWORD *)this + 4676) = 1;
  *((_QWORD *)this + 2339) = 0LL;
  *((_QWORD *)this + 2340) = 0LL;
  *((_QWORD *)this + 2344) = 0LL;
  *((_DWORD *)this + 4690) = 4;
  *((_QWORD *)this + 2346) = (char *)this + 18776;
  *((_QWORD *)this + 2343) = 0LL;
  *((_QWORD *)this + 2364) = 0LL;
  *((_QWORD *)this + 2365) = 0LL;
  *((_QWORD *)this + 2366) = 0LL;
  *((_DWORD *)this + 4734) = 0;
  *((_DWORD *)this + 4735) = -1;
  *((_DWORD *)this + 4736) = 60;
  *((_DWORD *)this + 4738) = 0;
  *((_QWORD *)this + 2370) = 0LL;
  *((_QWORD *)this + 2371) = 0LL;
  *((_WORD *)this + 9488) = 0;
  *((_QWORD *)this + 2373) = 0LL;
  *((_QWORD *)this + 2374) = 0LL;
  *((_DWORD *)this + 4750) = 0;
  *((_DWORD *)this + 4751) = 1;
  *((_DWORD *)this + 4752) = -1;
  v6 = (DispBrokerClientHandle **)((char *)this + 19016);
  *v6 = 0LL;
  DispBrokerClientReference::Assign(v6, 0LL);
  *((_QWORD *)this + 2379) = 0LL;
  *((_QWORD *)this + 2380) = 0LL;
  *((_QWORD *)this + 2381) = 0LL;
  *((_DWORD *)this + 4764) = 0;
  *((_DWORD *)this + 4765) = -1;
  *((_DWORD *)this + 4766) = 1;
  *((_QWORD *)this + 2385) = 0LL;
  *((_QWORD *)this + 2384) = 0LL;
  *((_QWORD *)this + 2387) = 0LL;
  *((_QWORD *)this + 2388) = 0LL;
  *((_QWORD *)this + 2389) = 0LL;
  *((_DWORD *)this + 4780) = 0;
  *((_DWORD *)this + 4781) = -1;
  *((_DWORD *)this + 4782) = 1;
  *((_QWORD *)this + 2392) = 0LL;
  *((_DWORD *)this + 4786) = 0;
  *((_DWORD *)this + 4787) = 1;
  *((_QWORD *)this + 2394) = 0LL;
  *((_QWORD *)this + 2396) = 0LL;
  *((_QWORD *)this + 2397) = 0LL;
  *((_QWORD *)this + 2398) = 0LL;
  *((_DWORD *)this + 4798) = 0;
  *((_DWORD *)this + 4799) = -1;
  *((_DWORD *)this + 4800) = 1;
  ProductType = 0;
  v7 = (OUTPUTDUPL_SESSION_MGR *)operator new[](0x208uLL, 0x674D444Fu, 256LL);
  if ( v7 )
    v8 = OUTPUTDUPL_SESSION_MGR::OUTPUTDUPL_SESSION_MGR(v7);
  else
    v8 = 0LL;
  *((_QWORD *)this + 1) = v8;
  if ( v8 && (int)OUTPUTDUPL_SESSION_MGR::Initialize(v8) < 0 )
  {
    v25 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)this + 1);
    if ( v25 )
      OUTPUTDUPL_SESSION_MGR::`scalar deleting destructor'(v25);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_QWORD *)this + 2323) = (char *)this + 18576;
  *((_QWORD *)this + 2322) = (char *)this + 18576;
  *((_QWORD *)this + 2325) = (char *)this + 18592;
  *((_QWORD *)this + 2324) = (char *)this + 18592;
  *((_QWORD *)this + 2327) = (char *)this + 18608;
  *((_QWORD *)this + 2326) = (char *)this + 18608;
  RtlGetNtProductType(&ProductType);
  RtlGetSuiteMask();
  *((_BYTE *)this + 18505) = ProductType != NtProductServer
                          || !g_bSkuSupportMultipleUsers
                          || (v75 = 0,
                              v30 = 0,
                              v31 = 0,
                              DestinationString = 0LL,
                              RtlInitUnicodeString(
                                &DestinationString,
                                L"TerminalServices-RemoteConnectionManager-WVD-Enabled"),
                              (int)ZwQueryLicenseValue(&DestinationString, &v30, &v31, 4LL, &v75) >= 0)
                          && v75 == 4
                          && v30 == 4
                          && v31;
  v72 = 0;
  v36 = 0LL;
  v38 = L"bEnumerateHWBeforeSW";
  v37 = 292;
  v39 = &v72;
  v41 = 0LL;
  v47 = 0LL;
  v40 = 0x4000000;
  v42 = 0;
  v43 = 0LL;
  v44 = 0;
  v45 = 0LL;
  v46 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows NT\\Terminal Services",
              &v36,
              0LL,
              0LL) >= 0 )
    goto LABEL_34;
  v48 = 0LL;
  v49 = 292;
  v50 = L"fUseHardwareGPU";
  v52 = 0x4000000;
  v51 = &v72;
  v53 = 0LL;
  v59 = 0LL;
  v54 = 0;
  v55 = 0LL;
  v56 = 0;
  v57 = 0LL;
  v58 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server\\WinStations",
              &v48,
              0LL,
              0LL) >= 0 )
LABEL_34:
    *((_BYTE *)this + 18505) = v72 != 0;
  v73 = 0;
  *(_QWORD *)((char *)this + 18508) = 0LL;
  v34 = &v73;
  *((_DWORD *)this + 4629) = 0;
  v33[0] = 3;
  v33[1] = 1;
  Current = DXGPROCESS::GetCurrent(v9);
  if ( Current )
  {
    v12 = *((_QWORD *)Current + 11);
    v13 = v12;
    if ( v12 && (v14 = *(__int64 (__fastcall **)(_DWORD *))(v12 + 352)) != 0LL && (v15 = v14(v33), v15 < 0) )
    {
      v26 = v15;
      WdLogSingleEntry2(2LL, v2, v15);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get session TTM support in session 0x%I64x (Status = 0x%I64x).",
        v2,
        v26,
        0LL,
        0LL,
        0LL);
      v73 = 0;
      v13 = v12;
      *((_BYTE *)this + 18497) = 0;
    }
    else
    {
      *((_BYTE *)this + 18497) = v73;
      if ( !v12 )
        goto LABEL_18;
    }
    v16 = *(__int64 (**)(void))(v13 + 336);
    if ( v16 )
      *((_QWORD *)this + 2316) = v16();
    v17 = *(__int64 (**)(void))(v13 + 384);
    if ( v17 )
      *((_QWORD *)this + 2317) = v17();
  }
  else
  {
    *((_BYTE *)this + 18497) = v73;
  }
LABEL_18:
  v18 = DXGPROCESS::GetCurrent(v11);
  *((_QWORD *)this + 2332) = v18;
  *((_DWORD *)v18 + 106) |= 1u;
  CurrentProcess = (void *)PsGetCurrentProcess(v19);
  *((_QWORD *)this + 2331) = CurrentProcess;
  ObfReferenceObject(CurrentProcess);
  if ( *((_QWORD *)DXGGLOBAL::GetGlobal() + 38069) )
    CreateTokenManagerSessionGlobal(v3);
  ProcessServerSilo = PsGetProcessServerSilo(*((_QWORD *)this + 2331));
  v22 = (unsigned __int8)PsIsHostSilo(ProcessServerSilo) == 0;
  *((_BYTE *)this + 18502) = v22;
  if ( v22 )
  {
    v75 = 0;
    v60 = 0LL;
    v62 = L"DisableContainerSessionVersionCheck";
    v63 = &v75;
    v71 = 0LL;
    v61 = 292;
    v64 = 67108868;
    v65 = 0LL;
    v66 = 0;
    v67 = 0LL;
    v68 = 0;
    v69 = 0LL;
    v70 = 0LL;
    HostSilo = PsGetHostSilo();
    v28 = PsAttachSiloToCurrentThread(HostSilo);
    v29 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v60, 0LL, 0LL);
    PsAttachSiloToCurrentThread(v28);
    if ( v29 < 0 || !v75 )
      *((_BYTE *)this + 18503) = 1;
  }
  *((_DWORD *)this + 4682) = 0;
  *((_QWORD *)this + 2342) = 0LL;
  *((_BYTE *)this + 18504) = 1;
  *((_QWORD *)this + 2371) = this;
  EventHandle = 0LL;
  v23 = IoCreateNotificationEvent(0LL, &EventHandle);
  *((_QWORD *)this + 2344) = v23;
  if ( v23 )
  {
    KeSetEvent(v23, 0, 0);
    ObfReferenceObject(*((PVOID *)this + 2344));
    ZwClose(EventHandle);
  }
  else
  {
    WdLogSingleEntry1(6LL, v2);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to create PnP event object for session 0x%I64x.",
      v2,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  memset(v4, 0, 0x80uLL);
  *((_DWORD *)this + 4806) = 0;
  RtlInitializeBitMap((PRTL_BITMAP)((char *)this + 19208), (PULONG)this + 4806, 2u);
  return this;
}
