/*
 * XREFs of ?EnableCoreDripsBlockerAccountingForProcess@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C02E62AC
 * Callers:
 *     ?ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0343420 (-ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?EnableAccountingForProcess@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C0304704 (-EnableAccountingForProcess@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 */

void __fastcall DXGGLOBAL::EnableCoreDripsBlockerAccountingForProcess(
        DXGGLOBAL *this,
        unsigned __int64 a2,
        struct _EPROCESS *a3,
        bool a4)
{
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGGLOBAL *)((char *)this + 2128), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  DripsBlockerTrackingHelper::EnableAccountingForProcess((DXGGLOBAL *)((char *)this + 2296), a2, a3, a4);
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
}
