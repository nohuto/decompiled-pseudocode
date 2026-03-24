/*
 * XREFs of ?ReferenceWarpAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C026B608
 * Callers:
 *     ?DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z @ 0x1C020D5EC (-DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

struct DXGADAPTER *__fastcall DXGGLOBAL::ReferenceWarpAdapter(DXGGLOBAL *this, unsigned __int64 *a2)
{
  __int64 v4; // rdx
  signed __int64 v5; // rcx
  char *v6; // r9
  char *v7; // r8
  char *v8; // rbx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  __int64 v11; // rax
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (DXGGLOBAL *)((char *)this + 584), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  v6 = (char *)this + 664;
  v7 = (char *)*((_QWORD *)this + 83);
  while ( v7 != v6 && v7 )
  {
    v8 = v7;
    v7 = *(char **)v7;
    if ( (*((_DWORD *)v8 + 87) & 0x10) != 0 )
    {
      _m_prefetchw(v8 + 24);
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
  v11 = WdLogNewEntry5_WdWarning(v5, v4, v7);
  *(_QWORD *)(v11 + 24) = 2843LL;
  WdLogEvent5_WdWarning(v11);
  v8 = 0LL;
LABEL_11:
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13, v4);
  return (struct DXGADAPTER *)v8;
}
