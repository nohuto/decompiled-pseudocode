/*
 * XREFs of ZwCreateDirectoryObject @ 0x140413850
 * Callers:
 *     DifZwCreateDirectoryObjectWrapper @ 0x1405EBDF0 (DifZwCreateDirectoryObjectWrapper.c)
 *     SeGetTokenDeviceMap @ 0x14075D880 (SeGetTokenDeviceMap.c)
 *     ObpInitializeRootNamespace @ 0x1408093C4 (ObpInitializeRootNamespace.c)
 *     ExInitializeNls @ 0x14080F164 (ExInitializeNls.c)
 *     SepInitializationPhase1 @ 0x140810320 (SepInitializationPhase1.c)
 *     ObpGetSilosRootDirectory @ 0x140A71340 (ObpGetSilosRootDirectory.c)
 *     PspInitializeCpuPartitionsPhase1 @ 0x140B42590 (PspInitializeCpuPartitionsPhase1.c)
 *     CmpInitializeDriverStores @ 0x140B52CE0 (CmpInitializeDriverStores.c)
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
