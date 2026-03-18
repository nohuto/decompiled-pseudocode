/*
 * XREFs of VrpAllocateKeyContext @ 0x14068EECC
 * Callers:
 *     VrpPostOpenOrCreate @ 0x14068DF0C (VrpPostOpenOrCreate.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x14077A578 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPreLoadKey @ 0x14077A954 (VrpPreLoadKey.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
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
