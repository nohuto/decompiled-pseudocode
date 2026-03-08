/*
 * XREFs of ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C0317F44
 * Callers:
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C0165934 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1C02231E8 (DxgkSubmitWaitForSyncObjectsToHwQueueInternal.c)
 * Callees:
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0001198 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0001314 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000717C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007344 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0018D48 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0024440 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00250B4 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C0025370 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C0051980 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     McTemplateK0pqPR1XR1_EtwWriteTransfer @ 0x1C0051AB8 (McTemplateK0pqPR1XR1_EtwWriteTransfer.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C0186BD8 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C02D95F0 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C0311BD4 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C034B4E8 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 *     ?VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBIPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEB_K_KIPEAVDXGHWQUEUE@@@Z @ 0x1C038C81C (-VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTE.c)
 */

__int64 __fastcall SubmitWaitForSyncObjectsFromGpu(
        unsigned int a1,
        const unsigned int *a2,
        unsigned __int64 *a3,
        unsigned int a4,
        struct DXGPROCESS *a5,
        bool a6,
        bool a7)
{
  __int64 v7; // rsi
  __int64 Src; // rdi
  const unsigned int *Elements; // r14
  __int64 v11; // r9
  struct DXGHWQUEUE *v12; // r15
  unsigned int v13; // edi
  __int64 v14; // rsi
  int v15; // ebx
  PVOID v17; // rcx
  size_t v18; // r8
  void *v19; // rbx
  struct DXGGLOBAL *Global; // rax
  _DWORD *v21; // r15
  const unsigned int *v22; // rdi
  struct DXGPROCESS *v23; // rax
  unsigned int v24; // ebx
  unsigned int v25; // eax
  __int64 v26; // r8
  __int64 v27; // rbx
  __int64 v28; // r8
  __int64 v29; // rdx
  DXGSYNCOBJECT **v30; // rcx
  unsigned int v31; // ebx
  unsigned int v32; // eax
  __int64 v33; // r8
  DXGSYNCOBJECT *v34; // rbx
  unsigned __int8 v35; // r8
  unsigned int HostHandle; // eax
  unsigned int v37; // r14d
  _QWORD *v38; // r12
  _BYTE *v39; // rax
  struct DXGSYNCOBJECT *v40; // rbx
  __int64 v41; // r9
  int v42; // eax
  __int64 v43; // r8
  __int64 v44; // rbx
  __int64 v45; // rdi
  const unsigned int *v46; // r14
  struct DXGSYNCOBJECT **v47; // [rsp+20h] [rbp-228h]
  char v48; // [rsp+50h] [rbp-1F8h]
  unsigned int v49; // [rsp+54h] [rbp-1F4h]
  unsigned int v50; // [rsp+54h] [rbp-1F4h]
  DXGSYNCOBJECT **v51; // [rsp+58h] [rbp-1F0h]
  char v52[8]; // [rsp+60h] [rbp-1E8h] BYREF
  char v53; // [rsp+68h] [rbp-1E0h]
  __int64 v54; // [rsp+70h] [rbp-1D8h] BYREF
  int v55; // [rsp+78h] [rbp-1D0h]
  struct DXGHWQUEUE *VidSchSyncObject; // [rsp+80h] [rbp-1C8h] BYREF
  PVOID v57; // [rsp+88h] [rbp-1C0h] BYREF
  _BYTE v58[32]; // [rsp+90h] [rbp-1B8h] BYREF
  int v59; // [rsp+B0h] [rbp-198h]
  char *v60; // [rsp+B8h] [rbp-190h]
  _BYTE *v61; // [rsp+C0h] [rbp-188h]
  struct DXGPROCESS *i; // [rsp+C8h] [rbp-180h]
  unsigned int v63; // [rsp+D0h] [rbp-178h]
  const unsigned __int64 *v64; // [rsp+D8h] [rbp-170h]
  const unsigned int *v65; // [rsp+E0h] [rbp-168h]
  _BYTE v66[16]; // [rsp+E8h] [rbp-160h] BYREF
  _QWORD v67[3]; // [rsp+F8h] [rbp-150h] BYREF
  PVOID v68; // [rsp+110h] [rbp-138h] BYREF
  _BYTE v69[16]; // [rsp+118h] [rbp-130h] BYREF
  int v70; // [rsp+128h] [rbp-120h]
  PVOID P; // [rsp+130h] [rbp-118h] BYREF
  _BYTE v72[32]; // [rsp+138h] [rbp-110h] BYREF
  unsigned int v73; // [rsp+158h] [rbp-F0h]
  _BYTE v74[160]; // [rsp+160h] [rbp-E8h] BYREF

  v7 = a4;
  Src = (__int64)a3;
  v65 = a2;
  v63 = a1;
  v64 = a3;
  i = a5;
  Elements = 0LL;
  VidSchSyncObject = 0LL;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v66, a4, a5, &VidSchSyncObject, a7);
  v12 = VidSchSyncObject;
  if ( !VidSchSyncObject )
  {
    v13 = -1073741811;
    WdLogSingleEntry3(2LL, a5, (unsigned int)v7, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed with invalid hHwQueue 0x%I64x returning 0x%I64x",
      (__int64)a5,
      v7,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_8;
  }
  v14 = *(_QWORD *)(*((_QWORD *)VidSchSyncObject + 2) + 16LL);
  v54 = v14;
  v55 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v74, v14, 0, v11, a7);
  if ( !a7 )
  {
    v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v74, 0LL);
    if ( v15 < 0 )
      goto LABEL_5;
  }
  P = 0LL;
  v73 = 0;
  if ( a6 )
  {
    NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements((__int64 *)&P, a1);
    v17 = P;
    if ( !P )
    {
      P = 0LL;
      v73 = 0;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v74);
      if ( v14 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v54);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v66);
      return 3221225495LL;
    }
    v18 = 8LL * v73;
    v67[2] = v18;
    v67[0] = P;
    if ( Src + v18 < Src || Src + v18 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v17, (const void *)Src, v18);
    Src = (__int64)P;
    v64 = (const unsigned __int64 *)P;
  }
  v57 = 0LL;
  v59 = 0;
  v19 = 0LL;
  v61 = 0LL;
  v68 = 0LL;
  v70 = 0;
  v60 = (char *)v12 + 16;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) + 16LL) + 16LL) + 209LL) )
  {
    v48 = 1;
    Elements = (const unsigned int *)PagedPoolZeroedArray<unsigned int,4>::AllocateElements((__int64 *)&v68, a1);
    if ( Elements )
      goto LABEL_20;
LABEL_28:
    if ( v68 != v69 && v68 )
      ExFreePoolWithTag(v68, 0);
    v70 = (int)v19;
    v68 = v19;
    if ( v57 != v58 && v57 )
      ExFreePoolWithTag(v57, 0);
    v59 = (int)v19;
    v57 = v19;
    if ( P != v72 && P )
      ExFreePoolWithTag(P, 0);
    P = v19;
    v73 = (unsigned int)v19;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v74);
    if ( v14 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v54);
    v13 = -1073741801;
    goto LABEL_8;
  }
  v48 = 0;
  v19 = (void *)PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements((__int64 *)&v57, a1);
  v61 = v19;
  if ( !v19 )
    goto LABEL_28;
