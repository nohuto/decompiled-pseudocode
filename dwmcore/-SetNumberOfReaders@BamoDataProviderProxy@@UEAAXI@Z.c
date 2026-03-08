/*
 * XREFs of ?SetNumberOfReaders@BamoDataProviderProxy@@UEAAXI@Z @ 0x1801E1F30
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800ACA2C (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800ACA60 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?UpdateNumberOfReadersRemoteCache@BamoDataProviderProxyImpl@BamoImpl@@AEAAXXZ @ 0x1801E1F84 (-UpdateNumberOfReadersRemoteCache@BamoDataProviderProxyImpl@BamoImpl@@AEAAXXZ.c)
 */

void __fastcall BamoDataProviderProxy::SetNumberOfReaders(BamoDataProviderProxy *this, int a2)
{
  __int64 v4; // rax
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  v4 = *((_QWORD *)this + 3);
  *((_DWORD *)this + 12) = a2;
  if ( !*(_DWORD *)(v4 + 44) )
    BamoImpl::BamoDataProviderProxyImpl::UpdateNumberOfReadersRemoteCache((BamoDataProviderProxy *)((char *)this + 8));
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v5);
}
