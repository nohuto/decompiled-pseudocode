/*
 * XREFs of IoGetFileObjectGenericMapping @ 0x140760E00
 * Callers:
 *     DifIoGetFileObjectGenericMappingWrapper @ 0x1405DD7E0 (DifIoGetFileObjectGenericMappingWrapper.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x140613F58 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     VfUtilIsLocalSystem @ 0x140ABF724 (VfUtilIsLocalSystem.c)
 * Callees:
 *     <none>
 */

PGENERIC_MAPPING IoGetFileObjectGenericMapping(void)
{
  return (PGENERIC_MAPPING)&IopFileMapping;
}
