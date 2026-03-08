/*
 * XREFs of ?DebuggingStarted@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x1801E2730
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800ACA2C (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800ACA60 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?DebuggingStarted@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x1801E27B8 (-DebuggingStarted@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIW4DCOMPOSITION_EXPRE.c)
 */

__int64 __fastcall BamoCompObjectDiagnosticsRootProxy::DebuggingStarted(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        int a7)
{
  __int64 v8; // rbx
  Microsoft::BamoImpl::BamoImplObject *v12; // [rsp+50h] [rbp+8h] BYREF

  v8 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v12,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v8) = BamoImpl::BamoCompObjectDiagnosticsRootProxyImpl::DebuggingStarted(v8 + 8, a2, a3, a4, a5, a6, a7);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v12);
  return (unsigned int)v8;
}
