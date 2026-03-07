void __fastcall DXGADAPTER::Stop(DXGADAPTER *this, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // r14d
  char v4; // r12
  struct _LUID v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // edi
  struct _LUID *v12; // rdx
  __int64 v13; // rcx
  KSPIN_LOCK *Global; // rax
  DXGGLOBAL *v15; // rax
  ADAPTER_DISPLAY *v16; // rcx
  ADAPTER_RENDER *v17; // rcx
  BOOLEAN v18; // di
  BOOLEAN v19; // al
  struct DXGGLOBAL *v20; // rax
  struct DXGGLOBAL *v21; // rax
  struct DXGGLOBAL *v22; // rax
  int v23; // [rsp+B0h] [rbp-80h] BYREF
  unsigned int v24; // [rsp+B4h] [rbp-7Ch] BYREF
  int v25; // [rsp+B8h] [rbp-78h] BYREF
  int v26; // [rsp+BCh] [rbp-74h] BYREF
  int v27; // [rsp+C0h] [rbp-70h] BYREF
  int v28; // [rsp+C4h] [rbp-6Ch] BYREF
  int v29; // [rsp+C8h] [rbp-68h] BYREF
  int v30; // [rsp+CCh] [rbp-64h] BYREF
  int v31; // [rsp+D0h] [rbp-60h] BYREF
  int v32; // [rsp+D4h] [rbp-5Ch] BYREF
  int v33; // [rsp+D8h] [rbp-58h] BYREF
  int v34; // [rsp+DCh] [rbp-54h] BYREF
  __int64 v35; // [rsp+E0h] [rbp-50h] BYREF
  void *v36; // [rsp+E8h] [rbp-48h] BYREF
  struct _LUID v37; // [rsp+F0h] [rbp-40h] BYREF
  unsigned __int16 *v38; // [rsp+F8h] [rbp-38h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+100h] [rbp-30h] BYREF
  unsigned __int64 v40; // [rsp+108h] [rbp-28h] BYREF
  struct _LUID v41; // [rsp+110h] [rbp-20h] BYREF
  struct _LUID v42; // [rsp+160h] [rbp+30h] BYREF
  __int16 v43; // [rsp+170h] [rbp+40h] BYREF
  unsigned int v44; // [rsp+178h] [rbp+48h] BYREF

  v3 = a2;
  v4 = 0;
  WdLogSingleEntry1(4LL, this);
  DXGADAPTER::GetAdapterType(this, &v44);
  v42 = *(struct _LUID *)((char *)this + 404);
  v7 = v42;
  v41 = v42;
  if ( (unsigned int)dword_1C013A918 > 5 && tlgKeywordOn((__int64)&dword_1C013A918, 0x400000000800LL) )
  {
    v24 = v44;
    v23 = v3;
    v26 = (v44 >> 1) & 1;
    v25 = v9;
    v28 = (v44 >> 2) & 1;
    v29 = *((unsigned __int8 *)this + 2764);
    v30 = *((unsigned __int8 *)this + 2759);
    v43 = *((_WORD *)this + 1410);
    v35 = *((_QWORD *)this + 228);
    v36 = (void *)*((_QWORD *)this + 227);
    v37 = v42;
    v31 = *((_DWORD *)this + 106);
    v32 = *((_DWORD *)this + 105);
    v33 = *((_DWORD *)this + 104);
    v34 = *((_DWORD *)this + 103);
    v38 = (unsigned __int16 *)*((_QWORD *)this + 218);
    v27 = v44 & 1;
    LOWORD(v42.LowPart) = 1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v44 & 1,
      byte_1C009DBA8,
      v8,
      v9,
      (__int64)&v42,
      &v38,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v37,
      &v36,
      (__int64)&v35,
      (__int64)&v43,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23);
  }
  KeSetEvent((PRKEVENT)((char *)this + 2896), 0, 0);
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    WdLogSingleEntry1(1LL, 9291LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!IsCoreResourceExclusiveOwner()", 9291LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_DWORD *)this + 50) = 5;
  if ( !*((_BYTE *)this + 209) )
  {
    v10 = *((_QWORD *)this + 366);
    if ( v10 )
    {
      if ( (_BYTE)v3 )
      {
        *(_BYTE *)(v10 + 1025) = 1;
        ADAPTER_RENDER::ResumeVidMmWorkerThread(*((PERESOURCE ***)this + 366), 1, 1);
      }
    }
  }
  v11 = 0;
  while ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(&qword_1C013C070, 0LL) )
  {
    Interval.QuadPart = -10000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    if ( (unsigned int)++v11 >= 0xA )
    {
      WdLogSingleEntry5(0LL, 275LL, 48LL, qword_1C013B400, 0LL, 0LL);
      break;
    }
  }
  v40 = 0LL;
  DXGADAPTER::AcquireLocksForStop(this, &v40);
  if ( !*((_BYTE *)this + 209) )
  {
    v13 = *((_QWORD *)this + 366);
    if ( v13 )
    {
      ADAPTER_RENDER::FlushScheduler(v13, 5u, 0xFFFFFFFF, 0);
      ADAPTER_RENDER::SuspendVidMmWorkerThread(*((_QWORD *)this + 366), 1u, 0);
      ADAPTER_RENDER::ResumeVidMmWorkerThread(*((PERESOURCE ***)this + 366), 0, 1);
    }
    if ( *((_BYTE *)this + 206) )
    {
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      DXGGLOBAL::SetSchedulerCrossAdapterData(Global, 0LL);
    }
    if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 5680LL) )
    {
      v15 = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::NotifySharedPowerGraphicsRemoving(v15, this);
    }
  }
  v16 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 365);
  if ( v16 )
    ADAPTER_DISPLAY::Stop(v16, a3);
  v17 = (ADAPTER_RENDER *)*((_QWORD *)this + 366);
  if ( v17 )
  {
    v4 = 1;
    ADAPTER_RENDER::Stop(v17, v3, a3);
  }
  if ( *((_QWORD *)this + 438) )
  {
    *((_BYTE *)this + 3462) = 1;
    v18 = KeCancelTimer((PKTIMER)((char *)this + 3576));
    v19 = KeCancelTimer((PKTIMER)((char *)this + 4304));
    if ( !v18 || !v19 )
      KeFlushQueuedDpcs();
    if ( !KeCancelTimer((PKTIMER)((char *)this + 3576)) )
      KeFlushQueuedDpcs();
    PoUnregisterPowerSettingCallback(*((PVOID *)this + 438));
    *((_QWORD *)this + 438) = 0LL;
  }
  if ( a3 )
  {
    *((_DWORD *)this + 50) = 4;
  }
  else
  {
    if ( *((_BYTE *)this + 3465)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 40LL) + 28LL) >= 0x3008u )
    {
      DXGADAPTER::DdiPowerRuntimeControlRequest(this, &GUID_DXGKDDI_POWER_MANAGEMENT_STOPPED, 0LL, 0LL, 0LL, 0LL, 0LL);
      *((_BYTE *)this + 3465) = 0;
    }
    DXGADAPTER::Destroy(this, v12);
    *((_DWORD *)this + 50) = 2;
    DXGADAPTER::ReleaseReference(this);
  }
  *((_QWORD *)this + 217) = 0LL;
  *((_QWORD *)this + 227) = 0LL;
  DXGADAPTER::ReleaseCoreResource((PERESOURCE *)this, 0LL);
  DXGADAPTER::ReleaseReference(this);
  *((_QWORD *)this + 18) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 136, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTER::DestroySerializeFStateTransitWorker(this);
  if ( v4 && !*((_BYTE *)this + 2833) )
  {
    v20 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)v20,
      (__int64 (__fastcall *)(_QWORD *, __int64))DxgkCheckPairedRenderAdapterForStopCallBack,
      (__int64)this,
      1);
  }
  v21 = DXGGLOBAL::GetGlobal();
  REMOTEMONITORMAPPING::Clear((struct DXGGLOBAL *)((char *)v21 + 304832), &v41);
  v22 = DXGGLOBAL::GetGlobal();
  HOSTVMMONITORMAPPING::RemoveMapping((struct DXGGLOBAL *)((char *)v22 + 304888), v7);
  WdLogSingleEntry1(4LL, this);
  ExReleasePushLockSharedEx(&qword_1C013C070, 0LL);
}
