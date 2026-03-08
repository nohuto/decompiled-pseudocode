/*
 * XREFs of IopSetEnvironmentVariableHal @ 0x14094E3B0
 * Callers:
 *     <none>
 * Callees:
 *     HalSetEnvironmentVariableEx @ 0x140502A90 (HalSetEnvironmentVariableEx.c)
 */

__int64 __fastcall IopSetEnvironmentVariableHal(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        int a4,
        __int64 a5,
        int a6,
        int a7)
{
  return HalSetEnvironmentVariableEx(a3, a4, a5, a6, a7);
}
