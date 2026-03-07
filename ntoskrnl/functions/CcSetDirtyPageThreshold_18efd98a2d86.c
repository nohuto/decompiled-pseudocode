void __stdcall CcSetDirtyPageThreshold(PFILE_OBJECT FileObject, ULONG DirtyPageThreshold)
{
  _DWORD *SharedCacheMap; // r8
  _BYTE *FsContext; // rcx
  char v4; // al

  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap )
    SharedCacheMap[68] = DirtyPageThreshold;
  FsContext = FileObject->FsContext;
  v4 = FsContext[4];
  if ( (v4 & 4) == 0 )
    FsContext[4] = v4 | 4;
}
