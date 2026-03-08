/*
 * XREFs of ACPIIsSystemStartOptionPresent @ 0x1C00A9564
 * Callers:
 *     ACPIInitGetPlatformOverrides @ 0x1C00A87E8 (ACPIInitGetPlatformOverrides.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIIsSystemStartOptionPresent(const wchar_t *a1)
{
  char v2; // bl
  wchar_t *v3; // rax

  v2 = 0;
  v3 = wcsstr(a1, L"TESTSIGNING");
  if ( v3 && (v3 == a1 || *(v3 - 1) == 32) )
    return (v3[11] & 0xFFDF) == 0;
  return v2;
}
