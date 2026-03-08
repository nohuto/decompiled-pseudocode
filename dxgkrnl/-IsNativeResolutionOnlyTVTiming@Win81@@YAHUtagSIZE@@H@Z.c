/*
 * XREFs of ?IsNativeResolutionOnlyTVTiming@Win81@@YAHUtagSIZE@@H@Z @ 0x1C031CAE8
 * Callers:
 *     ?HeuristicallyDetermineViewingDistance@Win81@@YAIAEBUtagSIZE@@H0H@Z @ 0x1C031C960 (-HeuristicallyDetermineViewingDistance@Win81@@YAIAEBUtagSIZE@@H0H@Z.c)
 * Callees:
 *     ?IsNetbookResolution@Win81@@YAHUtagSIZE@@@Z @ 0x1C031CB50 (-IsNetbookResolution@Win81@@YAHUtagSIZE@@@Z.c)
 */

__int64 __fastcall Win81::IsNativeResolutionOnlyTVTiming(Win81 *this, struct tagSIZE a2)
{
  int v2; // r8d
  unsigned __int64 v3; // r9
  int IsNetbookResolution; // eax
  int v5; // r8d
  int v6; // r9d
  unsigned int v7; // ecx

  v2 = (int)this;
  v3 = (unsigned __int64)this >> 32;
  if ( SHIDWORD(this) < 768 )
  {
    IsNetbookResolution = Win81::IsNetbookResolution(this, a2);
    v7 = 0;
    if ( !IsNetbookResolution && (v5 != 800 || v6 != 600) )
      return 1;
    return v7;
  }
  v7 = 0;
  if ( a2.cx && (_DWORD)v3 == 1080 )
  {
    LOBYTE(v7) = v2 == 1920;
    return v7;
  }
  return 0LL;
}
