/*
 * XREFs of UserIsInVideoPnpCallout @ 0x1C00CC4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall UserIsInVideoPnpCallout(__int64 a1)
{
  return *(_BYTE *)(SGDGetUserGdiSessionState(a1) + 20) != 0;
}
