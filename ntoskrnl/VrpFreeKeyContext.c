/*
 * XREFs of VrpFreeKeyContext @ 0x14078D308
 * Callers:
 *     VrpPostOpenOrCreate @ 0x1406C2968 (VrpPostOpenOrCreate.c)
 *     VrpRegistryCallback @ 0x1406C2D60 (VrpRegistryCallback.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140735A88 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPreLoadKey @ 0x140735EB4 (VrpPreLoadKey.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140283390 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     VrpDecommissionKeyContext @ 0x14078D340 (VrpDecommissionKeyContext.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall VrpFreeKeyContext(PVOID *P)
{
  VrpDecommissionKeyContext();
  ObDereferenceObjectDeferDeleteWithTag(P[5], 0x67655256u);
  ExFreePoolWithTag(P, 0x67655256u);
}
