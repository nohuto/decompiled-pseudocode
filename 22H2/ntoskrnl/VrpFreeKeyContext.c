/*
 * XREFs of VrpFreeKeyContext @ 0x14068EC34
 * Callers:
 *     VrpPostOpenOrCreate @ 0x14068DF0C (VrpPostOpenOrCreate.c)
 *     VrpRegistryCallback @ 0x14068E300 (VrpRegistryCallback.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x14077A578 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPreLoadKey @ 0x14077A954 (VrpPreLoadKey.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8BC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     VrpDecommissionKeyContext @ 0x14068EC6C (VrpDecommissionKeyContext.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall VrpFreeKeyContext(PVOID *P)
{
  VrpDecommissionKeyContext();
  ObDereferenceObjectDeferDeleteWithTag(P[5], 0x67655256u);
  ExFreePoolWithTag(P, 0x67655256u);
}
