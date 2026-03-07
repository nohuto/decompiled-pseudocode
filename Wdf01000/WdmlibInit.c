PVOID WdmlibInit()
{
  PVOID result; // rax
  _UNICODE_STRING functionName; // [rsp+20h] [rbp-18h] BYREF

  functionName = 0LL;
  RtlInitUnicodeString(&functionName, L"IoCreateDeviceSecure");
  PfnIoCreateDeviceSecure = (int (__fastcall *)(_DRIVER_OBJECT *, unsigned int, _UNICODE_STRING *, unsigned int, unsigned int, unsigned __int8, const _UNICODE_STRING *, const _GUID *, _DEVICE_OBJECT **))MmGetSystemRoutineAddress(&functionName);
  if ( !PfnIoCreateDeviceSecure )
    PfnIoCreateDeviceSecure = IoDevObjCreateDeviceSecure;
  RtlInitUnicodeString(&functionName, L"IoValidateDeviceIoControlAccess");
  result = MmGetSystemRoutineAddress(&functionName);
  WdmlibInitialized = 1;
  return result;
}
