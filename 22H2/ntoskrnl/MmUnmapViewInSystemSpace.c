/*
 * XREFs of MmUnmapViewInSystemSpace @ 0x1407E0990
 * Callers:
 *     LdrUnloadAlternateResourceModuleEx @ 0x14020B660 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1402F77DC (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1403A1D34 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpMapResourceFile @ 0x1403A7634 (LdrpMapResourceFile.c)
 *     ExpDeleteSiloState @ 0x140608FF0 (ExpDeleteSiloState.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x1402137A0 (MiRemoveFromSystemSpace.c)
 */

NTSTATUS __stdcall MmUnmapViewInSystemSpace(PVOID MappedBase)
{
  MiRemoveFromSystemSpace((ULONG_PTR)MappedBase, 1);
  return 0;
}
