/*
 * XREFs of ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C026DF3C
 * Callers:
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C026CEDC (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C0005074 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C0008764 (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0008BB0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0008C04 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C00090A0 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0047124 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x1C00DC7D0 (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C011A458 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01252E8 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DdiCreateHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z @ 0x1C021941C (-DdiCreateHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z.c)
 *     ?InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C026E5FC (-InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 */

int __fastcall DXGHWQUEUE::Initialize(DXGHWQUEUE *this, struct _D3DKMT_CREATEHWQUEUE *a2, void *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int result; // eax
  PERESOURCE *Global; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  struct DXGDEVICE *v13; // rdi
  __int64 v14; // rcx
  unsigned int v15; // ebx
  struct ADAPTER_RENDER *v16; // rsi
  __int64 v17; // rdx
  struct DXGGLOBAL *v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 v24; // rbx
  struct DXGDEVICE *v25; // rdi
  struct ADAPTER_RENDER *v26; // rsi
  unsigned __int64 v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // ebx
  __int64 v37; // rdx
  struct DXGGLOBAL *v38; // rax
  int SyncObject; // eax
  __int64 v40; // rax
  __int64 v41; // rdi
  D3DKMT_HANDLE v42; // esi
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  UINT PrivateDriverDataSize; // eax
  __int64 v47; // rdx
  UINT Value; // ecx
  __int64 v49; // rdx
  void *v50; // rcx
  D3DGPU_VIRTUAL_ADDRESS v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  _QWORD *v54; // rdi
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rax
  int v60; // eax
  __int64 v61; // rdx
  HANDLE hHwQueue; // rcx
  __int64 v63; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v65; // rdx
  struct _VIDSCH_SYNC_OBJECT *v66; // rax
  __int64 v67; // rdx
  unsigned int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // r8
  _BYTE v71[8]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v72; // [rsp+70h] [rbp-98h]
  _DXGKARG_CREATEHWQUEUE v73; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v74[10]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v75[10]; // [rsp+F8h] [rbp-10h] BYREF
  D3DKMT_HANDLE v76; // [rsp+178h] [rbp+70h] BYREF

  memset(v75, 0, sizeof(v75));
  v6 = *((_QWORD *)this + 2);
  v76 = 0;
  LODWORD(v75[0]) = 5;
  v7 = *(_QWORD *)(v6 + 16);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL);
  if ( !*(_BYTE *)(v8 + 209) || (result = DXGHWQUEUE::InitializeOnHost(this, a2, a3), result >= 0) )
  {
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v8, v7);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v71, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v71, v11);
    v12 = *((_QWORD *)this + 2);
    v13 = *(struct DXGDEVICE **)(v12 + 16);
    v14 = *(unsigned int *)(v12 + 416);
    v15 = 1 << v14;
    v16 = (struct ADAPTER_RENDER *)*((_QWORD *)v13 + 2);
    v18 = DXGGLOBAL::GetGlobal(v14, v17);
    v19 = DXGGLOBAL::CreateSyncObject(
            (__int64)v18,
            v16,
            v13,
            v15,
            (__int64)v75,
            3u,
            0,
            0LL,
            0LL,
            (struct DXGDEVICESYNCOBJECT **)this + 6,
            &v76,
            0LL);
    v23 = v19;
    if ( v19 < 0 )
      goto LABEL_13;
    v24 = *((_QWORD *)this + 2);
    v25 = *(struct DXGDEVICE **)(v24 + 16);
    v26 = (struct ADAPTER_RENDER *)*((_QWORD *)v25 + 2);
    if ( *(_BYTE *)(*((_QWORD *)v26 + 2) + 209LL) )
    {
      v27 = v76;
      *(_DWORD *)(*((_QWORD *)this + 6) + 44LL) = a2->hHwQueueProgressFence;
      a2->hHwQueueProgressFence = v27;
      v28 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 40LL);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v28 + 208));
      v29 = ((unsigned int)v27 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v29 < *(_DWORD *)(v28 + 256) )
      {
        v30 = *(_QWORD *)(v28 + 240);
        v31 = ((unsigned int)v27 >> 25) & 0x60;
        if ( (((unsigned int)v27 >> 25) & 0x60) == (*(_BYTE *)(v30 + 16 * v29 + 8) & 0x60)
          && (*(_DWORD *)(v30 + 16 * v29 + 8) & 0x1F) != 0 )
        {
          v32 = 2 * ((v27 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v30 + 8 * v32 + 8) & 0x2000) == 0 )
          {
            v33 = WdLogNewEntry5_WdAssertion(v31, v30);
            *(_QWORD *)(v33 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v33);
            v30 = *(_QWORD *)(v28 + 240);
          }
          *(_DWORD *)(v30 + 8 * v32 + 8) &= ~0x2000u;
        }
      }
      *(_QWORD *)(v28 + 216) = 0LL;
      ExReleasePushLockExclusiveEx(v28 + 208, 0LL);
      KeLeaveCriticalRegion();
      LODWORD(v23) = 0;
      goto LABEL_14;
    }
    memset(v74, 0, sizeof(v74));
    v34 = *(unsigned int *)(v24 + 416);
    v35 = *((_QWORD *)this + 10);
    HIDWORD(v74[0]) |= 0x80u;
    v36 = 1 << v34;
    LODWORD(v74[0]) = 5;
    v74[1] = v35;
    v38 = DXGGLOBAL::GetGlobal(v34, v37);
    SyncObject = DXGGLOBAL::CreateSyncObject(
                   (__int64)v38,
                   v26,
                   v25,
                   v36,
                   (__int64)v74,
                   0x10u,
                   0,
                   0LL,
                   0LL,
                   (struct DXGDEVICESYNCOBJECT **)this + 9,
                   0LL,
                   0LL);
    v23 = SyncObject;
    if ( SyncObject < 0 )
    {
LABEL_13:
      v40 = WdLogNewEntry5_WdWarning(v21, v20, v22);
      *(_QWORD *)(v40 + 24) = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      *(_QWORD *)(v40 + 32) = v23;
      WdLogEvent5_WdWarning(v40);
LABEL_14:
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v71);
      return v23;
    }
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v71);
    v41 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 40LL);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v41 + 208));
    v42 = v76;
    v43 = (v76 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v43 < *(_DWORD *)(v41 + 256) )
    {
      v44 = *(_QWORD *)(v41 + 240);
      if ( ((v76 >> 25) & 0x60) == (*(_BYTE *)(v44 + 16 * v43 + 8) & 0x60)
        && (*(_DWORD *)(v44 + 16 * v43 + 8) & 0x1F) != 0 )
      {
        if ( (*(_DWORD *)(v44 + 16 * (((unsigned __int64)v76 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
        {
          v45 = WdLogNewEntry5_WdAssertion((v76 >> 25) & 0x60, v44);
          *(_QWORD *)(v45 + 24) = 222LL;
          WdLogEvent5_WdAssertion(v45);
          v44 = *(_QWORD *)(v41 + 240);
        }
        *(_DWORD *)(v44 + 16 * (((unsigned __int64)v42 >> 6) & 0xFFFFFF) + 8) &= ~0x2000u;
      }
    }
    *(_QWORD *)(v41 + 216) = 0LL;
    ExReleasePushLockExclusiveEx(v41 + 208, 0LL);
    KeLeaveCriticalRegion();
    PrivateDriverDataSize = a2->PrivateDriverDataSize;
    v47 = *((_QWORD *)this + 2);
    Value = a2->Flags.Value;
    *(_QWORD *)(&v73.hHwQueueProgressFence + 1) = 0LL;
    HIDWORD(v73.HwQueueProgressFenceCPUVirtualAddress) = 0;
    v73.hHwQueue = this;
    v73.Flags.Value = Value;
    v73.pPrivateDriverData = a3;
    v73.PrivateDriverDataSize = PrivateDriverDataSize;
    v73.hHwQueueProgressFence = v42;
    if ( (*(_DWORD *)(v47 + 420) & 4) != 0 || *(_BYTE *)(*(_QWORD *)(v47 + 16) + 1866LL) )
      v73.Flags.Value = Value | 1;
    v50 = (void *)*((_QWORD *)DXGSYNCOBJECT::GetMonitoredFenceStorage(
                                *(DXGSYNCOBJECT **)(*((_QWORD *)this + 6) + 32LL),
                                v47)
                  + 1);
    v51 = v75[3];
    *((_QWORD *)this + 7) = v50;
    v73.HwQueueProgressFenceGPUVirtualAddress = v51;
    *((_QWORD *)this + 8) = v51;
    LODWORD(v51) = a2->Flags.0;
    v73.HwQueueProgressFenceCPUVirtualAddress = v50;
    v52 = *((_QWORD *)this + 2);
    if ( (v51 & 8) == 0 )
    {
      v60 = ADAPTER_RENDER::DdiCreateHwQueue(
              *(ADAPTER_RENDER **)(*(_QWORD *)(v52 + 16) + 16LL),
              *(void **)(v52 + 184),
              &v73);
      v23 = v60;
      if ( v60 >= 0 )
      {
        hHwQueue = v73.hHwQueue;
        *((_QWORD *)this + 4) = v73.hHwQueue;
      }
      if ( v60 == -1073741822 )
      {
        *((_QWORD *)this + 4) = 153LL;
      }
      else if ( v60 < 0 )
      {
        v63 = WdLogNewEntry5_WdError(hHwQueue, v61);
        *(_QWORD *)(v63 + 24) = v23;
        WdLogEvent5_WdError(v63);
        return v23;
      }
      goto LABEL_28;
    }
    if ( (*(_DWORD *)(v52 + 420) & 0x20) == 0 )
    {
      v53 = WdLogNewEntry5_WdError(v52, v49);
      *(_QWORD *)(v53 + 24) = 344LL;
      WdLogEvent5_WdError(v53);
      return -1073741811;
    }
    result = CheckNoKmdAccessPrivateData(v73.PrivateDriverDataSize, (_DWORD *)v73.pPrivateDriverData, 0xFF000005);
    if ( result >= 0 )
    {
LABEL_28:
      v54 = (_QWORD *)((char *)this + 40);
      v55 = (*(__int64 (__fastcall **)(DXGHWQUEUE *, _QWORD, struct _D3DKMT_CREATEHWQUEUE *, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 616LL) + 8LL) + 232LL))(
              this,
              *(_QWORD *)(*((_QWORD *)this + 2) + 296LL),
              a2,
              (char *)this + 40);
      v23 = v55;
      if ( v55 >= 0 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX(
          (DXGAUTOMUTEX *)v71,
          (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 6) + 32LL) + 32LL),
          0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v71);
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                             *(DXGSYNCOBJECT **)(*((_QWORD *)this + 6) + 32LL),
                             *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 6) + 16LL) + 16LL));
        (*(void (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 616LL)
                                                                                          + 8LL)
                                                                              + 272LL))(
          *v54,
          VidSchSyncObject,
          1LL);
        if ( (_BYTE)v72 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v71, v65);
        DXGAUTOMUTEX::DXGAUTOMUTEX(
          (DXGAUTOMUTEX *)v71,
          (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 32LL),
          0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v71);
        v66 = DXGSYNCOBJECT::GetVidSchSyncObject(
                *(DXGSYNCOBJECT **)(*((_QWORD *)this + 9) + 32LL),
                *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 9) + 16LL) + 16LL));
        (*(void (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 616LL)
                                                                                          + 8LL)
                                                                              + 272LL))(
          *v54,
          v66,
          2LL);
        if ( (_BYTE)v72 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v71, v67);
        v68 = DXGPROCESS::AllocHandleSafe(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 40LL),
                (__int64)this,
                0xFu);
        *((_DWORD *)this + 6) = v68;
        if ( v68 )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0ppp_EtwWriteTransfer(v68, &EventCreateHwQueue, v70, *((_QWORD *)this + 2), v68, this);
          return v23;
        }
        v59 = WdLogNewEntry5_WdWarning(0LL, v69, v70);
        v23 = -1073741801LL;
        *(_QWORD *)(v59 + 24) = this;
      }
      else
      {
        v59 = WdLogNewEntry5_WdWarning(v57, v56, v58);
        *(_QWORD *)(v59 + 24) = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      }
      *(_QWORD *)(v59 + 32) = v23;
      WdLogEvent5_WdWarning(v59);
      return v23;
    }
  }
  return result;
}
