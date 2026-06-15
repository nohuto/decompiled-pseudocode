/*
 * XREFs of sub_180073A60 @ 0x180073A60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180072EE8 @ 0x180072EE8 (sub_180072EE8.c)
 *     sub_18010C9CC @ 0x18010C9CC (sub_18010C9CC.c)
 */

__int64 __fastcall sub_180073A60(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = sub_180072EE8((char **)(a1 + 16), a2, a3);
  v4 = v3;
  if ( v3 < 0 )
    sub_18010C9CC((unsigned int)v3);
  return v4;
}
