/*
 * XREFs of ?CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01E84B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C00073B4 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00075BC (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000A958 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ?CleanupPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01E8518 (-CleanupPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAXXZ.c)
 */

__int64 __fastcall DXGPRESENTHISTORYTOKENQUEUE::CleanupPresentHistoryTokenQueueAdapter(ADAPTER_RENDER **a1, void *a2)
{
  ADAPTER_RENDER *v3; // rcx
  _BYTE v5[64]; // [rsp+20h] [rbp-58h] BYREF

  COREACCESS::COREACCESS((COREACCESS *)v5, (struct DXGADAPTER *const)a1);
  COREACCESS::AcquireShared((COREACCESS *)v5, 0LL);
  v3 = a1[366];
  if ( v3 )
    ADAPTER_RENDER::CleanupPresentHistoryTokenQueue(v3);
  COREACCESS::~COREACCESS((COREACCESS *)v5);
  return 0LL;
}
