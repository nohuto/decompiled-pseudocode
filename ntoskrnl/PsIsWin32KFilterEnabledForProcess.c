/*
 * XREFs of PsIsWin32KFilterEnabledForProcess @ 0x1402F0290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsWin32KFilterEnabledForProcess(__int64 a1)
{
  return (*(_DWORD *)(a1 + 2512) & 0x4000) != 0;
}
