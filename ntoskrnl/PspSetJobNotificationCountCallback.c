/*
 * XREFs of PspSetJobNotificationCountCallback @ 0x14079C010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSetJobNotificationCountCallback(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // eax

  v2 = *(_DWORD *)(a1 + 1064);
  v3 = v2 - 1;
  v4 = v2 + 1;
  if ( !*a2 )
    v4 = v3;
  *(_DWORD *)(a1 + 1064) = v4;
  return 0LL;
}
