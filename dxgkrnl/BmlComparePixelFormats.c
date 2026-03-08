/*
 * XREFs of BmlComparePixelFormats @ 0x1C03B8658
 * Callers:
 *     BmlCompareSourceModes @ 0x1C03B86F4 (BmlCompareSourceModes.c)
 * Callees:
 *     BmlGetPixelFormatPreference @ 0x1C0170DBC (BmlGetPixelFormatPreference.c)
 */

__int64 __fastcall BmlComparePixelFormats(__int64 a1, __int64 a2, int a3)
{
  int PixelFormatPreference; // esi
  int v6; // eax

  PixelFormatPreference = BmlGetPixelFormatPreference(*(_DWORD *)(a2 + 96), a3);
  v6 = BmlGetPixelFormatPreference(*(_DWORD *)(a1 + 96), a3);
  if ( v6 <= PixelFormatPreference )
    return (unsigned int)(v6 >= PixelFormatPreference) - 1;
  else
    return 1LL;
}
