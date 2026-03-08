/*
 * XREFs of ?OnNotify@BamoDataProviderProxy@@UEAAJ_KW4DataProviderNotificationEventArg@@@Z @ 0x1801E1570
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800ACA2C (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800ACA60 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnNotify@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_KW4DataProviderNotificationEventArg@@@Z @ 0x1801E15D0 (-OnNotify@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_KW4DataProviderNotificationEventArg@@@Z.c)
 */

__int64 __fastcall BamoDataProviderProxy::OnNotify(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v4) = BamoImpl::BamoDataProviderProxyImpl::OnNotify(v4 + 8, a2, a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v7);
  return (unsigned int)v4;
}
