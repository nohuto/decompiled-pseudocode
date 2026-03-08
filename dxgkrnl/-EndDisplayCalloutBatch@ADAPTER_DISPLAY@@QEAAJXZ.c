/*
 * XREFs of ?EndDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01E6D80
 * Callers:
 *     DxgkEndDisplayCalloutBatch @ 0x1C01E6CE8 (DxgkEndDisplayCalloutBatch.c)
 * Callees:
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0001D60 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@_K@Z @ 0x1C0310D24 (-SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@_K@Z.c)
 */

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
