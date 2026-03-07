_BOOL8 __fastcall EngFreeSectionMem(PVOID Object, PVOID MappedBase)
{
  BOOL v3; // ebx

  v3 = 1;
  if ( MappedBase )
    v3 = MmUnmapViewInSessionSpace(MappedBase) >= 0;
  if ( Object )
    ObfDereferenceObject(Object);
  return v3;
}
