NTSTATUS __stdcall ObReferenceObjectByHandle(
        HANDLE Handle,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        PVOID *Object,
        POBJECT_HANDLE_INFORMATION HandleInformation)
{
  return ObpReferenceObjectByHandleWithTag(
           (ULONG_PTR)Handle,
           0x746C6644u,
           (__int64)Object,
           (__int64)HandleInformation,
           0LL);
}
