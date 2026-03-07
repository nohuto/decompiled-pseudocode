NTSTATUS __stdcall ZwSaveKey(HANDLE KeyHandle, HANDLE FileHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, FileHandle);
}
