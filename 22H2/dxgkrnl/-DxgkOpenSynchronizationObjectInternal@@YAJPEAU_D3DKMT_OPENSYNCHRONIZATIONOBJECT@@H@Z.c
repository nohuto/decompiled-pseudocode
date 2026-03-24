/*
 * XREFs of ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0171148
 * Callers:
 *     ?DxgkCddOpenSynchronizationObject@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@@Z @ 0x1C0171130 (-DxgkCddOpenSynchronizationObject@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@@Z.c)
 *     DxgkOpenSynchronizationObject @ 0x1C0294130 (DxgkOpenSynchronizationObject.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0005090 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0008BB0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0008C04 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0047124 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0124588 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0171360 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 */

__int64 __fastcall DxgkOpenSynchronizationObjectInternal(
        struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *a1,
        int a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  ULONG64 v10; // rcx
  struct DXGPROCESS *Current; // rsi
  D3DKMT_HANDLE hSharedHandle; // r14d
  PERESOURCE *Global; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  DXGGLOBAL *v17; // rax
  __int64 v18; // rdx
  ULONG64 v19; // rcx
  __int64 v20; // r8
  int v21; // r14d
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *v34; // rax
  _DWORD *p_hSyncObject; // rdx
  PERESOURCE *v36; // rax
  struct DXGADAPTERSYNCOBJECT *v37[2]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v38[16]; // [rsp+40h] [rbp-48h] BYREF
  int v39; // [rsp+50h] [rbp-38h] BYREF
  __int64 v40; // [rsp+58h] [rbp-30h]
  char v41; // [rsp+60h] [rbp-28h]
  unsigned int v42; // [rsp+A0h] [rbp+18h] BYREF
  struct DXGSYNCOBJECT *v43; // [rsp+A8h] [rbp+20h] BYREF

  v39 = -1;
  v40 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v41 = 1;
    v39 = 2050;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2050);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v39, 2050LL);
  Current = DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  v37[1] = Current;
  if ( Current )
  {
    if ( a2 )
    {
      v10 = MmUserProbeAddress;
      v34 = a1;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        v34 = (struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
      hSharedHandle = v34->hSharedHandle;
    }
    else
    {
      hSharedHandle = a1->hSharedHandle;
    }
    v43 = 0LL;
    v37[0] = 0LL;
    v42 = 0;
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v10, v9);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v38, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v38, v14);
    v17 = DXGGLOBAL::GetGlobal(v16, v15);
    v21 = DXGGLOBAL::OpenSyncObject(v17, hSharedHandle, &v43, &v42, v37);
    if ( v38[8] )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v38);
    if ( v21 < 0 )
    {
      if ( v43 )
      {
        v36 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v19, v18);
        DXGGLOBAL::DestroySyncObject(v36, v43, v42);
      }
    }
    else
    {
      if ( a2 )
      {
        p_hSyncObject = &a1->hSyncObject;
        v19 = MmUserProbeAddress;
        if ( (unsigned __int64)&a1->hSyncObject >= MmUserProbeAddress )
          p_hSyncObject = (_DWORD *)MmUserProbeAddress;
        *p_hSyncObject = v42;
      }
      else
      {
        a1->hSyncObject = v42;
      }
      if ( bTracingEnabled )
      {
        v22 = v37[0] ? *((_QWORD *)v37[0] + 4) : 0LL;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0ppp_EtwWriteTransfer(v19, &EventOpenSyncObject, v20, v22, v42, 0LL);
      }
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
      v23 = (v42 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v23 < *((_DWORD *)Current + 64) )
      {
        v24 = *((_QWORD *)Current + 30);
        if ( ((v42 >> 25) & 0x60) == (*(_BYTE *)(v24 + 16 * v23 + 8) & 0x60)
          && (*(_DWORD *)(v24 + 16 * v23 + 8) & 0x1F) != 0 )
        {
          v25 = 2 * (((unsigned __int64)v42 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v24 + 16 * (((unsigned __int64)v42 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            v26 = WdLogNewEntry5_WdAssertion((v42 >> 25) & 0x60, v24);
            *(_QWORD *)(v26 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v26);
            v24 = *((_QWORD *)Current + 30);
          }
          *(_DWORD *)(v24 + 8 * v25 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v18);
    if ( v41 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v39);
    }
    return (unsigned int)v21;
  }
  else
  {
    v30 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v30 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v30);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v31);
    if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v39);
    return 3221225485LL;
  }
}
