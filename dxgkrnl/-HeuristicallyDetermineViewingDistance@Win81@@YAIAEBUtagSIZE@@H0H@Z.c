/*
 * XREFs of ?HeuristicallyDetermineViewingDistance@Win81@@YAIAEBUtagSIZE@@H0H@Z @ 0x1C031C960
 * Callers:
 *     ?DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HPEAI@Z @ 0x1C031C49C (-DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HPEAI@Z.c)
 * Callees:
 *     ?IsNativeResolutionOnlyTVTiming@Win81@@YAHUtagSIZE@@H@Z @ 0x1C031CAE8 (-IsNativeResolutionOnlyTVTiming@Win81@@YAHUtagSIZE@@H@Z.c)
 *     ?IsNetbookResolution@Win81@@YAHUtagSIZE@@@Z @ 0x1C031CB50 (-IsNetbookResolution@Win81@@YAHUtagSIZE@@@Z.c)
 */

__int64 __fastcall Win81::HeuristicallyDetermineViewingDistance(
        Win81 *this,
        const struct tagSIZE *a2,
        Win81 **a3,
        const struct tagSIZE *a4)
{
  struct tagSIZE v5; // rdx
  unsigned int v6; // r10d
  int v7; // r11d

  if ( !(unsigned int)(10000LL
                     * (*(_DWORD *)this * *(_DWORD *)this + *((_DWORD *)this + 1) * *((_DWORD *)this + 1))
                     / 0xFC04uLL)
    || (unsigned int)Win81::IsNativeResolutionOnlyTVTiming(*a3, (struct tagSIZE)(unsigned int)a4, (int)a3) && !v7 )
  {
    return 840LL;
  }
  if ( v6 < 0x1FA4 )
    return 163LL;
  if ( v6 < 0x4204 )
    return (unsigned int)Win81::IsNetbookResolution(*a3, v5) != 0 ? 245 : 200;
  if ( v6 < 0x57E4 )
    return 245LL;
  if ( v6 < 0x7E90 )
    return v7 != 0 ? 245 : 280;
  if ( v6 > 0x15F90 && (*a3 == (Win81 *)0x43800000780LL || *a3 == (Win81 *)0x87000000F00LL) )
    return 840LL;
  else
    return 280LL;
}
