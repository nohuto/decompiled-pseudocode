/*
 * XREFs of PopUpdateSingleThreadHeteroPolicies @ 0x1408F1660
 * Callers:
 *     <none>
 * Callees:
 *     KiSetHeteroPolicyThread @ 0x1405205A4 (KiSetHeteroPolicyThread.c)
 */

__int64 __fastcall PopUpdateSingleThreadHeteroPolicies(__int64 a1, __int64 a2)
{
  char v2; // al

  v2 = *(_BYTE *)(a2 + 126);
  if ( v2 >= 0 && (v2 & 0x7F) == 8 )
    KiSetHeteroPolicyThread(a2, 8LL, 1LL, (_DWORD *)1);
  return 0LL;
}
