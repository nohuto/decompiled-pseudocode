/*
 * XREFs of MmUnmapViewInSystemSpace @ 0x140791780
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x14035D07C (LdrLoadAlternateResourceModuleEx.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14036C9E0 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14039D7D4 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpMapResourceFile @ 0x1403A2E68 (LdrpMapResourceFile.c)
 *     ExpDeleteSiloState @ 0x140606BA0 (ExpDeleteSiloState.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x14020E5C8 (MiRemoveFromSystemSpace.c)
 */

NTSTATUS __stdcall MmUnmapViewInSystemSpace(PVOID MappedBase)
{
  MiRemoveFromSystemSpace((ULONG_PTR)MappedBase, 1);
  return 0;
}
