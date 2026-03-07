__int64 __fastcall NVMeControllerIdentifyWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9

  NVMeControllerIdentify(a1);
  NVMeGetControllerIoCommandSetIdentify(a1);
  return StorPortExtendedFunction(31LL, a1, a3, v5);
}
