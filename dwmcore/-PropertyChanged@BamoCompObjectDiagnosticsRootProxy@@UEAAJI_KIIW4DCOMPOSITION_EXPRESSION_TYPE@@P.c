/*
 * XREFs of ?PropertyChanged@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x1801E2A80
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800ACA2C (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800ACA60 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?PropertyChanged@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x1801E2B14 (-PropertyChanged@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIIW4DCOMPOSITION_EXPRE.c)
 */

__int64 __fastcall BamoCompObjectDiagnosticsRootProxy::PropertyChanged(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        __int64 a7,
        int a8)
{
  __int64 v9; // rbx
  Microsoft::BamoImpl::BamoImplObject *v13; // [rsp+50h] [rbp+8h] BYREF

  v9 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v13,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v9) = BamoImpl::BamoCompObjectDiagnosticsRootProxyImpl::PropertyChanged(v9 + 8, a2, a3, a4, a5, a6, a7, a8);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v13);
  return (unsigned int)v9;
}