LABEL_20:
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v52, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v52);
  v49 = 0;
  if ( a1 )
  {
    v51 = (DXGSYNCOBJECT **)v19;
    v21 = Elements;
    v22 = v65;
    v23 = (struct DXGPROCESS *)((char *)v65 - (char *)Elements);
    for ( i = (struct DXGPROCESS *)((char *)v65 - (char *)Elements); ; v23 = i )
    {
      v24 = *(_DWORD *)((char *)v21 + (_QWORD)v23);
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a5 + 248));
      v25 = (v24 >> 6) & 0xFFFFFF;
      if ( v25 < *((_DWORD *)a5 + 74)
        && (v26 = *((_QWORD *)a5 + 35), ((v24 >> 25) & 0x60) == (*(_BYTE *)(v26 + 16LL * v25 + 8) & 0x60))
        && (*(_DWORD *)(v26 + 16LL * v25 + 8) & 0x2000) == 0
        && (*(_DWORD *)(v26 + 16LL * v25 + 8) & 0x1F) == 0xB )
      {
        v27 = *(_QWORD *)(v26 + 16LL * v25);
      }
      else
      {
        v27 = 0LL;
      }
      _InterlockedDecrement((volatile signed __int32 *)a5 + 66);
      ExReleasePushLockSharedEx((char *)a5 + 248, 0LL);
      KeLeaveCriticalRegion();
      if ( v27 )
      {
        v28 = *(_QWORD *)(v27 + 16);
        v29 = *(_QWORD *)(*(_QWORD *)v60 + 16LL);
        if ( v28 != v29 )
        {
          WdLogSingleEntry2(2LL, v29, v28);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"WaitForSynchronizationObjectFromGpu on device 0x%p attempts to use a sync object opened on a differ"
                      "ent device 0x%p.",
            *(_QWORD *)(*(_QWORD *)v60 + 16LL),
            *(_QWORD *)(v27 + 16),
            0LL,
            0LL,
            0LL);
          goto LABEL_78;
        }
        if ( (*(_DWORD *)(v27 + 72) & 0x20) != 0 )
        {
          WdLogSingleEntry1(2LL, v22[v49]);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"0x%x object is opened as signal only and thus cannot be waited on.",
            v22[v49],
            0LL,
            0LL,
            0LL,
            0LL);
          if ( v53 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v52);
          if ( v68 != v69 && v68 )
            ExFreePoolWithTag(v68, 0);
          v68 = 0LL;
          v70 = 0;
          if ( v57 != v58 && v57 )
            ExFreePoolWithTag(v57, 0);
          v57 = 0LL;
          v59 = 0;
          if ( P != v72 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v73 = 0;
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v74);
          if ( v14 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v54);
          v13 = -1073741790;
          goto LABEL_8;
        }
        v30 = v51;
        if ( v48 )
          *v21 = *(_DWORD *)(v27 + 44);
        else
          *v51 = *(DXGSYNCOBJECT **)(v27 + 32);
      }
      else
      {
        v31 = *(_DWORD *)((char *)v21 + (_QWORD)i);
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a5 + 248));
        v32 = (v31 >> 6) & 0xFFFFFF;
        if ( v32 < *((_DWORD *)a5 + 74)
          && (v33 = *((_QWORD *)a5 + 35), ((v31 >> 25) & 0x60) == (*(_BYTE *)(v33 + 16LL * v32 + 8) & 0x60))
          && (*(_DWORD *)(v33 + 16LL * v32 + 8) & 0x2000) == 0
          && (*(_DWORD *)(v33 + 16LL * v32 + 8) & 0x1F) == 8 )
        {
          v34 = *(DXGSYNCOBJECT **)(v33 + 16LL * v32);
        }
        else
        {
          v34 = 0LL;
        }
        _InterlockedDecrement((volatile signed __int32 *)a5 + 66);
        ExReleasePushLockSharedEx((char *)a5 + 248, 0LL);
        KeLeaveCriticalRegion();
        if ( !v34 && !v48 )
        {
          WdLogSingleEntry3(1LL, a5, v22[v49], v49);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"0x%p failed to wait with invalid hSyncObject 0x%x at index %d",
            (__int64)a5,
            v22[v49],
            v49,
            0LL,
            0LL);
