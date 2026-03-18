/*
 * XREFs of ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C01A3814
 * Callers:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1C01A5B7C (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1C01EA2B0 (-DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z.c)
 *     DxgkDestroySynchronizationObject @ 0x1C01EA3D0 (DxgkDestroySynchronizationObject.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z @ 0x1C01ED178 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1C0328E60 (DxgkOpenSyncObjectFromNtHandle.c)
 *     ?VmBusDestroySyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037D8E0 (-VmBusDestroySyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00042E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000438C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0004690 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004D78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007894 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0007B34 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0008088 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ??1DXGPROCESSDDILOCK@@QEAA@XZ @ 0x1C0023F50 (--1DXGPROCESSDDILOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024B68 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C01A1FF8 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C01A5A90 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroySynchronizationObjectImpl(
        const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *a1,
        int a2,
        __int64 a3)
{
  const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *v4; // rbx
  DXGDEVICESYNCOBJECT *v5; // r14
  struct DXGPROCESS *Current; // r15
  unsigned int hSyncObject; // edi
  __int64 v8; // rbx
  unsigned int v9; // esi
  __int64 v10; // rcx
  __int64 v11; // r9
  char *v12; // rdx
  unsigned int v13; // r9d
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // r9
  struct DXGSYNCOBJECT *v19; // rbx
  __int64 v20; // r8
  int v21; // edx
  DXGGLOBAL *Global; // rax
  __int64 v23; // r8
  int v24; // edx
  __int64 v25; // r8
  int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // r8
  bool v29; // sf
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // [rsp+50h] [rbp-148h] BYREF
  __int64 v33; // [rsp+58h] [rbp-140h]
  char v34; // [rsp+60h] [rbp-138h]
  D3DKMT_HANDLE v35; // [rsp+68h] [rbp-130h]
  _QWORD v36[2]; // [rsp+70h] [rbp-128h] BYREF
  _BYTE v37[24]; // [rsp+80h] [rbp-118h] BYREF
  _BYTE v38[24]; // [rsp+98h] [rbp-100h] BYREF
  _BYTE v39[32]; // [rsp+B0h] [rbp-E8h] BYREF
  _BYTE v40[160]; // [rsp+D0h] [rbp-C8h] BYREF

  v4 = a1;
  v32 = -1;
  v5 = 0LL;
  v33 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v34 = 1;
    v32 = 2042;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2042);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 2042);
  Current = DXGPROCESS::GetCurrent();
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 )
    {
      v29 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_62;
    }
    return 3221225485LL;
  }
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
    hSyncObject = v4->hSyncObject;
    v35 = v4->hSyncObject;
  }
  else
  {
    hSyncObject = v4->hSyncObject;
    v35 = v4->hSyncObject;
  }
  v8 = 0LL;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v37, Current);
  v9 = (hSyncObject >> 6) & 0xFFFFFF;
  if ( v9 < *((_DWORD *)Current + 74)
    && (v18 = *((_QWORD *)Current + 35), ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v18 + 16LL * v9 + 8) & 0x60))
    && (*(_DWORD *)(v18 + 16LL * v9 + 8) & 0x2000) == 0
    && (*(_DWORD *)(v18 + 16LL * v9 + 8) & 0x1F) == 0xB )
  {
    v10 = *(_QWORD *)(v18 + 16LL * v9);
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
  {
LABEL_11:
    DXGPROCESSDDILOCK::~DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v37);
    if ( v8 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v36,
        (struct DXGDEVICE *)v8);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v40, v8, 2, v11, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v40, v12);
      DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v39, Current);
      v13 = *((_DWORD *)Current + 74);
      if ( v9 < v13 )
      {
        v14 = *((_QWORD *)Current + 35);
        if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v14 + 16LL * v9 + 8) & 0x60)
          && (*(_DWORD *)(v14 + 16LL * v9 + 8) & 0x2000) == 0
          && (*(_DWORD *)(v14 + 16LL * v9 + 8) & 0x1F) == 0xB )
        {
          v5 = *(DXGDEVICESYNCOBJECT **)(v14 + 16LL * v9);
        }
        else
        {
          v5 = 0LL;
        }
      }
      if ( v5 )
      {
        if ( v9 < v13 )
        {
          v23 = *((_QWORD *)Current + 35);
          v24 = *(_DWORD *)(v23 + 16LL * v9 + 8);
          if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v23 + 16LL * v9 + 8) & 0x60)
            && (v24 & 0x2000) == 0
            && (v24 & 0x1F) != 0 )
          {
            *(_DWORD *)(v23 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
          }
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v39);
        DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(v5);
        ExFreePoolWithTag(v5, 0);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v40);
        if ( v36[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v8 + 16), (struct DXGDEVICE *)v8);
      }
      else
      {
        WdLogSingleEntry1(3LL, hSyncObject);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v39);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v40);
        if ( v36[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v8 + 16), (struct DXGDEVICE *)v8);
      }
LABEL_23:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
      if ( v34 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v32);
      }
      return 0LL;
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v38, Current);
    if ( v9 < *((_DWORD *)Current + 74) )
    {
      v25 = *((_QWORD *)Current + 35);
      if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v25 + 16LL * v9 + 8) & 0x60)
        && (*(_DWORD *)(v25 + 16LL * v9 + 8) & 0x2000) == 0 )
      {
        v26 = *(_DWORD *)(v25 + 16LL * v9 + 8) & 0x1F;
        if ( v26 )
        {
          if ( v26 == 8 )
          {
            v19 = *(struct DXGSYNCOBJECT **)(v25 + 16LL * v9);
LABEL_31:
            if ( v19 )
            {
              if ( v9 < *((_DWORD *)Current + 74) )
              {
                v20 = *((_QWORD *)Current + 35);
                v21 = *(_DWORD *)(v20 + 16LL * v9 + 8);
                if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v20 + 16LL * v9 + 8) & 0x60)
                  && (v21 & 0x2000) == 0
                  && (v21 & 0x1F) != 0 )
                {
                  *(_DWORD *)(v20 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                }
              }
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
              Global = DXGGLOBAL::GetGlobal();
              DXGGLOBAL::DestroySyncObject(Global, v19, hSyncObject);
              goto LABEL_23;
            }
            WdLogSingleEntry2(3LL, hSyncObject, -1073741811LL);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
            if ( v34 )
            {
              LOBYTE(v27) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
              v29 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_62:
              if ( v29 )
                McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v32);
              return 3221225485LL;
            }
            return 3221225485LL;
          }
          WdLogSingleEntry1(2LL, 316LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v19 = 0LL;
    goto LABEL_31;
  }
  if ( (*(_BYTE *)(v10 + 92) & 2) != 0 )
  {
    v8 = *(_QWORD *)(v10 + 16);
    _InterlockedIncrement64((volatile signed __int64 *)(v8 + 64));
    hSyncObject = v35;
    goto LABEL_11;
  }
  WdLogSingleEntry1(3LL, hSyncObject);
  DXGPROCESSDDILOCK::~DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v37);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v32);
  return 3221225506LL;
}
