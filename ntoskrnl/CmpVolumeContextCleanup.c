/*
 * XREFs of CmpVolumeContextCleanup @ 0x14085EE74
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x14072B8A0 (CmpVolumeManagerGetContextForFile.c)
 *     CmpVolumeContextDecrementRefCount @ 0x14074B4AC (CmpVolumeContextDecrementRefCount.c)
 *     CmpVolumeContextCreate @ 0x14084C438 (CmpVolumeContextCreate.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PiPagePathSetState @ 0x1408512E8 (PiPagePathSetState.c)
 */

LONG_PTR __fastcall CmpVolumeContextCleanup(__int64 a1)
{
  struct _FILE_OBJECT **v1; // rbx
  LONG_PTR result; // rax

  v1 = (struct _FILE_OBJECT **)(a1 + 48);
  if ( *(_BYTE *)(a1 + 64) )
    result = PiPagePathSetState(*v1, 0);
  if ( *v1 )
    return ObfDereferenceObject(*v1);
  return result;
}
