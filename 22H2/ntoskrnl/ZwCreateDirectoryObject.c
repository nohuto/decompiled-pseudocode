/*
 * XREFs of ZwCreateDirectoryObject @ 0x1403FAF00
 * Callers:
 *     SeGetTokenDeviceMap @ 0x1406770FC (SeGetTokenDeviceMap.c)
 *     SepInitializationPhase1 @ 0x14079D7A8 (SepInitializationPhase1.c)
 *     ObpInitializeRootNamespace @ 0x1407A0DC0 (ObpInitializeRootNamespace.c)
 *     ObpGetSilosRootDirectory @ 0x1409809DC (ObpGetSilosRootDirectory.c)
 *     CmpInitializeDriverStores @ 0x140A5831C (CmpInitializeDriverStores.c)
 *     ExInitializeNls @ 0x140A73EC4 (ExInitializeNls.c)
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
