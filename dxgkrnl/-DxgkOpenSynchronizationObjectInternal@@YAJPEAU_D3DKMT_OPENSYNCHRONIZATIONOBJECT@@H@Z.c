/*
 * XREFs of ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0166A88
 * Callers:
 *     ?DxgkCddOpenSynchronizationObject@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@@Z @ 0x1C0166A70 (-DxgkCddOpenSynchronizationObject@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@@Z.c)
 *     DxgkOpenSynchronizationObject @ 0x1C034E9B0 (DxgkOpenSynchronizationObject.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000717C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007344 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0018D48 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0051A38 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0166CCC (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0186E18 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkOpenSynchronizationObjectInternal(
        struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *a1,
        int a2,
        __int64 a3)
{
  struct DXGPROCESS *Current; // r14
  D3DKMT_HANDLE hSharedHandle; // esi
  struct DXGGLOBAL *Global; // rax
  DXGGLOBAL *v8; // rax
  int v9; // esi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r8
  struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *v20; // rax
  _DWORD *p_hSyncObject; // rdx
  DXGGLOBAL *v22; // rax
  struct DXGADAPTERSYNCOBJECT *v23[2]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v24[16]; // [rsp+60h] [rbp-48h] BYREF
  int v25; // [rsp+70h] [rbp-38h] BYREF
  __int64 v26; // [rsp+78h] [rbp-30h]
  char v27; // [rsp+80h] [rbp-28h]
  unsigned int v28; // [rsp+C0h] [rbp+18h] BYREF
  struct DXGSYNCOBJECT *v29; // [rsp+C8h] [rbp+20h] BYREF

  v25 = -1;
  v26 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v27 = 1;
    v25 = 2050;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2050);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 2050);
  Current = DXGPROCESS::GetCurrent();
  v23[1] = Current;
  if ( Current )
  {
    if ( a2 )
    {
      v20 = a1;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        v20 = (struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
      hSharedHandle = v20->hSharedHandle;
    }
    else
    {
      hSharedHandle = a1->hSharedHandle;
    }
    v29 = 0LL;
    v23[0] = 0LL;
    v28 = 0;
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v24, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v24);
    v8 = DXGGLOBAL::GetGlobal();
    v9 = DXGGLOBAL::OpenSyncObject(v8, hSharedHandle, &v29, &v28, v23);
    if ( v24[8] )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v24);
    if ( v9 < 0 )
    {
      if ( v29 )
      {
        v22 = DXGGLOBAL::GetGlobal();
        DXGGLOBAL::DestroySyncObject(v22, v29, v28);
      }
    }
    else
    {
      if ( a2 )
      {
        p_hSyncObject = &a1->hSyncObject;
        if ( (unsigned __int64)&a1->hSyncObject >= MmUserProbeAddress )
          p_hSyncObject = (_DWORD *)MmUserProbeAddress;
        *p_hSyncObject = v28;
      }
      else
      {
        a1->hSyncObject = v28;
      }
      if ( bTracingEnabled )
      {
        v11 = v23[0] ? *((_QWORD *)v23[0] + 4) : 0LL;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ppp_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            &EventOpenSyncObject,
            v10,
            v11,
            v28,
            0LL);
      }
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
      v12 = (v28 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v12 < *((_DWORD *)Current + 74) )
      {
        v13 = *((_QWORD *)Current + 35);
        if ( ((v28 >> 25) & 0x60) == (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60)
          && (*(_DWORD *)(v13 + 16 * v12 + 8) & 0x1F) != 0 )
        {
          v17 = 2 * (((unsigned __int64)v28 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v13 + 16 * (((unsigned __int64)v28 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
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
          *(_DWORD *)(*((_QWORD *)Current + 35) + 8 * v17 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v25);
    }
    return (unsigned int)v9;
  }
  else
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 )
    {
      LOBYTE(v18) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v25);
    }
    return 3221225485LL;
  }
}