LABEL_78:
          if ( v53 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v52);
          if ( v68 != v69 && v68 )
            ExFreePoolWithTag(v68, 0);
          v70 = 0;
          v68 = 0LL;
          if ( v57 != v58 && v57 )
            ExFreePoolWithTag(v57, 0);
          v59 = 0;
          v57 = 0LL;
          if ( P != v72 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v73 = 0;
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v74);
          if ( v14 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v54);
          v13 = -1073741811;
LABEL_8:
          DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v66);
          return v13;
        }
        if ( v48 )
        {
          HostHandle = *(_DWORD *)((char *)v21 + (char *)v22 - (char *)Elements);
          if ( v34 )
            HostHandle = DXGSYNCOBJECT::GetHostHandle(v34, HostHandle, v35);
          *v21 = HostHandle;
          v30 = v51;
        }
        else
        {
          *v51 = v34;
          v30 = v51;
        }
      }
      ++v49;
      ++v21;
      v51 = v30 + 1;
      if ( v49 >= a1 )
      {
        v12 = VidSchSyncObject;
        Src = (__int64)v64;
        break;
      }
    }
  }
  if ( v48 )
  {
    v15 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromGpu(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v60 + 16LL) + 16LL) + 16LL)
                                         + 4472LL),
            a5,
            0LL,
            Elements,
            0LL,
            0LL,
            (void *)Src,
            0LL,
            a1,
            v12);
    if ( v53 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v52);
    if ( v68 != v69 && v68 )
      ExFreePoolWithTag(v68, 0);
    v68 = 0LL;
    v70 = 0;
    if ( v57 != v58 && v57 )
      ExFreePoolWithTag(v57, 0);
    v57 = 0LL;
    v59 = 0;
    if ( P != v72 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v73 = 0;
LABEL_5:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v74);
    if ( v14 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v54);
    v13 = v15;
    goto LABEL_8;
  }
  v37 = 0;
  if ( a1 )
  {
    v38 = (_QWORD *)Src;
    v39 = &v61[-Src];
    v61 -= Src;
    while ( 1 )
    {
      v40 = *(struct DXGSYNCOBJECT **)((char *)v38 + (_QWORD)v39);
      DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v67, v40);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v67);
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                           v40,
                           *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)v60 + 16LL) + 16LL));
      v42 = (*(__int64 (__fastcall **)(_QWORD, struct DXGHWQUEUE *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v41 + 16LL) + 16LL) + 736LL)
                                                                                       + 8LL)
                                                                           + 632LL))(
              *((_QWORD *)v12 + 5),
              VidSchSyncObject,
              *v38);
      v50 = v42;
      if ( v42 < 0 )
        break;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(v47) = 1;
        McTemplateK0pqPR1XR1_EtwWriteTransfer(
          Src + 8LL * v37,
          &EventWaitForSynchronizationObjectFromGpu,
          v43,
          v12,
          v47,
          &VidSchSyncObject,
          Src + 8LL * v37);
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v67);
      ++v37;
      ++v38;
      v39 = v61;
      if ( v37 >= v63 )
        goto LABEL_113;
    }
    v44 = v42;
    v45 = v37;
    v46 = v65;
    WdLogSingleEntry4(2LL, a5, v65[v45], (unsigned int)v45, v42);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed to acquire hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
      (__int64)a5,
      v46[v45],
      v45,
      v44,
      0LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v67);
    if ( v53 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v52);
    if ( v68 != v69 && v68 )
      ExFreePoolWithTag(v68, 0);
    v68 = 0LL;
    v70 = 0;
    if ( v57 != v58 && v57 )
      ExFreePoolWithTag(v57, 0);
    v57 = 0LL;
    v59 = 0;
    if ( P != v72 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v73 = 0;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v74);
    if ( v14 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v54);
    v13 = v50;
    goto LABEL_8;
  }
LABEL_113:
  if ( v53 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v52);
  if ( v68 != v69 && v68 )
    ExFreePoolWithTag(v68, 0);
  v68 = 0LL;
  v70 = 0;
  if ( v57 != v58 && v57 )
    ExFreePoolWithTag(v57, 0);
  v57 = 0LL;
  v59 = 0;
  if ( P != v72 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v73 = 0;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v74);
  if ( v14 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v54);
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v66);
  return 0LL;
}
