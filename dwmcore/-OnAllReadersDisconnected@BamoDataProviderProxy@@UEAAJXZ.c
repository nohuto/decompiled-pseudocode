/*
 * XREFs of ?OnAllReadersDisconnected@BamoDataProviderProxy@@UEAAJXZ @ 0x1801E13E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800ACA2C (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800ACA60 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnAllReadersDisconnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJXZ @ 0x1801E1420 (-OnAllReadersDisconnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJXZ.c)
 */

__int64 __fastcall BamoDataProviderProxy::OnAllReadersDisconnected(BamoDataProviderProxy *this)
{
  BamoDataProviderProxy *v1; // rbx
  Microsoft::BamoImpl::BamoImplObject *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v3,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v1) = BamoImpl::BamoDataProviderProxyImpl::OnAllReadersDisconnected((BamoDataProviderProxy *)((char *)v1 + 8));
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v3);
  return (unsigned int)v1;
}
