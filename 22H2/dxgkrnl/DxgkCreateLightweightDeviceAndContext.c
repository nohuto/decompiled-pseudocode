/*
 * XREFs of DxgkCreateLightweightDeviceAndContext @ 0x1C02236C0
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C0135B50 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C0003294 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C000A318 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C000A33C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000DA1C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019574 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00F1B0C (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0133E18 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C01384D0 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 */

__int64 __fastcall DxgkCreateLightweightDeviceAndContext(struct _LUID *a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  _DWORD *v4; // r13
  struct DXGDEVICE *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v10; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGADAPTER *v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  struct DXGADAPTER *v19; // rbx
  char *v20; // rsi
  __int64 v21; // rdx
  struct DXGADAPTER **v22; // rax
  struct DXGADAPTER *v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct DXGADAPTER *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // r14
  struct DXGADAPTER *v30; // r12
  struct DXGADAPTER *v31; // rdx
  struct DXGADAPTER **v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  _QWORD *v41; // rax
  __int64 v42; // rdx
  struct DXGDEVICE *v43; // r14
  struct _D3DDDI_CREATECONTEXTFLAGS v44; // ebx
  int v45; // r13d
  int Device; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  struct DXGADAPTER *v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 CurrentProcess; // rax
  __int64 v56; // rdx
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  struct DXGADAPTER *v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  ADAPTER_RENDER *v66; // r10
  __int64 v67; // r9
  char v68; // al
  int v69; // r8d
  int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rcx
  _QWORD *v75; // rax
  struct DXGADAPTER *v76; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v77; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGDEVICE *v78; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD *v79; // [rsp+68h] [rbp-98h]
  DXGADAPTER *v80; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v81; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v82[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v83; // [rsp+90h] [rbp-70h]
  struct DXGCONTEXT *v84; // [rsp+98h] [rbp-68h] BYREF
  struct DXGADAPTER *v85[2]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD *v86; // [rsp+B0h] [rbp-50h]
  struct _DXGKARG_QUERYADAPTERINFO v87; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v88[2]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v89; // [rsp+F0h] [rbp-10h]
  _BYTE v90[144]; // [rsp+100h] [rbp+0h] BYREF

  v86 = a3;
  *a2 = 0;
  v4 = a3;
  *a3 = 0;
  v79 = a2;
  v6 = 0LL;
  v78 = 0LL;
  v84 = 0LL;
  Current = DXGPROCESS::GetCurrent((__int64)a1, (__int64)a2, (__int64)a3, a4);
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  v85[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v85, a1);
  v15 = v85[0];
  if ( !v85[0] )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
    v16[3] = a1->HighPart;
    v16[4] = a1->LowPart;
    v16[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v16);
LABEL_7:
    LODWORD(v18) = -1073741585;
    goto LABEL_53;
  }
  if ( (*((_DWORD *)v85[0] + 87) & 0x100) == 0 )
  {
    v17 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v17 + 24) = v15;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    goto LABEL_7;
  }
  v19 = 0LL;
  v20 = (char *)Current + 176;
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v20, 0LL);
    *((_QWORD *)v20 + 1) = KeGetCurrentThread();
    v76 = 0LL;
    v22 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v76, v21);
    v23 = v85[0];
    LODWORD(v18) = DxgkpGetPairingAdapters(v85[0], 0LL, v22, &v77, 0LL, 0LL, 0);
    if ( (int)v18 < 0 )
    {
      DXGADAPTER_REFERENCE::Assign(&v76, 0LL);
      goto LABEL_44;
    }
    v26 = v76;
    if ( !v76 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v25, v24);
      *(_QWORD *)(v27 + 24) = 11939LL;
      WdLogEvent5_WdAssertion(v27);
      v26 = v76;
    }
    if ( v19 == v26 )
    {
      LODWORD(v18) = -1073741275;
      v75 = (_QWORD *)WdLogNewEntry5_WdAssertion(v25, v24);
      v75[3] = v76;
      v75[4] = v23;
      v75[5] = -1073741275LL;
      WdLogEvent5_WdAssertion(v75);
      DXGADAPTER_REFERENCE::Assign(&v76, 0LL);
      *((_QWORD *)v20 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v20, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_53;
    }
    v28 = *((_QWORD *)v26 + 338);
    v83 = v28;
    v29 = v28 + 24;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v28 + 24, 0LL);
    v30 = v85[0];
    *(_QWORD *)(v28 + 32) = KeGetCurrentThread();
    v31 = v76;
    if ( v76 == v30 )
      goto LABEL_18;
    v80 = 0LL;
    v32 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v80, (__int64)v76);
    LODWORD(v18) = DxgkpGetPairingAdapters(v30, 0LL, v32, &v81, 0LL, 0LL, 0);
    if ( (int)v18 < 0 )
    {
      DXGADAPTER_REFERENCE::Assign(&v80, 0LL);
LABEL_21:
      *(_QWORD *)(v28 + 32) = 0LL;
      ExReleasePushLockExclusiveEx(v28 + 24, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER_REFERENCE::Assign(&v76, 0LL);
LABEL_44:
      *((_QWORD *)v20 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v20, 0LL);
      KeLeaveCriticalRegion();
      v43 = v78;
      goto LABEL_45;
    }
    v19 = v76;
    if ( v76 == v80 )
      break;
    v36 = WdLogNewEntry5_WdWarning(v34, v33, v35);
    *(_QWORD *)(v36 + 24) = v76;
    WdLogEvent5_WdWarning(v36);
    DXGADAPTER_REFERENCE::Assign(&v80, 0LL);
    *(_QWORD *)(v29 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v29, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER_REFERENCE::Assign(&v76, 0LL);
    *((_QWORD *)v20 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v20, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGADAPTER_REFERENCE::Assign(&v80, 0LL);
  v31 = v76;
  v28 = v83;
LABEL_18:
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v90, v31, v30);
  v37 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v90, 0LL);
  v18 = v37;
  if ( v37 < 0 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v38, v40);
    v41[3] = v76;
    v41[4] = v30;
    v41[5] = v18;
    WdLogEvent5_WdWarning(v41);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v90, v42);
    goto LABEL_21;
  }
  v43 = v78;
  v44.0 = 0;
  v45 = 0;
  while ( 1 )
  {
    v78 = 0LL;
    v6 = v43;
    Device = ADAPTER_RENDER::CreateDevice(
               *((DXGADAPTER ***)v76 + 338),
               (__int64 *)&v78,
               0,
               1,
               v30,
               0,
               0,
               v45 == 0,
               0LL,
               0LL);
    v43 = v78;
    v18 = Device;
    if ( Device < 0 )
    {
      v49 = WdLogNewEntry5_WdError(v48, v47);
      v50 = v76;
      v51 = v49;
      *(_QWORD *)(v49 + 24) = v76;
      CurrentProcess = PsGetCurrentProcess(v50, v52, v53, v54);
      *(_QWORD *)(v51 + 40) = v18;
      *(_QWORD *)(v51 + 32) = CurrentProcess;
      WdLogEvent5_WdError(v51);
      v44.0 = 0;
      goto LABEL_36;
    }
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v90);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v82, v43);
    v57 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v90, 0LL);
    v18 = v57;
    if ( v57 < 0 )
      break;
    v61 = v76;
    *(_QWORD *)v88 = 0LL;
    v89 = 0;
    v62 = *((unsigned int *)v76 + 680);
    v88[1] = *((_DWORD *)v76 + 680);
    v89 = 1;
    if ( (*((_DWORD *)v76 + 87) & 0x10) != 0 )
    {
      memset(&v87, 0, 24);
      v87.Type = DXGKQAITYPE_PREFERREDGPUNODE;
      v87.pOutputData = v88;
      *(_OWORD *)&v87.OutputDataSize = 0LL;
      v87.OutputDataSize = 12;
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v76, &v87, v62) < 0 )
      {
        v65 = WdLogNewEntry5_WdAssertion(v64, v63);
        *(_QWORD *)(v65 + 24) = 12087LL;
        WdLogEvent5_WdAssertion(v65);
      }
      LODWORD(v62) = v88[1];
      v61 = v76;
    }
    v66 = (ADAPTER_RENDER *)*((_QWORD *)v61 + 338);
    v67 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v66 + 2) + 2584LL) + 32LL);
    if ( v67 && (*(_BYTE *)(74LL * (unsigned int)v62 + v67 + 68) & 1) != 0 )
      v44.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)16;
    v68 = ADAPTER_RENDER::NodeSupportsGpuVa(v66, 0, v62);
    v70 = DXGDEVICE::CreateContext(v43, &v84, v69, v89, v44, 0LL, 0, D3DKMT_CLIENTHINT_DX10, v68);
    v44.0 = 0;
    v18 = v70;
    if ( v70 >= 0 )
      goto LABEL_39;
    v72 = WdLogNewEntry5_WdEvent(v71, v56);
    *(_QWORD *)(v72 + 24) = v76;
    *(_QWORD *)(v72 + 32) = v18;
    WdLogEvent5_WdEvent(v72);
    if ( v82[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v82);
LABEL_36:
    if ( (unsigned int)++v45 > 1 )
      goto LABEL_41;
  }
  v73 = (_QWORD *)WdLogNewEntry5_WdWarning(v59, v58, v60);
  v73[3] = v76;
  v73[4] = v30;
  v73[5] = v18;
  WdLogEvent5_WdWarning(v73);
LABEL_39:
  if ( v82[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v82);
LABEL_41:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v90, v56);
  v74 = v83 + 24;
  *(_QWORD *)(v83 + 32) = 0LL;
  ExReleasePushLockExclusiveEx(v74, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTER_REFERENCE::Assign(&v76, 0LL);
  *((_QWORD *)v20 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v20, 0LL);
  KeLeaveCriticalRegion();
  v4 = v86;
LABEL_45:
  if ( (int)v18 < 0 )
  {
    if ( v43 && _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v78 + 2), v78);
  }
  else
  {
    *v79 = *((_DWORD *)v43 + 109);
    *v4 = *((_DWORD *)v84 + 6);
  }
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v6 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v6 + 2), v6);
  }
LABEL_53:
  DXGADAPTER_REFERENCE::Assign(v85, 0LL);
  return (unsigned int)v18;
}
