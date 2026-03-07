void __fastcall vUnmapFile(PVOID *a1)
{
  Gre::Base::Globals((Gre::Base *)a1);
  MmUnmapViewInSessionSpace(a1[1]);
  if ( !a1[2] )
    vUnreferenceFileviewSection((struct _FILEVIEW *)a1);
  *((_DWORD *)a1 + 10) &= ~1u;
}
