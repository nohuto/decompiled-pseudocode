/*
 * XREFs of ZwCreateDirectoryObject @ 0x1403FB880
 * Callers:
 *     SeGetTokenDeviceMap @ 0x140692CBC (SeGetTokenDeviceMap.c)
 *     SepInitializationPhase1 @ 0x14079D378 (SepInitializationPhase1.c)
 *     ObpInitializeRootNamespace @ 0x1407A0990 (ObpInitializeRootNamespace.c)
 *     ObpGetSilosRootDirectory @ 0x14098098C (ObpGetSilosRootDirectory.c)
 *     CmpInitializeDriverStores @ 0x140A5831C (CmpInitializeDriverStores.c)
 *     ExInitializeNls @ 0x140A73EC4 (ExInitializeNls.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle, *(_QWORD *)&DesiredAccess);
}
