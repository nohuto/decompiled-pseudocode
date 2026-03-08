/*
 * XREFs of ?ReferenceWarpAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C030FE00
 * Callers:
 *     ?DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z @ 0x1C02B258C (-DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

struct DXGADAPTER *__fastcall DXGGLOBAL::ReferenceWarpAdapter(DXGGLOBAL *this, unsigned __int64 *a2)
{
  char *v4; // r9
  char *v5; // r8
  char *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGGLOBAL *)((char *)this + 672), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v4 = (char *)this + 768;
  v5 = (char *)*((_QWORD *)this + 96);
  while ( v5 != v4 && v5 )
  {
    v6 = v5;
    v5 = *(char **)v5;
    if ( (*((_DWORD *)v6 + 109) & 0x10) != 0 )
    {
      _m_prefetchw(v6 + 24);
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
  WdLogSingleEntry1(3LL, 3196LL);
  v6 = 0LL;
LABEL_11:
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  return (struct DXGADAPTER *)v6;
}
