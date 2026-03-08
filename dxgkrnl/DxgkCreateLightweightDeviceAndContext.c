/*
 * XREFs of DxgkCreateLightweightDeviceAndContext @ 0x1C02CC178
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AB2A0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003634 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007398 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x1C0009308 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00097B8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C0009954 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C000B190 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0190FF0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C01B473C (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C01B530C (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C01B70A8 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 */

__int64 __fastcall DxgkCreateLightweightDeviceAndContext(struct _LUID *a1, _DWORD *a2, _DWORD *a3)
{
  struct DXGDEVICE *v4; // r15
  struct DXGPROCESS *Current; // r14
  struct DXGADAPTER *v7; // rdi
  struct DXGADAPTER *v8; // rbx
  char *v9; // r14
  struct DXGADAPTER **v10; // rax
  struct DXGADAPTER *v11; // r13
  __int64 v12; // rdi
  struct DXGADAPTER *v13; // rdx
  __int64 v14; // r13
  struct DXGADAPTER *v15; // rbx
  struct DXGADAPTER *v16; // rdx
  struct DXGADAPTER **v17; // rax
  int v18; // eax
  struct DXGDEVICE *v19; // rsi
  unsigned int v20; // edx
  int v21; // eax
  __int64 v22; // rcx
  __int64 CurrentProcess; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // r8
  struct DXGADAPTER *v28; // rcx
  struct _D3DDDI_CREATECONTEXTFLAGS v29; // ebx
  unsigned int v30; // r11d
  ADAPTER_RENDER *v31; // r9
  __int64 v32; // r8
  char v33; // al
  unsigned int v34; // r11d
  int v35; // eax
  struct DXGADAPTER *v36; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v37; // [rsp+68h] [rbp-98h] BYREF
  struct DXGDEVICE *v38; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v39; // [rsp+78h] [rbp-88h]
  _DWORD *v40; // [rsp+80h] [rbp-80h]
  struct DXGADAPTER *v41[2]; // [rsp+88h] [rbp-78h] BYREF
  DXGADAPTER *v42; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v43; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v44[2]; // [rsp+A8h] [rbp-58h] BYREF
  struct DXGCONTEXT *v45; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD *v46; // [rsp+C0h] [rbp-40h]
  struct _DXGKARG_QUERYADAPTERINFO v47; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v48; // [rsp+F8h] [rbp-8h] BYREF
  unsigned int v49; // [rsp+100h] [rbp+0h]
  _BYTE v50[144]; // [rsp+110h] [rbp+10h] BYREF

  v40 = a3;
  *a2 = 0;
  *a3 = 0;
  v4 = 0LL;
  v46 = a2;
  v38 = 0LL;
  v45 = 0LL;
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v41[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v41, a1);
  v7 = v41[0];
  if ( !v41[0] )
  {
    WdLogSingleEntry3(3LL, a1->HighPart, a1->LowPart, -1073741811LL);
    goto LABEL_50;
  }
  if ( (*((_DWORD *)v41[0] + 109) & 0x100) == 0 )
  {
    WdLogSingleEntry2(2LL, v41[0], -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter (0x%I64x) is not a indirect display adapter, returning 0x%I64x.",
      (__int64)v7,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_50:
    LODWORD(v12) = -1073741585;
    goto LABEL_51;
  }
  v8 = 0LL;
  v9 = (char *)Current + 216;
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v9, 0LL);
    *((_QWORD *)v9 + 1) = KeGetCurrentThread();
    v36 = 0LL;
    v10 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v36);
    v11 = v41[0];
    LODWORD(v12) = DxgkpGetPairingAdapters(v41[0], 0, v10, &v37, 0LL, 0LL, 0);
    if ( (int)v12 < 0 )
      goto LABEL_19;
    v13 = v36;
    if ( !v36 )
    {
      WdLogSingleEntry1(1LL, 12365LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"RenderAdapterRef", 12365LL, 0LL, 0LL, 0LL, 0LL);
      v13 = v36;
    }
    if ( v8 == v13 )
    {
      LODWORD(v12) = -1073741275;
      WdLogSingleEntry3(1LL, v13, v11, -1073741275LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DxgkpGetPairingAdapters keeps returning same disabled adapter 0x%I64x for display adapter 0x%I64x, returning 0x%I64x.",
        (__int64)v36,
        (__int64)v11,
        -1073741275LL,
        0LL,
        0LL);
      DXGADAPTER_REFERENCE::Assign(&v36, 0LL);
      *((_QWORD *)v9 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v9, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_51;
    }
    v14 = *((_QWORD *)v13 + 366) + 24LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v14, 0LL);
    v15 = v41[0];
    *(_QWORD *)(v14 + 8) = KeGetCurrentThread();
    v16 = v36;
    if ( v36 == v15 )
      goto LABEL_15;
    v42 = 0LL;
    v17 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v42);
    LODWORD(v12) = DxgkpGetPairingAdapters(v15, 0, v17, &v43, 0LL, 0LL, 0);
    if ( (int)v12 < 0 )
    {
      DXGADAPTER_REFERENCE::Assign(&v42, 0LL);
      goto LABEL_18;
    }
    v8 = v36;
    if ( v36 == v42 )
      break;
    WdLogSingleEntry1(3LL, v36);
    DXGADAPTER_REFERENCE::Assign(&v42, 0LL);
    *(_QWORD *)(v14 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v14, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER_REFERENCE::Assign(&v36, 0LL);
    *((_QWORD *)v9 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGADAPTER_REFERENCE::Assign(&v42, 0LL);
  v16 = v36;
  v15 = v41[0];
LABEL_15:
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v50, v16, v15);
  v18 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v50, 0LL);
  LODWORD(v12) = v18;
  if ( v18 < 0 )
  {
    WdLogSingleEntry3(3LL, v36, v15, v18);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
LABEL_18:
    *(_QWORD *)(v14 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v14, 0LL);
    KeLeaveCriticalRegion();
LABEL_19:
    DXGADAPTER_REFERENCE::Assign(&v36, 0LL);
    *((_QWORD *)v9 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
    v19 = v38;
    goto LABEL_20;
  }
  v19 = v38;
  v20 = 0;
  v39 = 0;
  while ( 1 )
  {
    v38 = 0LL;
    v4 = v19;
    v21 = ADAPTER_RENDER::CreateDevice(*((DXGADAPTER ***)v36 + 366), &v38, 0, 1, v15, 0, 0, v20 == 0, 0LL, 0LL, 0);
    v19 = v38;
    v12 = v21;
    if ( v21 < 0 )
    {
      CurrentProcess = PsGetCurrentProcess(v22);
      WdLogSingleEntry3(2LL, v36, CurrentProcess, v12);
      v25 = PsGetCurrentProcess(v24);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to create CDD DXGDEVICE for adapter 0x%I64x in process 0x%I64x (Status = 0x%I64x).",
        (__int64)v36,
        v25,
        v12,
        0LL,
        0LL);
      goto LABEL_40;
    }
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v50);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44, v19);
    v26 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v50, 0LL);
    LODWORD(v12) = v26;
    if ( v26 < 0 )
      break;
    v28 = v36;
    v48 = 0LL;
    v49 = 0;
    v29.0 = 0;
    v30 = *((_DWORD *)v36 + 736);
    HIDWORD(v48) = v30;
    v49 = 1;
    if ( (*((_DWORD *)v36 + 109) & 0x10) != 0 )
    {
      memset(&v47, 0, 24);
      v47.Type = DXGKQAITYPE_PREFERREDGPUNODE;
      v47.pOutputData = &v48;
      *(_OWORD *)&v47.OutputDataSize = 0LL;
      v47.OutputDataSize = 12;
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v36, &v47, v27) < 0 )
      {
        WdLogSingleEntry1(1LL, 12513LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 12513LL, 0LL, 0LL, 0LL, 0LL);
      }
      v30 = HIDWORD(v48);
      v28 = v36;
    }
    v31 = (ADAPTER_RENDER *)*((_QWORD *)v28 + 366);
    v32 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v31 + 2) + 2808LL) + 32LL);
    if ( v32 && (*(_BYTE *)(74LL * v30 + v32 + 68) & 1) != 0 )
      v29.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)16;
    v33 = ADAPTER_RENDER::NodeSupportsGpuVa(v31, 0, v30);
    v35 = DXGDEVICE::CreateContext(v19, &v45, v34, v49, v29, 0LL, 0, D3DKMT_CLIENTHINT_DX10, v33);
    LODWORD(v12) = v35;
    if ( v35 >= 0 )
      goto LABEL_43;
    WdLogSingleEntry2(4LL, v36, v35);
    if ( v44[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44);
LABEL_40:
    v15 = v41[0];
    v20 = v39 + 1;
    v39 = v20;
    if ( v20 > 1 )
      goto LABEL_45;
  }
  WdLogSingleEntry3(3LL, v36, v15, v26);
LABEL_43:
  if ( v44[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44);
LABEL_45:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
  *(_QWORD *)(v14 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v14, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTER_REFERENCE::Assign(&v36, 0LL);
  *((_QWORD *)v9 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v9, 0LL);
  KeLeaveCriticalRegion();
  if ( (int)v12 >= 0 )
  {
    *v46 = *((_DWORD *)v19 + 117);
    *v40 = *((_DWORD *)v45 + 6);
    goto LABEL_23;
  }
LABEL_20:
  if ( v19 && _InterlockedExchangeAdd64((volatile signed __int64 *)v19 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v38 + 2), v38);
LABEL_23:
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v4 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v4 + 2), v4);
  }
LABEL_51:
  DXGADAPTER_REFERENCE::Assign(v41, 0LL);
  return (unsigned int)v12;
}
