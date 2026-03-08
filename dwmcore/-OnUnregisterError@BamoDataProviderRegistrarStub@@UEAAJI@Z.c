/*
 * XREFs of ?OnUnregisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z @ 0x1801DDDF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800ACA2C (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800ACA60 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnUnregisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z @ 0x1801DDE3C (-OnUnregisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z.c)
 */

__int64 __fastcall BamoDataProviderRegistrarStub::OnUnregisterError(
        BamoDataProviderRegistrarStub *this,
        unsigned int a2)
{
  BamoDataProviderRegistrarStub *v3; // rbx
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 5) + 24LL));
  LODWORD(v3) = BamoImpl::BamoDataProviderRegistrarStubImpl::OnUnregisterError(
                  (BamoDataProviderRegistrarStub *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v5);
  return (unsigned int)v3;
}
