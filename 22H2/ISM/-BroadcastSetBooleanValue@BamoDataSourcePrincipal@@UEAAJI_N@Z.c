/*
 * XREFs of ?BroadcastSetBooleanValue@BamoDataSourcePrincipal@@UEAAJI_N@Z @ 0x180141BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180005450 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800115C4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?BroadcastSetBooleanValue@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJI_N@Z @ 0x180141C08 (-BroadcastSetBooleanValue@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJI_N@Z.c)
 */

__int64 __fastcall BamoDataSourcePrincipal::BroadcastSetBooleanValue(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        unsigned int a2,
        bool a3)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v5; // rbx
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(&v7, this[3]);
  LODWORD(v5) = BamoImpl::BamoDataSourcePrincipalImpl::BroadcastSetBooleanValue(
                  (BamoImpl::BamoDataSourcePrincipalImpl *)(v5 + 1),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7);
  return (unsigned int)v5;
}
