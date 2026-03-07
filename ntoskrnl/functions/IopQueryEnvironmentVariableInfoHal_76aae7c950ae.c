__int64 __fastcall IopQueryEnvironmentVariableInfoHal(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  return HalQueryEnvironmentVariableInfoEx(a3, a4, a5, a6);
}
