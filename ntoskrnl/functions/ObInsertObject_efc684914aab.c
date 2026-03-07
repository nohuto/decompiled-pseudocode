NTSTATUS __stdcall ObInsertObject(
        PVOID Object,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        ULONG ObjectPointerBias,
        PVOID *NewObject,
        PHANDLE Handle)
{
  return ObInsertObjectEx(
           (char *)Object,
           PassedAccessState,
           DesiredAccess,
           ObjectPointerBias,
           0,
           (__int64)NewObject,
           Handle);
}
