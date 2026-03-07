__int64 __fastcall DxgkOpenSyncObjectFromNtHandle2Impl(
        struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *a1,
        char a2,
        __int64 a3,
        __int64 a4,
        void *a5)
{
  struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *v6; // r14
  __int64 v7; // rcx
  struct _KTHREAD **Current; // r13
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS v9; // ebx
  struct DXGDEVICE *v10; // r13
  __int64 v11; // r9
  int v12; // r13d
  NTSTATUS v13; // eax
  int v14; // ebx
  DXGSYNCOBJECT **v15; // r13
  struct DXGGLOBAL *v16; // rax
  struct DXGDEVICE *v17; // r12
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KTHREAD **v20; // r12
  struct _KTHREAD **v21; // r14
  __int64 v22; // rax
  struct _KTHREAD *v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned __int64 v27; // rbx
  ULONG64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r13
  struct DXGGLOBAL *Global; // rax
  void *v34; // r9
  unsigned int v35; // eax
  unsigned int v36; // ecx
  int v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // r8
  struct DXGDEVICE *v43; // [rsp+68h] [rbp-1D0h] BYREF
  int v44; // [rsp+70h] [rbp-1C8h] BYREF
  __int64 v45; // [rsp+78h] [rbp-1C0h]
  char v46; // [rsp+80h] [rbp-1B8h]
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v47; // [rsp+88h] [rbp-1B0h]
  _DWORD *v48; // [rsp+90h] [rbp-1A8h]
  _QWORD v49[2]; // [rsp+98h] [rbp-1A0h] BYREF
  void *v50; // [rsp+A8h] [rbp-190h]
  _QWORD *v51; // [rsp+B0h] [rbp-188h]
  struct DXGDEVICE *v52; // [rsp+B8h] [rbp-180h] BYREF
  HANDLE Handle[2]; // [rsp+C0h] [rbp-178h]
  void *v54[2]; // [rsp+D0h] [rbp-168h] BYREF
  unsigned int v55[4]; // [rsp+E0h] [rbp-158h] BYREF
  __int128 v56; // [rsp+F0h] [rbp-148h]
  __int128 v57; // [rsp+100h] [rbp-138h]
  UINT64 v58; // [rsp+110h] [rbp-128h]
  __int64 v59; // [rsp+120h] [rbp-118h] BYREF
  char v60; // [rsp+128h] [rbp-110h]
  PVOID Object; // [rsp+130h] [rbp-108h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+138h] [rbp-100h] BYREF
  struct DXGADAPTERSYNCOBJECT *v63; // [rsp+140h] [rbp-F8h] BYREF
  struct _KTHREAD **v64; // [rsp+148h] [rbp-F0h]
  char v65[8]; // [rsp+150h] [rbp-E8h] BYREF
  char v66; // [rsp+158h] [rbp-E0h]
  struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *v67; // [rsp+160h] [rbp-D8h]
  _BYTE v68[160]; // [rsp+170h] [rbp-C8h] BYREF

  v6 = a1;
  v67 = a1;
  v50 = a5;
  v44 = -1;
  v45 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v46 = 1;
    v44 = 2086;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2086);
  }
  else
  {
    v46 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v44, 2086);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v7);
  v64 = Current;
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
    goto LABEL_73;
  }
  if ( a2 )
  {
    v28 = (ULONG64)v6;
    if ( (unsigned __int64)v6 >= MmUserProbeAddress )
      v28 = MmUserProbeAddress;
    *(_OWORD *)Handle = *(_OWORD *)v28;
    *(_OWORD *)v54 = *(_OWORD *)(v28 + 16);
    *(_OWORD *)v55 = *(_OWORD *)(v28 + 32);
    v56 = *(_OWORD *)(v28 + 48);
    v57 = *(_OWORD *)(v28 + 64);
    v58 = *(_QWORD *)(v28 + 80);
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)&v6->hNtHandle;
    *(_OWORD *)v54 = *(_OWORD *)&v6->hSyncObject;
    *(_OWORD *)v55 = *(_OWORD *)&v6->Reserved[1];
    v56 = *(_OWORD *)&v6->Reserved[3];
    v57 = *(_OWORD *)&v6->Reserved[5];
    v58 = v6->Reserved[7];
  }
  LODWORD(v54[0]) = 0;
  if ( (HIDWORD(Handle[1]) & 0x7FFFFC00) != 0 )
  {
    WdLogSingleEntry1(3LL, 1781LL);
LABEL_73:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v38, &EventProfilerExit, v39, v44);
    return 3221225485LL;
  }
  v9.0 = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E)HIDWORD(Handle[1]);
  if ( (BYTE4(Handle[1]) & 0x10) != 0 || (BYTE4(Handle[1]) & 0x20) != 0 )
    WdLogSingleEntry1(3LL, 1788LL);
  v52 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v43, (unsigned int)Handle[1], Current, &v52);
  v10 = v52;
  if ( !v52 )
  {
    v29 = LODWORD(Handle[1]);
    WdLogSingleEntry2(2LL, LODWORD(Handle[1]), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v29,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_70:
    if ( v43 && _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
    goto LABEL_73;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v49, v52, 1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v68, (__int64)v10, 0, v11, 0);
  v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v68, 0LL);
  if ( v12 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v68);
    if ( v49[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v49);
    if ( v43 && _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v44);
    return (unsigned int)v12;
  }
  v47.hSyncObject = v9.Value;
  v48 = v64 + 53;
  if ( ((_DWORD)v64[53] & 0x10) != 0 )
  {
    v32 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 4);
    v51 = (_QWORD *)v32;
    Global = DXGGLOBAL::GetGlobal();
    DXGAUTOPUSHLOCKFASTSHARED::DXGAUTOPUSHLOCKFASTSHARED(
      (DXGAUTOPUSHLOCKFASTSHARED *)&v59,
      (struct DXGGLOBAL *)((char *)Global + 40));
    v34 = v50;
    v35 = ((unsigned int)v50 >> 6) & 0xFFFFFF;
    if ( v35 < *(_DWORD *)(v32 + 16) )
    {
      v36 = *(_DWORD *)(*v51 + 16LL * v35 + 8);
      if ( (unsigned int)v50 >> 30 == ((v36 >> 5) & 3) && (v36 & 0x2000) == 0 )
      {
        v37 = v36 & 0x1F;
        if ( v37 )
        {
          if ( v37 == 8 )
          {
            v15 = *(DXGSYNCOBJECT ***)(*v51 + 16LL * v35);
            goto LABEL_65;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          v34 = v50;
        }
      }
    }
    v15 = 0LL;
LABEL_65:
    v51 = v15;
    if ( v15 )
    {
      if ( v60 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v59 + 16), 0xFFFFFFFF);
        ExReleasePushLockSharedEx(v59, 0LL);
        KeLeaveCriticalRegion();
      }
      goto LABEL_15;
    }
    WdLogSingleEntry1(3LL, v34);
    if ( v60 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v59 + 16), 0xFFFFFFFF);
      ExReleasePushLockSharedEx(v59, 0LL);
      KeLeaveCriticalRegion();
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v68);
    if ( v49[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v49);
    goto LABEL_70;
  }
  HandleInformation = 0LL;
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSyncObjectType, 1, &Object, &HandleInformation);
  v14 = v13;
  v15 = (DXGSYNCOBJECT **)Object;
  v51 = Object;
  if ( v13 != -1073741788 )
  {
    if ( v13 < 0 )
    {
      WdLogSingleEntry2(3LL, Handle[0], v13);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v68);
      if ( v49[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v49);
      goto LABEL_33;
    }
    v9.0 = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E)(v47.hSyncObject & 0xFFFFFFCF | ~(8 * LOBYTE(HandleInformation.GrantedAccess)) & 0x10 | ~(32 * LOBYTE(HandleInformation.GrantedAccess)) & 0x20);
