/*
 * XREFs of ZwCreateDirectoryObject @ 0x1403FBA60
 * Callers:
 *     SeGetTokenDeviceMap @ 0x1405F2340 (SeGetTokenDeviceMap.c)
 *     SepInitializationPhase1 @ 0x14079D578 (SepInitializationPhase1.c)
 *     ObpInitializeRootNamespace @ 0x1407A0B90 (ObpInitializeRootNamespace.c)
 *     ObpGetSilosRootDirectory @ 0x140980B6C (ObpGetSilosRootDirectory.c)
 *     CmpInitializeDriverStores @ 0x140A5931C (CmpInitializeDriverStores.c)
 *     ExInitializeNls @ 0x140A74EC4 (ExInitializeNls.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle);
}
