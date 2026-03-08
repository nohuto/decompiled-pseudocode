/*
 * XREFs of ExAreApcsDisabledForThread @ 0x140607768
 * Callers:
 *     CcUnpinFileDataEx @ 0x140337E50 (CcUnpinFileDataEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExAreApcsDisabledForThread(char a1, __int64 a2)
{
  return a1 || (*(_DWORD *)(a2 + 116) & 0x400) != 0 || *(_DWORD *)(a2 + 484) != 0;
}
