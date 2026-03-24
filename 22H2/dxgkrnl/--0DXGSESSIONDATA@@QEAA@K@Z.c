/*
 * XREFs of ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C016DC5C
 * Callers:
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C016DAF0 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z @ 0x1C0019B70 (--_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1C001AA10 (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     CreateTokenManagerSessionGlobal @ 0x1C001B31C (CreateTokenManagerSessionGlobal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ @ 0x1C016E1DC (-Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ.c)
 *     ?InitializeMaxActiveOutputDuplApps@OUTPUTDUPL_SESSION_MGR@@AEAAXXZ @ 0x1C016E2F4 (-InitializeMaxActiveOutputDuplApps@OUTPUTDUPL_SESSION_MGR@@AEAAXXZ.c)
 */

DXGSESSIONDATA *__fastcall DXGSESSIONDATA::DXGSESSIONDATA(DXGSESSIONDATA *this, unsigned int a2)
{
  __int64 v2; // r14
  CTokenManager **v3; // r15
  char *v4; // r12
  HANDLE **v6; // rcx
  OUTPUTDUPL_SESSION_MGR *v7; // rax
  OUTPUTDUPL_SESSION_MGR *v8; // rbx
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rbx
  __int64 (__fastcall *v20)(_DWORD *); // rax
  int v21; // eax
  __int64 v22; // rdi
  char v23; // al
  __int64 (*v24)(void); // rax
  __int64 (*v25)(void); // rax
  struct DXGPROCESS *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  void *CurrentProcess; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 ProcessServerSilo; // rax
  bool v35; // al
  struct _KEVENT *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  OUTPUTDUPL_SESSION_MGR *v42; // rcx
  __int64 v43; // rax
  __int64 HostSilo; // rax
  __int64 v45; // rdi
  int v46; // ebx
  __int64 v47; // rax
  void *EventHandle; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v49[2]; // [rsp+38h] [rbp-C8h] BYREF
  char *v50; // [rsp+40h] [rbp-C0h]
  __int64 v51; // [rsp+50h] [rbp-B0h] BYREF
  int v52; // [rsp+58h] [rbp-A8h]
  const wchar_t *v53; // [rsp+60h] [rbp-A0h]
  int *v54; // [rsp+68h] [rbp-98h]
  int v55; // [rsp+70h] [rbp-90h]
  __int64 v56; // [rsp+78h] [rbp-88h]
  int v57; // [rsp+80h] [rbp-80h]
  __int64 v58; // [rsp+88h] [rbp-78h]
  int v59; // [rsp+90h] [rbp-70h]
  __int128 v60; // [rsp+98h] [rbp-68h]
  __int128 v61; // [rsp+A8h] [rbp-58h]
  __int64 v62; // [rsp+B8h] [rbp-48h]
  __int64 v63; // [rsp+C0h] [rbp-40h] BYREF
  int v64; // [rsp+C8h] [rbp-38h]
  const wchar_t *v65; // [rsp+D0h] [rbp-30h]
  int *v66; // [rsp+D8h] [rbp-28h]
  int v67; // [rsp+E0h] [rbp-20h]
  __int64 v68; // [rsp+E8h] [rbp-18h]
  int v69; // [rsp+F0h] [rbp-10h]
  __int64 v70; // [rsp+F8h] [rbp-8h]
  int v71; // [rsp+100h] [rbp+0h]
  __int128 v72; // [rsp+108h] [rbp+8h]
  __int128 v73; // [rsp+118h] [rbp+18h]
  __int64 v74; // [rsp+128h] [rbp+28h]
  __int64 v75; // [rsp+130h] [rbp+30h] BYREF
  int v76; // [rsp+138h] [rbp+38h]
  const wchar_t *v77; // [rsp+140h] [rbp+40h]
  int *v78; // [rsp+148h] [rbp+48h]
  int v79; // [rsp+150h] [rbp+50h]
  __int64 v80; // [rsp+158h] [rbp+58h]
  int v81; // [rsp+160h] [rbp+60h]
  __int64 v82; // [rsp+168h] [rbp+68h]
  int v83; // [rsp+170h] [rbp+70h]
  __int128 v84; // [rsp+178h] [rbp+78h]
  __int128 v85; // [rsp+188h] [rbp+88h]
  __int64 v86; // [rsp+198h] [rbp+98h]
  int v87; // [rsp+1F0h] [rbp+F0h] BYREF
  char v88; // [rsp+1F8h] [rbp+F8h] BYREF
  _NT_PRODUCT_TYPE ProductType; // [rsp+200h] [rbp+100h] BYREF
  int v90; // [rsp+208h] [rbp+108h] BYREF

  v2 = a2;
  *(_DWORD *)this = a2;
  v3 = (CTokenManager **)((char *)this + 18720);
  *((_QWORD *)this + 2) = 0LL;
  v4 = (char *)this + 18752;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = -1;
  *((_DWORD *)this + 12) = 53;
  *((_DWORD *)this + 4622) = 0;
  *((_BYTE *)this + 18492) = 0;
  *((_BYTE *)this + 18494) = 0;
  *((_QWORD *)this + 2314) = 0LL;
  *((_QWORD *)this + 2315) = 0LL;
  *((_QWORD *)this + 2316) = 0LL;
  *((_QWORD *)this + 2317) = 0LL;
  *((_DWORD *)this + 4636) = 0;
  *((_DWORD *)this + 4637) = 38;
  *((_DWORD *)this + 4638) = 61;
  *((_DWORD *)this + 4654) = 0;
  *((_QWORD *)this + 2328) = 0LL;
  *((_QWORD *)this + 2331) = 0LL;
  *((_QWORD *)this + 2332) = 0LL;
  *((_QWORD *)this + 2333) = 0LL;
  *((_DWORD *)this + 4668) = 0;
  *((_DWORD *)this + 4669) = 81;
  *((_DWORD *)this + 4670) = 1;
  *((_QWORD *)this + 2336) = 0LL;
  *((_QWORD *)this + 2337) = 0LL;
  *((_QWORD *)this + 2341) = 0LL;
  *((_DWORD *)this + 4684) = 4;
  *((_QWORD *)this + 2343) = (char *)this + 18752;
  *((_QWORD *)this + 2340) = 0LL;
  *((_QWORD *)this + 2360) = 0LL;
  *((_QWORD *)this + 2361) = 0LL;
  *((_QWORD *)this + 2362) = 0LL;
  *((_DWORD *)this + 4726) = 0;
  *((_DWORD *)this + 4727) = -1;
  *((_DWORD *)this + 4728) = 47;
  *((_DWORD *)this + 4730) = 0;
  *((_QWORD *)this + 2366) = 0LL;
  *((_QWORD *)this + 2367) = 0LL;
  *((_WORD *)this + 9472) = 0;
  *((_QWORD *)this + 2369) = 0LL;
  *((_QWORD *)this + 2370) = 0LL;
  *((_DWORD *)this + 4742) = 0;
  *((_DWORD *)this + 4743) = 1;
  *((_DWORD *)this + 4744) = -1;
  v6 = (HANDLE **)((char *)this + 18984);
  *v6 = 0LL;
  DispBrokerClientReference::Assign(v6, 0LL);
  *((_QWORD *)this + 2374) = 0LL;
  *((_QWORD *)this + 2375) = 0LL;
  *((_QWORD *)this + 2376) = 0LL;
  *((_DWORD *)this + 4754) = 0;
  *((_DWORD *)this + 4755) = -1;
  *((_DWORD *)this + 4756) = 1;
  *((_QWORD *)this + 2380) = 0LL;
  *((_QWORD *)this + 2379) = 0LL;
  *((_QWORD *)this + 2381) = 0LL;
  *((_QWORD *)this + 2382) = 0LL;
  *((_QWORD *)this + 2383) = 0LL;
  *((_DWORD *)this + 4768) = 0;
  *((_DWORD *)this + 4769) = -1;
  *((_DWORD *)this + 4770) = 1;
  *((_QWORD *)this + 2386) = 0LL;
  *((_DWORD *)this + 4774) = 0;
  *((_DWORD *)this + 4775) = 1;
  *((_QWORD *)this + 2388) = 0LL;
  ProductType = 0;
  v7 = (OUTPUTDUPL_SESSION_MGR *)operator new[](0x1B8uLL, 0x674D444Fu, PagedPool);
  v8 = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 1) = 0;
    *((_QWORD *)v7 + 1) = 0LL;
    *((_QWORD *)v7 + 2) = 0LL;
    *((_DWORD *)v7 + 6) = 0;
    *((_QWORD *)v7 + 4) = 0LL;
    *((_QWORD *)v7 + 5) = 0LL;
    OUTPUTDUPL_SESSION_MGR::InitializeMaxActiveOutputDuplApps(v7);
    *((_DWORD *)v8 + 12) = 0;
  }
  else
  {
    v8 = 0LL;
  }
  *((_QWORD *)this + 1) = v8;
  if ( v8 && (int)OUTPUTDUPL_SESSION_MGR::Initialize(v8) < 0 )
  {
    v42 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)this + 1);
    if ( v42 )
      OUTPUTDUPL_SESSION_MGR::`scalar deleting destructor'(v42);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_QWORD *)this + 2321) = (char *)this + 18560;
  *((_QWORD *)this + 2320) = (char *)this + 18560;
  *((_QWORD *)this + 2323) = (char *)this + 18576;
  *((_QWORD *)this + 2322) = (char *)this + 18576;
  *((_QWORD *)this + 2325) = (char *)this + 18592;
  *((_QWORD *)this + 2324) = (char *)this + 18592;
  RtlGetNtProductType(&ProductType);
  RtlGetSuiteMask();
  if ( ProductType != NtProductServer || (v9 = 0, !g_bSkuSupportMultipleUsers) )
    v9 = 1;
  *((_BYTE *)this + 18496) = v9;
  v87 = 0;
  v51 = 0LL;
  v53 = L"bEnumerateHWBeforeSW";
  v52 = 292;
  v54 = &v87;
  v55 = 0x4000000;
  v62 = 0LL;
  v56 = 0LL;
  v57 = 0;
  v58 = 0LL;
  v59 = 0;
  v60 = 0LL;
  v61 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows NT\\Terminal Services",
              &v51,
              0LL,
              0LL) >= 0 )
    goto LABEL_32;
  v63 = 0LL;
  v64 = 292;
  v65 = L"fUseHardwareGPU";
  v67 = 0x4000000;
  v66 = &v87;
  v68 = 0LL;
  v74 = 0LL;
  v69 = 0;
  v70 = 0LL;
  v71 = 0;
  v72 = 0LL;
  v73 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server\\WinStations",
              &v63,
              0LL,
              0LL) >= 0 )
LABEL_32:
    *((_BYTE *)this + 18496) = v87 != 0;
  v88 = 0;
  *(_QWORD *)((char *)this + 18500) = 0LL;
  v50 = &v88;
  *((_DWORD *)this + 4627) = 0;
  v49[0] = 3;
  v49[1] = 1;
  Current = DXGPROCESS::GetCurrent(v11, v10, v12, v13);
  if ( Current )
    v19 = (_QWORD *)*((_QWORD *)Current + 11);
  else
    v19 = 0LL;
  if ( v19 && (v20 = (__int64 (__fastcall *)(_DWORD *))v19[44]) != 0LL && (v21 = v20(v49), v22 = v21, v21 < 0) )
  {
    v43 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v43 + 24) = v2;
    *(_QWORD *)(v43 + 32) = v22;
    WdLogEvent5_WdError(v43);
    v23 = 0;
    v88 = 0;
  }
  else
  {
    v23 = v88;
  }
  *((_BYTE *)this + 18489) = v23;
  if ( v19 )
  {
    v24 = (__int64 (*)(void))v19[42];
    if ( v24 )
      *((_QWORD *)this + 2314) = v24();
    v25 = (__int64 (*)(void))v19[48];
    if ( v25 )
      *((_QWORD *)this + 2315) = v25();
  }
  v26 = DXGPROCESS::GetCurrent(v16, v15, v17, v18);
  *((_QWORD *)this + 2330) = v26;
  *((_BYTE *)v26 + 344) = 1;
  CurrentProcess = (void *)PsGetCurrentProcess(v28, v27, v29, v30);
  *((_QWORD *)this + 2329) = CurrentProcess;
  ObfReferenceObject(CurrentProcess);
  if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v33, v32) + 38048) )
    CreateTokenManagerSessionGlobal(v3);
  ProcessServerSilo = PsGetProcessServerSilo(*((_QWORD *)this + 2329));
  v35 = (unsigned __int8)PsIsHostSilo(ProcessServerSilo) == 0;
  *((_BYTE *)this + 18493) = v35;
  if ( v35 )
  {
    v90 = 0;
    v75 = 0LL;
    v77 = L"DisableContainerSessionVersionCheck";
    v78 = &v90;
    v86 = 0LL;
    v76 = 292;
    v79 = 67108868;
    v80 = 0LL;
    v81 = 0;
    v82 = 0LL;
    v83 = 0;
    v84 = 0LL;
    v85 = 0LL;
    HostSilo = PsGetHostSilo();
    v45 = PsAttachSiloToCurrentThread(HostSilo);
    v46 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v75, 0LL, 0LL);
    PsAttachSiloToCurrentThread(v45);
    if ( v46 < 0 || !v90 )
      *((_BYTE *)this + 18494) = 1;
  }
  *((_DWORD *)this + 4676) = 0;
  *((_QWORD *)this + 2339) = 0LL;
  *((_BYTE *)this + 18495) = 1;
  *((_QWORD *)this + 2367) = this;
  EventHandle = 0LL;
  v36 = IoCreateNotificationEvent(0LL, &EventHandle);
  *((_QWORD *)this + 2341) = v36;
  if ( v36 )
  {
    KeSetEvent(v36, 0, 0);
    ObfReferenceObject(*((PVOID *)this + 2341));
    ZwClose(EventHandle);
  }
  else
  {
    v47 = WdLogNewEntry5_WdLowResource(v38, v37, v39, v40);
    *(_QWORD *)(v47 + 24) = v2;
    WdLogEvent5_WdLowResource(v47);
  }
  memset(v4, 0, 0x80uLL);
  return this;
}
