/*
 * XREFs of sub_1800E5690 @ 0x1800E5690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800E5690(__int64 a1)
{
  int v1; // edx
  bool result; // al

  v1 = *(_DWORD *)(a1 + 92);
  result = 0;
  if ( v1 )
    return v1 == *(_DWORD *)(a1 + 80);
  return result;
}
