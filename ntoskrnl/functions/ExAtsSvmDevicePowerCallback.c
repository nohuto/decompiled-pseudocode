__int64 __fastcall ExAtsSvmDevicePowerCallback(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r9

  v3 = a3;
  LOBYTE(a3) = a2 == 1;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(HalIommuDispatch + 128))(
           ExpSvmIommuSystemContext,
           v3,
           a3);
}
