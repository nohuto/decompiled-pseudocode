/*
 * XREFs of ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C0314F30
 * Callers:
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C0312040 (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 * Callees:
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C0007090 (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000717C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007344 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0018CC0 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0018D48 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0051A38 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C0186BD8 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0187E48 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?DdiCreateHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z @ 0x1C02C05A4 (-DdiCreateHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z.c)
 *     ?InitializeForUserModeSubmission@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C0315730 (-InitializeForUserModeSubmission@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C0315A34 (-InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x1C031E10C (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 */

int __fastcall DXGHWQUEUE::Initialize(DXGHWQUEUE *this, struct _D3DKMT_CREATEHWQUEUE *a2, void *a3)
{
  __int64 v6; // rdx
  D3DDDI_CREATEHWQUEUEFLAGS *p_Flags; // r14
  int result; // eax
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rax
  struct DXGGLOBAL *v20; // rax
  int SyncObject; // eax
  __int64 v22; // r12
  __int64 v23; // rsi
  D3DKMT_HANDLE v24; // r15d
  __int64 v25; // rax
  __int64 v26; // r9
  unsigned __int64 v27; // rsi
  __int64 v28; // rdx
  UINT Value; // ecx
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // rax
  __int64 v31; // rdx
  void *v32; // rcx
  int v33; // eax
  _QWORD *v34; // r14
  int v35; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  struct _VIDSCH_SYNC_OBJECT *v37; // rax
  unsigned int v38; // eax
  __int64 v39; // r8
  _BYTE v40[8]; // [rsp+60h] [rbp-A0h] BYREF
  char v41; // [rsp+68h] [rbp-98h]
  _DXGKARG_CREATEHWQUEUE v42; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v43[10]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v44[16]; // [rsp+F0h] [rbp-10h] BYREF
  D3DKMT_HANDLE v45; // [rsp+180h] [rbp+80h] BYREF
  void *v46; // [rsp+190h] [rbp+90h]
  __int64 v47; // [rsp+198h] [rbp+98h]

  v46 = a3;
  memset(v44, 0, 0x50uLL);
  v6 = *((_QWORD *)this + 2);
  p_Flags = &a2->Flags;
  LODWORD(v44[0]) = 5;
  v45 = 0;
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL) + 16LL) + 209LL) )
    goto LABEL_5;
  if ( (p_Flags->Value & 0x10) != 0 )
  {
    WdLogSingleEntry2(2LL, v6, -1073741637LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGCONTEXT 0x%I64x: User mode queues not yet supported on para-v, returning 0x%I64x",
      *((_QWORD *)this + 2),
      -1073741637LL,
      0LL,
      0LL,
      0LL);
    return -1073741637;
  }
  result = DXGHWQUEUE::InitializeOnHost(this, a2, a3);
  if ( result >= 0 )
  {
LABEL_5:
    if ( (p_Flags->Value & 0x10) != 0 )
      return DXGHWQUEUE::InitializeForUserModeSubmission(this, a2, a3);
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v40, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v40);
    v10 = DXGGLOBAL::GetGlobal();
    v11 = (int)DXGGLOBAL::CreateSyncObject(
                 (__int64)v10,
                 *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
                 *(struct DXGDEVICE **)(*((_QWORD *)this + 2) + 16LL),
                 1 << *(_DWORD *)(*((_QWORD *)this + 2) + 400LL),
                 (__int64)v44,
                 3u,
                 0,
                 0LL,
                 0LL,
                 (struct DXGDEVICESYNCOBJECT **)this + 6,
                 &v45,
                 0LL);
    v12 = *((_QWORD *)this + 2);
    if ( (int)v11 < 0 )
    {
      v13 = *(_QWORD *)(v12 + 16);
LABEL_19:
      WdLogSingleEntry2(3LL, v13, v11);
LABEL_20:
      if ( v41 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v40);
      return v11;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL) + 16LL) + 209LL) )
    {
      v14 = v45;
      *(_DWORD *)(*((_QWORD *)this + 6) + 44LL) = a2->hHwQueueProgressFence;
      a2->hHwQueueProgressFence = v14;
      v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 40LL);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v15 + 248));
      v16 = ((unsigned int)v14 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v16 < *(_DWORD *)(v15 + 296) )
      {
        v17 = *(_QWORD *)(v15 + 280);
        if ( (((unsigned int)v14 >> 25) & 0x60) == (*(_BYTE *)(v17 + 16 * v16 + 8) & 0x60)
          && (*(_DWORD *)(v17 + 16 * v16 + 8) & 0x1F) != 0 )
        {
          v18 = 2 * ((v14 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v17 + 8 * v18 + 8) & 0x2000) == 0 )
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
          *(_DWORD *)(*(_QWORD *)(v15 + 280) + 8 * v18 + 8) &= ~0x2000u;
        }
      }
      *(_QWORD *)(v15 + 256) = 0LL;
      ExReleasePushLockExclusiveEx(v15 + 248, 0LL);
      KeLeaveCriticalRegion();
      LODWORD(v11) = 0;
      goto LABEL_20;
    }
    memset(v43, 0, sizeof(v43));
    v19 = *((_QWORD *)this + 10);
    HIDWORD(v43[0]) |= 0x80u;
    v43[1] = v19;
    LODWORD(v43[0]) = 5;
    v20 = DXGGLOBAL::GetGlobal();
    SyncObject = DXGGLOBAL::CreateSyncObject(
                   (__int64)v20,
                   *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
                   *(struct DXGDEVICE **)(*((_QWORD *)this + 2) + 16LL),
                   1 << *(_DWORD *)(*((_QWORD *)this + 2) + 400LL),
                   (__int64)v43,
                   0x10u,
                   0,
                   0LL,
                   0LL,
                   (struct DXGDEVICESYNCOBJECT **)this + 9,
                   0LL,
                   0LL);
    v11 = SyncObject;
    if ( SyncObject < 0 )
    {
      v13 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      goto LABEL_19;
    }
    if ( v41 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v40);
    v22 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 40LL);
    v23 = v22 + 248;
    v47 = v22 + 248;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v22 + 248));
    v24 = v45;
    v25 = (v45 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v25 < *(_DWORD *)(v22 + 296) )
    {
      v26 = *(_QWORD *)(v22 + 280);
      if ( ((v45 >> 25) & 0x60) == (*(_BYTE *)(v26 + 16 * v25 + 8) & 0x60)
        && (*(_DWORD *)(v26 + 16 * v25 + 8) & 0x1F) != 0 )
      {
        v27 = 2 * (((unsigned __int64)v45 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v26 + 16 * (((unsigned __int64)v45 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
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
          v24 = v45;
        }
        *(_DWORD *)(*(_QWORD *)(v22 + 280) + 8 * v27 + 8) &= ~0x2000u;
        v23 = v47;
      }
    }
    *(_QWORD *)(v23 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v23, 0LL);
    KeLeaveCriticalRegion();
    v28 = *((_QWORD *)this + 2);
    Value = p_Flags->Value;
    v42.pPrivateDriverData = v46;
    v42.PrivateDriverDataSize = a2->PrivateDriverDataSize;
    *(_QWORD *)(&v42.hHwQueueProgressFence + 1) = 0LL;
    HIDWORD(v42.HwQueueProgressFenceCPUVirtualAddress) = 0;
    v42.hHwQueue = this;
    v42.Flags.Value = Value;
    v42.hHwQueueProgressFence = v24;
    if ( (*(_DWORD *)(v28 + 404) & 4) != 0 || *(_BYTE *)(*(_QWORD *)(v28 + 16) + 1898LL) )
      v42.Flags.Value = Value | 1;
    MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(*(DXGSYNCOBJECT **)(*((_QWORD *)this + 6) + 32LL));
    v31 = *((_QWORD *)this + 2);
    v32 = (void *)*((_QWORD *)MonitoredFenceStorage + 1);
    v42.HwQueueProgressFenceGPUVirtualAddress = v44[3];
    *((_QWORD *)this + 8) = v44[3];
    *((_QWORD *)this + 7) = v32;
    LODWORD(MonitoredFenceStorage) = (D3DDDI_CREATEHWQUEUEFLAGS)p_Flags->0;
    v42.HwQueueProgressFenceCPUVirtualAddress = v32;
    if ( ((unsigned __int8)MonitoredFenceStorage & 8) == 0 )
    {
      v33 = ADAPTER_RENDER::DdiCreateHwQueue(
              *(ADAPTER_RENDER **)(*(_QWORD *)(v31 + 16) + 16LL),
              *(void **)(v31 + 184),
              &v42);
      v11 = v33;
      if ( v33 < 0 )
      {
        if ( v33 != -1073741822 )
        {
          WdLogSingleEntry1(2LL, v33);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"DdiCreateHwQueue() failed with status 0x%I64d",
            v11,
            0LL,
            0LL,
            0LL,
            0LL);
          return v11;
        }
        *((_QWORD *)this + 4) = 153LL;
      }
      else
      {
        *((_QWORD *)this + 4) = v42.hHwQueue;
      }
LABEL_42:
      v34 = (_QWORD *)((char *)this + 40);
      v35 = (*(__int64 (__fastcall **)(DXGHWQUEUE *, _QWORD, struct _D3DKMT_CREATEHWQUEUE *, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 736LL) + 8LL) + 232LL))(
              this,
              *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
              a2,
              (char *)this + 40);
      LODWORD(v11) = v35;
      if ( v35 >= 0 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX(
          (DXGAUTOMUTEX *)v40,
          (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 6) + 32LL) + 32LL),
          0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v40);
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                             *(DXGSYNCOBJECT **)(*((_QWORD *)this + 6) + 32LL),
                             *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 6) + 16LL) + 16LL));
        (*(void (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 736LL)
                                                                                          + 8LL)
                                                                              + 272LL))(
          *v34,
          VidSchSyncObject,
          1LL);
        if ( v41 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v40);
        DXGAUTOMUTEX::DXGAUTOMUTEX(
          (DXGAUTOMUTEX *)v40,
          (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 32LL),
          0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v40);
        v37 = DXGSYNCOBJECT::GetVidSchSyncObject(
                *(DXGSYNCOBJECT **)(*((_QWORD *)this + 9) + 32LL),
                *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 9) + 16LL) + 16LL));
        (*(void (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 736LL)
                                                                                          + 8LL)
                                                                              + 272LL))(
          *v34,
          v37,
          2LL);
        if ( v41 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v40);
        v38 = DXGPROCESS::AllocHandleSafe(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 40LL),
                (__int64)this,
                0xFu);
        *((_DWORD *)this + 6) = v38;
        if ( v38 )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            McTemplateK0ppp_EtwWriteTransfer(
              (REGHANDLE *)&DxgkControlGuid_Context,
              &EventCreateHwQueue,
              v39,
              *((_QWORD *)this + 2),
              v38,
              this);
        }
        else
        {
          LODWORD(v11) = -1073741801;
          WdLogSingleEntry2(3LL, this, -1073741801LL);
        }
      }
      else
      {
        WdLogSingleEntry2(3LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), v35);
      }
      return v11;
    }
    if ( (*(_DWORD *)(v31 + 404) & 0x20) == 0 )
    {
      WdLogSingleEntry1(2LL, 505LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"The HW queue must specify NoKmdAccess flag",
        505LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return -1073741811;
    }
    result = CheckNoKmdAccessPrivateData(v42.PrivateDriverDataSize, v42.pPrivateDriverData, 0xFF000005);
    if ( result >= 0 )
      goto LABEL_42;
  }
  return result;
}
