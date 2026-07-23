/*
 * XREFs of SiIsValidWindowsBootEntry @ 0x1409745A8
 * Callers:
 *     SiGetEspFromFirmware @ 0x140974188 (SiGetEspFromFirmware.c)
 * Callees:
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     wcsnlen @ 0x1403D4240 (wcsnlen.c)
 */

bool __fastcall SiIsValidWindowsBootEntry(_DWORD *a1, __int64 a2)
{
  const wchar_t *v3; // rcx
  bool result; // al

  result = 0;
  if ( a1[5] )
  {
    if ( (a1[3] & 4) != 0 && a1[6] >= 0x18u )
      return 1;
    v3 = (const wchar_t *)(a2
                         + 12
                         + 2
                         * (wcsnlen((const wchar_t *)(a2 + 12), (unsigned __int64)*(unsigned int *)(a2 + 4) >> 1) + 1));
    if ( (unsigned __int64)v3 < (unsigned __int64)*(unsigned int *)(a2 + 4) + a2 + 12
      && !wcsicmp(v3, L"\\EFI\\Microsoft\\Boot\\bootmgfw.efi") )
    {
      return 1;
    }
  }
  return result;
}
