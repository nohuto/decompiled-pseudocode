/*
 * XREFs of VrpFreeKeyContext @ 0x1406C29BC
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140690378 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPreLoadKey @ 0x14069061C (VrpPreLoadKey.c)
 *     VrpPostOpenOrCreate @ 0x1407806B0 (VrpPostOpenOrCreate.c)
 *     VrpRegistryCallback @ 0x140780EF0 (VrpRegistryCallback.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     VrpDecommissionKeyContext @ 0x1406C29F4 (VrpDecommissionKeyContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall VrpFreeKeyContext(PVOID *P)
{
  VrpDecommissionKeyContext();
  ObDereferenceObjectDeferDeleteWithTag(P[5], 0x67655256u);
  ExFreePoolWithTag(P, 0x67655256u);
}
