/*
 * XREFs of GreConsoleShadowStop @ 0x1C02DEBE4
 * Callers:
 *     xxxRemoteConsoleShadowStop @ 0x1C0206924 (xxxRemoteConsoleShadowStop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreConsoleShadowStop(_QWORD *a1)
{
  _QWORD *v2; // rdx

  v2 = *(_QWORD **)(SGDGetSessionState(a1) + 32);
  a1[1] = v2[2527];
  a1[2] = v2[2528];
  a1[4] = v2[2530];
  a1[3] = v2[2529];
  return 1LL;
}
