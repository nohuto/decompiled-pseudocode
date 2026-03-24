/*
 * XREFs of ?ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C026B544
 * Callers:
 *     DxgkEscape @ 0x1C0102F00 (DxgkEscape.c)
 *     ?DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z @ 0x1C020D5EC (-DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0009D98 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 */

struct DXGADAPTER *__fastcall DXGGLOBAL::ReferenceBddFallbackAdapter(DXGGLOBAL *this, unsigned __int64 *a2)
{
  __int64 v4; // rdx
  signed __int64 v5; // rcx
  DXGADAPTER *v6; // r9
  DXGADAPTER *v7; // r8
  DXGADAPTER *v8; // rbx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  __int64 v11; // rax
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (DXGGLOBAL *)((char *)this + 584), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  v6 = (DXGGLOBAL *)((char *)this + 664);
  v7 = (DXGADAPTER *)*((_QWORD *)this + 83);
  while ( v7 != v6 && v7 )
  {
    v8 = v7;
    if ( DXGADAPTER::IsBddFallbackDriver(v7) )
    {
      _m_prefetchw((char *)v8 + 24);
      v9 = *((_QWORD *)v8 + 3);
      while ( v9 )
      {
        v5 = v9 + 1;
        v10 = v9;
        v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 3, v9 + 1, v9);
        if ( v10 == v9 )
        {
          *a2 = -1LL;
          goto LABEL_11;
        }
      }
    }
  }
  v11 = WdLogNewEntry5_WdAssertion(v5, v4);
  *(_QWORD *)(v11 + 24) = 2809LL;
  WdLogEvent5_WdAssertion(v11);
  v8 = 0LL;
LABEL_11:
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13, v4);
  return v8;
}
