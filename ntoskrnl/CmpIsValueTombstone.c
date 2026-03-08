/*
 * XREFs of CmpIsValueTombstone @ 0x1406BB868
 * Callers:
 *     CmDeleteValueKey @ 0x1406B9764 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140A11200 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpValueEnumStackAdvance @ 0x140A228A4 (CmpValueEnumStackAdvance.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsValueTombstone(__int64 a1, __int64 a2)
{
  return (*(_DWORD *)(a1 + 160) & 0x80000) != 0 && (*(_BYTE *)(a2 + 16) & 2) != 0;
}
