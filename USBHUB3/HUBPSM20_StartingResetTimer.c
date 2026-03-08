/*
 * XREFs of HUBPSM20_StartingResetTimer @ 0x1C00126B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM20_StartingResetTimer(__int64 a1)
{
  ExSetTimer(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 1312LL), -30000000LL, 0LL, 0LL);
  return 3013LL;
}
