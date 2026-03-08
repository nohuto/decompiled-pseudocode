/*
 * XREFs of ?ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C030FD14
 * Callers:
 *     DxgkEscape @ 0x1C01A3EE0 (DxgkEscape.c)
 *     ?DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z @ 0x1C02B258C (-DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z.c)
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0003484 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

struct DXGADAPTER *__fastcall DXGGLOBAL::ReferenceBddFallbackAdapter(DXGGLOBAL *this, unsigned __int64 *a2)
{
  DXGADAPTER *v4; // r9
  DXGADAPTER *v5; // r8
  DXGADAPTER *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  _BYTE v10[24]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGGLOBAL *)((char *)this + 672), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v4 = (DXGGLOBAL *)((char *)this + 768);
  v5 = (DXGADAPTER *)*((_QWORD *)this + 96);
  while ( v5 != v4 && v5 )
  {
    v6 = v5;
    if ( DXGADAPTER::IsBddFallbackDriver(v5) )
    {
      _m_prefetchw((char *)v6 + 24);
      v7 = *((_QWORD *)v6 + 3);
      while ( v7 )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 3, v7 + 1, v7);
        if ( v8 == v7 )
        {
          *a2 = -1LL;
          goto LABEL_11;
        }
      }
    }
  }
  WdLogSingleEntry1(1LL, 3162LL);
  DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"BDD Fallback not found!", 3162LL, 0LL, 0LL, 0LL, 0LL);
  v6 = 0LL;
LABEL_11:
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  return v6;
}
