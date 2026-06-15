/*
 * XREFs of sub_180009DE0 @ 0x180009DE0
 * Callers:
 *     sub_180008FF0 @ 0x180008FF0 (sub_180008FF0.c)
 *     sub_180036AC8 @ 0x180036AC8 (sub_180036AC8.c)
 *     sub_180038C20 @ 0x180038C20 (sub_180038C20.c)
 *     sub_18005FE78 @ 0x18005FE78 (sub_18005FE78.c)
 *     sub_180073444 @ 0x180073444 (sub_180073444.c)
 *     sub_180073B78 @ 0x180073B78 (sub_180073B78.c)
 *     sub_180073BA4 @ 0x180073BA4 (sub_180073BA4.c)
 *     sub_180073D04 @ 0x180073D04 (sub_180073D04.c)
 *     sub_180074024 @ 0x180074024 (sub_180074024.c)
 *     sub_180136264 @ 0x180136264 (sub_180136264.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180009DE0(__int64 a1)
{
  int v1; // eax
  char v2; // cl

  v1 = *(_DWORD *)(a1 + 192);
  v2 = 1;
  if ( v1 != 5 )
    return (unsigned int)(v1 - 11) <= 1;
  return v2;
}
