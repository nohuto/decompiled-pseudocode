__int64 __fastcall ADAPTER_DISPLAY::EndDisplayCalloutBatch(ADAPTER_DISPLAY *this)
{
  unsigned int v2; // esi
  DXGADAPTER *v4; // rcx
  struct _LUID *v5; // rdx
  __int64 v6; // r11
  _BYTE v7[16]; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 v8; // [rsp+70h] [rbp+8h] BYREF

  v2 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 2)) )
  {
    WdLogSingleEntry1(1LL, 8889LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 8889LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (ADAPTER_DISPLAY *)((char *)this + 536), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  if ( !*((_BYTE *)this + 584) )
  {
    WdLogSingleEntry1(1LL, 8894LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_DisplayCalloutBatchStarted", 8894LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_BYTE *)this + 584) = 0;
  if ( *((ADAPTER_DISPLAY **)this + 74) != (ADAPTER_DISPLAY *)((char *)this + 592) )
  {
    DXGGLOBAL::GetGlobal();
    v4 = (DXGADAPTER *)*((_QWORD *)this + 2);
    v8 = 0LL;
    DXGADAPTER::IsAdapterSessionized(v4, v5, 0LL, &v8);
    v2 = DXGDISPLAYCALLOUTQUEUE::SubmitBatch((DXGDISPLAYCALLOUTQUEUE *)(v6 + 1840), (struct _LIST_ENTRY *)this + 37, v8);
  }
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
  return v2;
}
