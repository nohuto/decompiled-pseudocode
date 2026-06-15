/*
 * XREFs of sub_180073A90 @ 0x180073A90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180073104 @ 0x180073104 (sub_180073104.c)
 *     sub_18010C9CC @ 0x18010C9CC (sub_18010C9CC.c)
 */

__int64 __fastcall sub_180073A90(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = sub_180073104((char **)(a1 + 16), a2, a3);
  v4 = v3;
  if ( v3 < 0 )
    sub_18010C9CC((unsigned int)v3);
  return v4;
}
