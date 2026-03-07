NTSTATUS __stdcall ObQueryNameString(
        PVOID Object,
        POBJECT_NAME_INFORMATION ObjectNameInfo,
        ULONG Length,
        PULONG ReturnLength)
{
  return ObQueryNameStringMode((_DWORD)Object, (_DWORD)ObjectNameInfo, Length, (_DWORD)ReturnLength, 0);
}
