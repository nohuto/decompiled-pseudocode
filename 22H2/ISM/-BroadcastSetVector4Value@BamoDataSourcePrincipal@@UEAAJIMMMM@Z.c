/*
 * XREFs of ?BroadcastSetVector4Value@BamoDataSourcePrincipal@@UEAAJIMMMM@Z @ 0x1801423A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180005450 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800115C4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?BroadcastSetVector4Value@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x180142434 (-BroadcastSetVector4Value@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMMMM@Z.c)
 */

__int64 __fastcall BamoDataSourcePrincipal::BroadcastSetVector4Value(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        unsigned int a2,
        float a3,
        float a4,
        float a5,
        float a6)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v7; // rbx
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+60h] [rbp+8h] BYREF

  v7 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(&v9, this[3]);
  LODWORD(v7) = BamoImpl::BamoDataSourcePrincipalImpl::BroadcastSetVector4Value(
                  (BamoImpl::BamoDataSourcePrincipalImpl *)(v7 + 1),
                  a2,
                  a3,
                  a4,
                  a5,
                  a6);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9);
  return (unsigned int)v7;
}
