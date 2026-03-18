/*
 * XREFs of ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z @ 0x1C01ED178
 * Callers:
 *     DxgkOpenSyncObjectFromNtHandle2Internal @ 0x1C01ED120 (DxgkOpenSyncObjectFromNtHandle2Internal.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1C0231D10 (DxgkOpenSyncObjectFromNtHandle2.c)
 *     DxgkWslOpenSyncObjectFromNtHandle @ 0x1C0329780 (DxgkWslOpenSyncObjectFromNtHandle.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000438C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007CA4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0007F7C (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0008040 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0008088 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C000A8D0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@H@Z @ 0x1C0019164 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@H@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0019220 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C0022568 (--0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024B68 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     Feature_3021246777__private_IsEnabledDeviceUsage @ 0x1C00262EC (Feature_3021246777__private_IsEnabledDeviceUsage.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0052A98 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C01A3814 (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C01B2C5C (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle2Impl(
        struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *a1,
        char a2,
        __int64 a3,
        __int64 a4,
        void *a5)
{
  struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *v6; // r15
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // r13
  ULONG64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rbx
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  _DWORD *v16; // r13
  struct DXGGLOBAL *Global; // rax
  PVOID v18; // r9
  unsigned int v19; // eax
  unsigned int v20; // ecx
  int v21; // ecx
  struct DXGADAPTERSYNCOBJECT *v22; // r13
  __int64 v23; // rcx
  __int64 v24; // r8
  HANDLE v25; // r13
  NTSTATUS v26; // eax
  unsigned int v27; // ebx
  __int64 v28; // rcx
  __int64 v29; // r8
  struct DXGGLOBAL *v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // r8
  unsigned int v36; // edx
  unsigned __int64 v37; // rbx
  __int64 v38; // rcx
  __int64 v39; // r12
  __int64 v40; // r15
  __int64 v41; // rax
  __int64 v42; // r8
  unsigned __int64 v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // [rsp+60h] [rbp-1D8h]
  unsigned int v47; // [rsp+60h] [rbp-1D8h]
  int v48; // [rsp+60h] [rbp-1D8h]
  struct DXGDEVICE *v50; // [rsp+68h] [rbp-1D0h] BYREF
  int v51; // [rsp+70h] [rbp-1C8h] BYREF
  __int64 v52; // [rsp+78h] [rbp-1C0h]
  char v53; // [rsp+80h] [rbp-1B8h]
  _DWORD *v54; // [rsp+88h] [rbp-1B0h]
  _QWORD v55[2]; // [rsp+90h] [rbp-1A8h] BYREF
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v56[2]; // [rsp+A0h] [rbp-198h]
  struct DXGDEVICE *v57; // [rsp+A8h] [rbp-190h] BYREF
  PVOID Object; // [rsp+B0h] [rbp-188h] BYREF
  struct DXGADAPTERSYNCOBJECT *v59; // [rsp+B8h] [rbp-180h] BYREF
  PVOID v60; // [rsp+C0h] [rbp-178h]
  HANDLE Handle[2]; // [rsp+D0h] [rbp-168h]
  void *v62[2]; // [rsp+E0h] [rbp-158h] BYREF
  unsigned int v63[4]; // [rsp+F0h] [rbp-148h] BYREF
  __int128 v64; // [rsp+100h] [rbp-138h]
  __int128 v65; // [rsp+110h] [rbp-128h]
  UINT64 v66; // [rsp+120h] [rbp-118h]
  __int64 v67; // [rsp+130h] [rbp-108h] BYREF
  char v68; // [rsp+138h] [rbp-100h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+140h] [rbp-F8h] BYREF
  _BYTE v70[8]; // [rsp+148h] [rbp-F0h] BYREF
  char v71; // [rsp+150h] [rbp-E8h]
  __int64 v72; // [rsp+158h] [rbp-E0h]
  struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *v73; // [rsp+160h] [rbp-D8h]
  _BYTE v74[160]; // [rsp+170h] [rbp-C8h] BYREF

  v6 = a1;
  v73 = a1;
  Object = a5;
  v51 = -1;
  v52 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v53 = 1;
    v51 = 2086;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2086);
  }
  else
  {
    v53 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v51, 2086);
  Current = DXGPROCESS::GetCurrent(v7);
  *(_QWORD *)&v56[0].hSyncObject = Current;
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
LABEL_45:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
    if ( v53 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v51);
    }
    return 3221225485LL;
  }
  if ( a2 )
  {
    v9 = (ULONG64)v6;
    if ( (unsigned __int64)v6 >= MmUserProbeAddress )
      v9 = MmUserProbeAddress;
    *(_OWORD *)Handle = *(_OWORD *)v9;
    *(_OWORD *)v62 = *(_OWORD *)(v9 + 16);
    *(_OWORD *)v63 = *(_OWORD *)(v9 + 32);
    v64 = *(_OWORD *)(v9 + 48);
    v65 = *(_OWORD *)(v9 + 64);
    v66 = *(_QWORD *)(v9 + 80);
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)&v6->hNtHandle;
    *(_OWORD *)v62 = *(_OWORD *)&v6->hSyncObject;
    *(_OWORD *)v63 = *(_OWORD *)&v6->Reserved[1];
    v64 = *(_OWORD *)&v6->Reserved[3];
    v65 = *(_OWORD *)&v6->Reserved[5];
    v66 = v6->Reserved[7];
  }
  LODWORD(v62[0]) = 0;
  if ( (HIDWORD(Handle[1]) & 0x7FFFFC00) != 0 )
  {
    WdLogSingleEntry1(3LL, 1782LL);
    goto LABEL_45;
  }
  v10 = HIDWORD(Handle[1]);
  if ( (BYTE4(Handle[1]) & 0x10) != 0 || (BYTE4(Handle[1]) & 0x20) != 0 )
    WdLogSingleEntry1(3LL, 1789LL);
  v57 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)&v50,
    (unsigned int)Handle[1],
    (struct _KTHREAD **)Current,
    &v57);
  if ( !v57 )
  {
    v11 = LODWORD(Handle[1]);
    WdLogSingleEntry2(2LL, LODWORD(Handle[1]), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v11,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_42:
    if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
    goto LABEL_45;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55, v57, 1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v74, (__int64)v57, 0, v12, 0);
  v46 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v74, 0LL);
  if ( v46 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v74);
    if ( v55[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55);
    if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
    if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v51);
    return (unsigned int)v46;
  }
  v47 = v10;
  v54 = (_DWORD *)((char *)Current + 424);
  if ( (*((_DWORD *)Current + 106) & 0x10) != 0 )
  {
    v16 = (_DWORD *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 4);
    v60 = v16;
    Global = DXGGLOBAL::GetGlobal();
    DXGAUTOPUSHLOCKFASTSHARED::DXGAUTOPUSHLOCKFASTSHARED(
      (DXGAUTOPUSHLOCKFASTSHARED *)&v67,
      (struct DXGGLOBAL *)((char *)Global + 40));
    v18 = Object;
    v19 = ((unsigned int)Object >> 6) & 0xFFFFFF;
    if ( v19 < v16[4] )
    {
      v20 = *(_DWORD *)(*(_QWORD *)v60 + 16LL * v19 + 8);
      if ( (unsigned int)Object >> 30 == ((v20 >> 5) & 3) && (v20 & 0x2000) == 0 )
      {
        v21 = v20 & 0x1F;
        if ( v21 )
        {
          if ( v21 == 8 )
          {
            v22 = *(struct DXGADAPTERSYNCOBJECT **)(*(_QWORD *)v60 + 16LL * v19);
            goto LABEL_37;
          }
          WdLogSingleEntry1(2LL, 316LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
          v18 = Object;
        }
      }
    }
    v22 = 0LL;
LABEL_37:
    v60 = v22;
    if ( !v22 )
    {
      WdLogSingleEntry1(3LL, v18);
      if ( v68 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v67 + 16), 0xFFFFFFFF);
        ExReleasePushLockSharedEx(v67, 0LL);
        KeLeaveCriticalRegion();
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v74);
      if ( v55[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55);
      goto LABEL_42;
    }
    if ( v68 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v67 + 16), 0xFFFFFFFF);
      ExReleasePushLockSharedEx(v67, 0LL);
      KeLeaveCriticalRegion();
    }
    goto LABEL_66;
  }
  HandleInformation = 0LL;
  Object = 0LL;
  v25 = Handle[0];
  v26 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSyncObjectType, 1, &Object, &HandleInformation);
  v27 = v26;
  v59 = (struct DXGADAPTERSYNCOBJECT *)Object;
  v60 = Object;
  if ( v26 != -1073741788 )
  {
    if ( v26 < 0 )
    {
      WdLogSingleEntry2(3LL, v25, v26);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v74);
      if ( v55[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55);
      goto LABEL_102;
    }
    v10 = v47 & 0xFFFFFFCF | ~(8 * LOBYTE(HandleInformation.GrantedAccess)) & 0x10 | ~(32
                                                                                     * LOBYTE(HandleInformation.GrantedAccess)) & 0x20;
    v22 = v59;
LABEL_66:
    v59 = 0LL;
    v30 = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v70, v30, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v70);
    v48 = DXGSYNCOBJECT::Open(
            *(DXGSYNCOBJECT **)v22,
            *((struct ADAPTER_RENDER **)v57 + 2),
            v57,
            0LL,
            (unsigned int *)v62,
            &v62[1],
            (unsigned __int64 *)v63,
            v63[2],
            &v59,
            1,
            (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v10);
    if ( v48 >= 0 )
    {
      if ( v71 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v70);
      if ( bTracingEnabled )
      {
        v32 = v59 ? *((_QWORD *)v59 + 4) : 0LL;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ppp_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            &EventOpenSyncObject,
            v31,
            v32,
            LODWORD(v62[0]),
            v57);
      }
      if ( (unsigned int)Feature_3021246777__private_IsEnabledDeviceUsage() )
      {
        v33 = *(_QWORD *)&v56[0].hSyncObject;
        v72 = *(_QWORD *)&v56[0].hSyncObject + 248LL;
        DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)&v56[0].hSyncObject + 248LL));
        v34 = (LODWORD(v62[0]) >> 6) & 0xFFFFFF;
        if ( (unsigned int)v34 < *(_DWORD *)(v33 + 296) )
        {
          v35 = *(_QWORD *)(v33 + 280);
          v36 = *(_DWORD *)(v35 + 16 * v34 + 8);
          if ( LODWORD(v62[0]) >> 30 == ((v36 >> 5) & 3) && (v36 & 0x1F) != 0 )
          {
            v37 = 2 * (((unsigned __int64)v62[0] >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v35 + 16 * (((unsigned __int64)v62[0] >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
            {
              WdLogSingleEntry1(1LL, 222LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                222LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v56[0].hSyncObject + 280LL) + 8 * v37 + 8) &= ~0x2000u;
          }
        }
        v38 = v72;
        *(_QWORD *)(v72 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v38, 0LL);
        KeLeaveCriticalRegion();
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v74);
      if ( v55[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55);
      if ( a2 && (unsigned __int64)v6 >= MmUserProbeAddress )
        v6 = (struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *)MmUserProbeAddress;
      *(_OWORD *)&v6->hNtHandle = *(_OWORD *)Handle;
      *(_OWORD *)&v6->hSyncObject = *(_OWORD *)v62;
      *(_OWORD *)&v6->Reserved[1] = *(_OWORD *)v63;
      *(_OWORD *)&v6->Reserved[3] = v64;
      *(_OWORD *)&v6->Reserved[5] = v65;
      v6->Reserved[7] = v66;
      if ( !(unsigned int)Feature_3021246777__private_IsEnabledDeviceUsage() )
      {
        v39 = *(_QWORD *)&v56[0].hSyncObject;
        v40 = *(_QWORD *)&v56[0].hSyncObject + 248LL;
        DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)&v56[0].hSyncObject + 248LL));
        v41 = (LODWORD(v62[0]) >> 6) & 0xFFFFFF;
        if ( (unsigned int)v41 < *(_DWORD *)(v39 + 296) )
        {
          v42 = *(_QWORD *)(v39 + 280);
          if ( ((LODWORD(v62[0]) >> 25) & 0x60) == (*(_BYTE *)(v42 + 16 * v41 + 8) & 0x60)
            && (*(_DWORD *)(v42 + 16 * v41 + 8) & 0x1F) != 0 )
          {
            v43 = 2 * (((unsigned __int64)v62[0] >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v42 + 16 * (((unsigned __int64)v62[0] >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
            {
              WdLogSingleEntry1(1LL, 222LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                222LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            *(_DWORD *)(*(_QWORD *)(v39 + 280) + 8 * v43 + 8) &= ~0x2000u;
          }
        }
        *(_QWORD *)(v40 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v40, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      if ( v71 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v70);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v74);
      if ( v55[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55);
    }
    v27 = v48;
    if ( (*v54 & 0x10) == 0 )
      ObfDereferenceObject(v22);
LABEL_102:
    if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
    if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v44, &EventProfilerExit, v45, v51);
    return v27;
  }
  WdLogSingleEntry2(3LL, v25, -1073741788LL);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v74);
  if ( v55[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55);
  if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
  if ( v53 )
  {
    LOBYTE(v28) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v51);
  }
  return 3221225508LL;
}
