/*
 * XREFs of IopQueryEnvironmentVariableInfoHal @ 0x14094E1E0
 * Callers:
 *     <none>
 * Callees:
 *     HalQueryEnvironmentVariableInfoEx @ 0x1405028B0 (HalQueryEnvironmentVariableInfoEx.c)
 */

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
