/*
 * XREFs of CmpIsValueTombstone @ 0x140695E60
 * Callers:
 *     CmSetValueKey @ 0x1406DD4B0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1406DF334 (CmDeleteValueKey.c)
 *     CmpValueEnumStackAdvance @ 0x14072AB14 (CmpValueEnumStackAdvance.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14086C598 (CmQueryMultipleValueForLayeredKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsValueTombstone(__int64 a1, __int64 a2)
{
  return (*(_DWORD *)(a1 + 160) & 0x80000) != 0 && (*(_BYTE *)(a2 + 16) & 2) != 0;
}
