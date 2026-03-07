void __fastcall DXGADAPTER::Destroy(DXGADAPTER *this, struct _LUID *a2)
{
  int v2; // eax
  ADAPTER_DISPLAY **v3; // rbx
  int v4; // esi
  DXGGLOBAL *Global; // rax
  ADAPTER_RENDER *v7; // rcx
  void (__fastcall *v8)(_QWORD); // rax
  void (__fastcall *v9)(_QWORD); // rax
  __int64 v10; // r9
  int updated; // eax
  __int64 v12; // rbx
  unsigned int v13; // edx
  struct _LUID *v14; // rdx
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v16; // rcx
  unsigned int v17; // r9d
  __int64 v18; // rcx
  DXGGLOBAL *v19; // rax
  int v20; // [rsp+C0h] [rbp-68h]
  int v21; // [rsp+D8h] [rbp-50h]
  _BYTE v22[16]; // [rsp+100h] [rbp-28h] BYREF
  unsigned int v23; // [rsp+130h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 109);
  v3 = (ADAPTER_DISPLAY **)((char *)this + 2920);
  v4 = *((_DWORD *)this + 418);
  *((_BYTE *)this + 208) = 1;
  if ( (v2 & 0x10) != 0 && !*v3 )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v22);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
    if ( *((DXGADAPTER **)DXGGLOBAL::GetGlobal() + 119) == this )
    {
      Global = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::SetWarpAdapter(Global, 0LL);
      DXGADAPTER::ReleaseReference(this);
    }
    if ( v22[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
  }
  if ( *v3 )
    ADAPTER_DISPLAY::Destroy(*v3);
  v7 = (ADAPTER_RENDER *)*((_QWORD *)this + 366);
  if ( v7 )
    ADAPTER_RENDER::Destroy(v7);
  v8 = (void (__fastcall *)(_QWORD))*((_QWORD *)this + 242);
  if ( v8 )
  {
    v8(*((_QWORD *)this + 240));
    memset((char *)this + 1912, 0, 0xB8uLL);
  }
  v9 = (void (__fastcall *)(_QWORD))*((_QWORD *)this + 266);
  if ( v9 )
  {
    v9(*((_QWORD *)this + 264));
    memset((char *)this + 2104, 0, 0x70uLL);
  }
  if ( *((_BYTE *)this + 4616) )
  {
    v23 = 0;
    if ( DXGADAPTER::IsAdapterSessionized(this, a2, &v23, 0LL) )
      updated = ZwUpdateWnfStateData(&WNF_DX_REMOTE_ADAPTER_STOP, 0LL, 0LL, v10, &v23, 0, 0);
    else
      updated = ZwUpdateWnfStateData(&WNF_DX_CONSOLE_ADAPTER_STOP, 0LL, 0LL, v10, 0LL, 0, 0);
    if ( updated < 0 )
    {
      v12 = updated;
      WdLogSingleEntry2(2LL, this, updated);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to send Stop WNF for Adapter=0x%I64x with Status=0x%I64x",
        (__int64)this,
        v12,
        0LL,
        0LL,
        0LL);
    }
    *((_BYTE *)this + 4616) = 0;
  }
  DpiFreeAdapterInfo((char *)this + 1568);
  DXGADAPTER::DestroyPhysicalAdapterData(this);
  memset((char *)this + 280, 0, 0x508uLL);
  memset((char *)this + 1568, 0, 0x158uLL);
  if ( *((_BYTE *)this + 209) )
  {
    v13 = *((_DWORD *)this + 1140);
    if ( v13 )
    {
      DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCloseAdapter((DXGADAPTER *)((char *)this + 4472), v13);
      *((_DWORD *)this + 1140) = 0;
    }
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendAdapterStop((DXGADAPTER *)((char *)this + 4472));
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXGADAPTER *)((char *)this + 4472));
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 442) >= 0x16u )
      DXGADAPTER::DeleteRegistryKeys(this);
  }
  v14 = (struct _LUID *)*((unsigned int *)this + 60);
  if ( (_DWORD)v14 != -1 )
  {
    DXGGLOBAL::ReleaseAdapterOrdinal(*((DXGGLOBAL **)this + 2), (unsigned int)v14);
    *((_DWORD *)this + 60) = -1;
  }
  if ( *((_DWORD *)this + 61) != -1 )
  {
    v23 = 0;
    DXGADAPTER::IsAdapterSessionized(this, v14, &v23, 0LL);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       *(DXGSESSIONMGR **)(*((_QWORD *)this + 2) + 944LL),
                                       v23);
    if ( SessionDataForSpecifiedSession )
    {
      DXGSESSIONDATA::ReleaseSessionAdapterOrdinal(SessionDataForSpecifiedSession, *((_DWORD *)this + 61));
      *((_DWORD *)this + 61) = -1;
    }
  }
  v16 = *((_QWORD *)this + 27);
  if ( v16 )
  {
    DpiReportAdapter(v16, (__int64)this);
    if ( bTracingEnabled )
    {
      v17 = *((_DWORD *)this + 567);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      {
        v18 = v17 >> 14;
        LOBYTE(v18) = v18 & 7;
        McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer(
          v18,
          &EventDestroyAdapter,
          v17 >> 31,
          *((_QWORD *)this + 27),
          (char)this,
          v4,
          *((_QWORD *)this + 277),
          *((_DWORD *)this + 556),
          *((_QWORD *)this + 279),
          *((_DWORD *)this + 560),
          *((_DWORD *)this + 561),
          *((_DWORD *)this + 563),
          *((_DWORD *)this + 564),
          *((_DWORD *)this + 565),
          *((_DWORD *)this + 568),
          *((_DWORD *)this + 562),
          *((_DWORD *)this + 566),
          v17,
          (v17 >> 10) & 0xF,
          v18,
          (v17 >> 17) & 7,
          (v17 & 0x80000000) != 0,
          *((_DWORD *)this + 569),
          *((_DWORD *)this + 570),
          v20,
          *((_DWORD *)this + 572),
          *((_DWORD *)this + 573),
          v21,
          0,
          0,
          0,
          0);
      }
    }
    DXGPUSHLOCK::AcquireExclusive((DXGADAPTER *)((char *)this + 72));
    *((_DWORD *)this + 40) = 0;
    *((_QWORD *)this + 10) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( *((_BYTE *)this + 209) )
  {
    v19 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::SetVirtualRenderAdapter(v19, 0LL);
    if ( *((_BYTE *)this + 211) )
      DXGVAILOBJECT::NotifyVailAdapter(0);
  }
}
