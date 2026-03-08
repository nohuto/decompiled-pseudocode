/*
 * XREFs of VidSchGetProcessInterferenceCount @ 0x1C00B4C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetProcessInterferenceCount(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 2672);
  *a2 = result;
  return result;
}
