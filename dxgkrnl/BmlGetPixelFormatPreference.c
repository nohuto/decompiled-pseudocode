/*
 * XREFs of BmlGetPixelFormatPreference @ 0x1C0170DBC
 * Callers:
 *     BmlGetNextBestSourceMode @ 0x1C01706B0 (BmlGetNextBestSourceMode.c)
 *     BmlComparePixelFormats @ 0x1C03B8658 (BmlComparePixelFormats.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlGetPixelFormatPreference(int a1, int a2)
{
  int v2; // ecx
  int v3; // ecx
  __int64 result; // rax
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  bool v10; // zf
  unsigned int v11; // ecx

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    return 0xFFFFFFFFLL;
  }
  v2 = a1 - 20;
  if ( !v2 )
    return 4LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 4LL;
  v5 = v3 - 1;
  if ( !v5 )
    return 0xFFFFFFFFLL;
  v6 = v5 - 1;
  if ( !v6 )
    return 3LL;
  v7 = v6 - 9;
  if ( !v7 )
    return 1LL;
  v8 = v7 - 3;
  if ( !v8 )
  {
    v10 = a2 == 1;
    goto LABEL_16;
  }
  v9 = v8 - 6;
  if ( !v9 )
    return 2LL;
  result = 0xFFFFFFFFLL;
  if ( v9 == 72 )
  {
    v10 = a2 == 2;
LABEL_16:
    v11 = 5;
    if ( !v10 )
      return (unsigned int)-1;
    return v11;
  }
  return result;
}
