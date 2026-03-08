/*
 * XREFs of WheapIsNonHestErrorSource @ 0x14037D750
 * Callers:
 *     WheaAddErrorSource @ 0x14080C450 (WheaAddErrorSource.c)
 *     WheaRemoveErrorSource @ 0x140A04C80 (WheaRemoveErrorSource.c)
 * Callees:
 *     <none>
 */

bool __fastcall WheapIsNonHestErrorSource(__int64 a1)
{
  unsigned int v1; // eax
  int v2; // ecx
  bool result; // al

  result = (*(_BYTE *)(a1 + 36) & 1) != 0
        || (v1 = *(_DWORD *)(a1 + 8), v1 <= 0xD) && (v2 = 12592, _bittest(&v2, v1))
        || (int)v1 >= 14;
  return result;
}
