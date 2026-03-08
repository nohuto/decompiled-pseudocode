/*
 * XREFs of CmInitSiloNamespace @ 0x1407388F8
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140735A88 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x1407361AC (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmpStartSiloRegistryNamespace @ 0x140738F48 (CmpStartSiloRegistryNamespace.c)
 */

__int64 CmInitSiloNamespace()
{
  __int64 v0; // r8
  int v1; // eax
  __int64 v2; // rdx
  unsigned int v3; // r8d
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  *(_OWORD *)v5 = 0LL;
  v6 = 0LL;
  CmpInitializeThreadInfo((__int64)v5);
  v1 = CmpGetOrCreateContextForSiloNoRef(v0, &v6);
  if ( v1 >= 0 )
    CmpStartSiloRegistryNamespace(v6, v2, (unsigned int)v1);
  CmCleanupThreadInfo(v5);
  return v3;
}
