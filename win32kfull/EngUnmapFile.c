/*
 * XREFs of EngUnmapFile @ 0x1C028DF10
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C011CC6C (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 */

BOOL __stdcall EngUnmapFile(ULONG_PTR iFile)
{
  BOOL v2; // esi
  NTSTATUS v3; // ebx

  Gre::Base::Globals((Gre::Base *)iFile);
  v2 = 0;
  if ( !iFile )
    return 0;
  v3 = MmUnmapViewInSessionSpace(*(PVOID *)(iFile + 8));
  vUnreferenceFileviewSection((struct _FILEVIEW *)iFile);
  Win32FreePool((void *)iFile);
  LOBYTE(v2) = v3 >= 0;
  return v2;
}