LABEL_15:
    v63 = 0LL;
    v16 = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v65, v16, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v65);
    v17 = v52;
    v14 = DXGSYNCOBJECT::Open(
            *v15,
            *((struct ADAPTER_RENDER **)v52 + 2),
            v52,
            0LL,
            (unsigned int *)v54,
            &v54[1],
            (unsigned __int64 *)v55,
            v55[2],
            &v63,
            1,
            v9);
    LODWORD(v50) = v14;
    if ( v14 < 0 )
    {
      if ( v66 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v65);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v68);
      if ( v49[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v49);
    }
    else
    {
      if ( v66 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v65);
      if ( bTracingEnabled )
      {
        v19 = v63 ? *((_QWORD *)v63 + 4) : 0LL;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ppp_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            &EventOpenSyncObject,
            v18,
            v19,
            LODWORD(v54[0]),
            v17);
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v68);
      if ( v49[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v49);
      if ( a2 && (unsigned __int64)v6 >= MmUserProbeAddress )
        v6 = (struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *)MmUserProbeAddress;
      *(_OWORD *)&v6->hNtHandle = *(_OWORD *)Handle;
      *(_OWORD *)&v6->hSyncObject = *(_OWORD *)v54;
      *(_OWORD *)&v6->Reserved[1] = *(_OWORD *)v55;
      *(_OWORD *)&v6->Reserved[3] = v56;
      *(_OWORD *)&v6->Reserved[5] = v57;
      v6->Reserved[7] = v58;
      v20 = v64;
      v21 = v64 + 31;
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v64 + 31));
      v22 = (LODWORD(v54[0]) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v22 < *((_DWORD *)v20 + 74) )
      {
        v23 = v20[35];
        if ( ((LODWORD(v54[0]) >> 25) & 0x60) == (*((_BYTE *)v23 + 16 * v22 + 8) & 0x60)
          && (*((_DWORD *)v23 + 4 * v22 + 2) & 0x1F) != 0 )
        {
          v27 = 2 * (((unsigned __int64)v54[0] >> 6) & 0xFFFFFF);
          if ( (*((_DWORD *)v23 + 4 * (((unsigned __int64)v54[0] >> 6) & 0xFFFFFF) + 2) & 0x2000) == 0 )
          {
            WdLogSingleEntry1(1LL, 217LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              217LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *((_DWORD *)v20[35] + 2 * v27 + 2) &= ~0x2000u;
          v14 = (int)v50;
        }
      }
      v21[1] = 0LL;
      ExReleasePushLockExclusiveEx(v21, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (*v48 & 0x10) == 0 )
      ObfDereferenceObject(v15);
LABEL_33:
    if ( v43 && _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( v46 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v44);
    }
    return (unsigned int)v14;
  }
  WdLogSingleEntry2(3LL, Handle[0], -1073741788LL);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v68);
  if ( v49[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v49);
  if ( v43 && _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
  if ( v46 )
  {
    LOBYTE(v40) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v44);
  }
  return 3221225508LL;
}
