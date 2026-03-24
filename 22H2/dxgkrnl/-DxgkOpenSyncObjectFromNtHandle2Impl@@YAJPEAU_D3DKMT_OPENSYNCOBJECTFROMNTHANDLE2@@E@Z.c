/*
 * XREFs of ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z @ 0x1C0156168
 * Callers:
 *     DxgkOpenSyncObjectFromNtHandle2Internal @ 0x1C0156150 (DxgkOpenSyncObjectFromNtHandle2Internal.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1C027A210 (DxgkOpenSyncObjectFromNtHandle2.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0005090 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0008BB0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0008C04 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_3088355641__private_IsEnabledDeviceUsage @ 0x1C0027C04 (Feature_3088355641__private_IsEnabledDeviceUsage.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0047124 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C01174F4 (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C011AC00 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle2Impl(
        struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *a1,
        char a2,
        __int64 a3)
{
  struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  ULONG64 v10; // rcx
  __int64 v11; // r8
  struct DXGPROCESS *Current; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  ULONG64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct ADAPTER_RENDER **v20; // r13
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  HANDLE v30; // r12
  NTSTATUS v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  unsigned int v36; // ebx
  PERESOURCE *Global; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  signed int hSyncObject; // r12d
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  unsigned int v46; // r8d
  unsigned __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  unsigned __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  struct DXGDEVICE *v57; // [rsp+68h] [rbp-1B0h] BYREF
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v58; // [rsp+70h] [rbp-1A8h]
  int v59; // [rsp+78h] [rbp-1A0h] BYREF
  __int64 v60; // [rsp+80h] [rbp-198h]
  char v61; // [rsp+88h] [rbp-190h]
  struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *v62; // [rsp+90h] [rbp-188h]
  _QWORD v63[2]; // [rsp+98h] [rbp-180h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-170h] BYREF
  HANDLE Handle[2]; // [rsp+B0h] [rbp-168h]
  void *v66[2]; // [rsp+C0h] [rbp-158h] BYREF
  unsigned int v67[4]; // [rsp+D0h] [rbp-148h] BYREF
  __int128 v68; // [rsp+E0h] [rbp-138h]
  __int128 v69; // [rsp+F0h] [rbp-128h]
  UINT64 v70; // [rsp+100h] [rbp-118h]
  struct DXGDEVICE *v71; // [rsp+110h] [rbp-108h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+118h] [rbp-100h] BYREF
  struct DXGADAPTERSYNCOBJECT *v73; // [rsp+120h] [rbp-F8h] BYREF
  _BYTE v74[8]; // [rsp+128h] [rbp-F0h] BYREF
  char v75; // [rsp+130h] [rbp-E8h]
  _BYTE v76[160]; // [rsp+140h] [rbp-D8h] BYREF

  v4 = a1;
  v62 = a1;
  v59 = -1;
  v60 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v61 = 1;
    v59 = 2086;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2086);
  }
  else
  {
    v61 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v59, 2086LL);
  Current = DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  if ( !Current )
  {
    v13 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v13);
LABEL_21:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59, v14);
    if ( v61 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v59);
    }
    return 3221225485LL;
  }
  if ( a2 )
  {
    v10 = MmUserProbeAddress;
    v15 = (ULONG64)v4;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v15 = MmUserProbeAddress;
    *(_OWORD *)Handle = *(_OWORD *)v15;
    *(_OWORD *)v66 = *(_OWORD *)(v15 + 16);
    *(_OWORD *)v67 = *(_OWORD *)(v15 + 32);
    v68 = *(_OWORD *)(v15 + 48);
    v69 = *(_OWORD *)(v15 + 64);
    v70 = *(_QWORD *)(v15 + 80);
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)&v4->hNtHandle;
    *(_OWORD *)v66 = *(_OWORD *)&v4->hSyncObject;
    *(_OWORD *)v67 = *(_OWORD *)&v4->Reserved[1];
    v68 = *(_OWORD *)&v4->Reserved[3];
    v69 = *(_OWORD *)&v4->Reserved[5];
    v70 = v4->Reserved[7];
  }
  LODWORD(v66[0]) = 0;
  if ( (HIDWORD(Handle[1]) & 0x7FFFFE00) != 0 )
  {
    v16 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v16 + 24) = 1587LL;
    WdLogEvent5_WdWarning(v16);
    goto LABEL_21;
  }
  if ( (BYTE4(Handle[1]) & 0x10) != 0 || (BYTE4(Handle[1]) & 0x20) != 0 )
  {
    v17 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v17 + 24) = 1594LL;
    WdLogEvent5_WdWarning(v17);
  }
  v71 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v57, LODWORD(Handle[1]), (struct _KTHREAD **)Current, &v71);
  v20 = (struct ADAPTER_RENDER **)v71;
  if ( !v71 )
  {
    v21 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v21 + 24) = LODWORD(Handle[1]);
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    if ( v57 && _InterlockedExchangeAdd64((volatile signed __int64 *)v57 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v57 + 2), v57);
    goto LABEL_21;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v63, v71);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v76, (__int64)v20, 0, v25, 0);
  LODWORD(v26) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v76, 0LL);
  if ( (int)v26 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v76);
    if ( v63[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v63);
    if ( !v57 )
      goto LABEL_31;
    goto LABEL_29;
  }
  HandleInformation = 0LL;
  Object = 0LL;
  v30 = Handle[0];
  v31 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSyncObjectType, 1, &Object, &HandleInformation);
  v26 = v31;
  if ( v31 == -1073741788 )
  {
    v35 = WdLogNewEntry5_WdWarning(v33, v32, v34);
    v26 = -1073741788LL;
    goto LABEL_37;
  }
  if ( v31 < 0 )
  {
    v35 = WdLogNewEntry5_WdWarning(v33, v32, v34);
LABEL_37:
    *(_QWORD *)(v35 + 24) = v30;
    *(_QWORD *)(v35 + 32) = v26;
    WdLogEvent5_WdWarning(v35);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v76);
    if ( v63[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v63);
    if ( !v57 )
      goto LABEL_31;
LABEL_29:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v57 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v57 + 2), v57);
LABEL_31:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59, v27);
    if ( v61 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v59);
    return (unsigned int)v26;
  }
  v36 = HIDWORD(Handle[1]) & 0xFFFFFFCF | ~(8 * LOBYTE(HandleInformation.GrantedAccess)) & 0x10 | ~(32
                                                                                                  * LOBYTE(HandleInformation.GrantedAccess)) & 0x20;
  v73 = 0LL;
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v33, v32);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v74, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v74, v38);
  hSyncObject = DXGSYNCOBJECT::Open(
                  *(DXGSYNCOBJECT **)Object,
                  v20[2],
                  (struct DXGDEVICE *)v20,
                  0LL,
                  (unsigned int *)v66,
                  &v66[1],
                  (unsigned __int64 *)v67,
                  v67[2],
                  &v73,
                  1,
                  (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v36);
  v58.hSyncObject = hSyncObject;
  if ( hSyncObject >= 0 )
  {
    if ( v75 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v74);
    if ( bTracingEnabled )
    {
      v42 = v73 ? *((_QWORD *)v73 + 4) : 0LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppp_EtwWriteTransfer(v39, &EventOpenSyncObject, v40, v42, LODWORD(v66[0]), v20);
    }
    if ( (unsigned int)Feature_3088355641__private_IsEnabledDeviceUsage() )
    {
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
      v43 = (LODWORD(v66[0]) >> 6) & 0xFFFFFF;
      v44 = LODWORD(v66[0]) >> 30;
      if ( (unsigned int)v43 < *((_DWORD *)Current + 64) )
      {
        v45 = *((_QWORD *)Current + 30);
        v46 = *(_DWORD *)(v45 + 16 * v43 + 8);
        if ( (_DWORD)v44 == ((v46 >> 5) & 3) && (v46 & 0x1F) != 0 )
        {
          v47 = 2 * (((unsigned __int64)v66[0] >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v45 + 16 * (((unsigned __int64)v66[0] >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            v48 = WdLogNewEntry5_WdAssertion(v44, v45);
            *(_QWORD *)(v48 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v48);
            v45 = *((_QWORD *)Current + 30);
          }
          *(_DWORD *)(v45 + 8 * v47 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v76);
    if ( v63[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v63);
    if ( a2 && (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *)MmUserProbeAddress;
    *(_OWORD *)&v4->hNtHandle = *(_OWORD *)Handle;
    *(_OWORD *)&v4->hSyncObject = *(_OWORD *)v66;
    *(_OWORD *)&v4->Reserved[1] = *(_OWORD *)v67;
    *(_OWORD *)&v4->Reserved[3] = v68;
    *(_OWORD *)&v4->Reserved[5] = v69;
    v4->Reserved[7] = v70;
    if ( !(unsigned int)Feature_3088355641__private_IsEnabledDeviceUsage() )
    {
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
      v49 = (LODWORD(v66[0]) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v49 < *((_DWORD *)Current + 64) )
      {
        v50 = *((_QWORD *)Current + 30);
        if ( ((LODWORD(v66[0]) >> 25) & 0x60) == (*(_BYTE *)(v50 + 16 * v49 + 8) & 0x60)
          && (*(_DWORD *)(v50 + 16 * v49 + 8) & 0x1F) != 0 )
        {
          v51 = 2 * (((unsigned __int64)v66[0] >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v50 + 16 * (((unsigned __int64)v66[0] >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            v52 = WdLogNewEntry5_WdAssertion((LODWORD(v66[0]) >> 25) & 0x60, v50);
            *(_QWORD *)(v52 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v52);
            v50 = *((_QWORD *)Current + 30);
          }
          *(_DWORD *)(v50 + 8 * v51 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
    }
    hSyncObject = v58.hSyncObject;
  }
  else
  {
    if ( v75 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v74);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v76);
    if ( v63[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v63);
  }
  ObfDereferenceObject(Object);
  if ( v57 && _InterlockedExchangeAdd64((volatile signed __int64 *)v57 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v57 + 2), v57);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59, v53);
  if ( v61 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v54, &EventProfilerExit, v55, v59);
  return (unsigned int)hSyncObject;
}
