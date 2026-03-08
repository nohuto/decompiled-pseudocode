/*
 * XREFs of ?ProxyReady@BamoCompObjectDiagnosticsRootProxy@@UEAAJXZ @ 0x1801E2CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800ACA2C (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800ACA60 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?ProxyReady@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJXZ @ 0x1801E2D00 (-ProxyReady@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJXZ.c)
 */

__int64 __fastcall BamoCompObjectDiagnosticsRootProxy::ProxyReady(BamoCompObjectDiagnosticsRootProxy *this)
{
  BamoCompObjectDiagnosticsRootProxy *v1; // rbx
  Microsoft::BamoImpl::BamoImplObject *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v3,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v1) = BamoImpl::BamoCompObjectDiagnosticsRootProxyImpl::ProxyReady((BamoCompObjectDiagnosticsRootProxy *)((char *)v1 + 8));
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v3);
  return (unsigned int)v1;
}
