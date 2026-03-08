/*
 * XREFs of VrpAllocateKeyContext @ 0x140735DF0
 * Callers:
 *     VrpPostOpenOrCreate @ 0x1406C2968 (VrpPostOpenOrCreate.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140735A88 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPreLoadKey @ 0x140735EB4 (VrpPreLoadKey.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall VrpAllocateKeyContext(PVOID Object)
{
  __int64 Pool2; // rbx

  Pool2 = ExAllocatePool2(256LL, 48LL, 1734693462LL);
  if ( Pool2 )
  {
    ObfReferenceObjectWithTag(Object, 0x67655256u);
    *(_QWORD *)(Pool2 + 40) = Object;
  }
  return Pool2;
}
