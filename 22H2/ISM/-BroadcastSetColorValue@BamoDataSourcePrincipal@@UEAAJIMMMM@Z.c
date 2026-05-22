/*
 * XREFs of ?BroadcastSetColorValue@BamoDataSourcePrincipal@@UEAAJIMMMM@Z @ 0x180141CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180005450 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800115C4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?BroadcastSetColorValue@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x180141D54 (-BroadcastSetColorValue@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMMMM@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoDataSourcePrincipal::BroadcastSetColorValue(
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
  LODWORD(v7) = BamoImpl::BamoDataSourcePrincipalImpl::BroadcastSetColorValue(
                  (BamoImpl::BamoDataSourcePrincipalImpl *)(v7 + 1),
                  a2,
                  a3,
                  a4,
                  a5,
                  a6);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9);
  return (unsigned int)v7;
}
