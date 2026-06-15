/*
 * XREFs of sub_180113F60 @ 0x180113F60
 * Callers:
 *     sub_180113F9C @ 0x180113F9C (sub_180113F9C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180113F60(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v5; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v5 = 0;
  if ( (int)MMDevAPI_16(a1, a2, a3, &v5) >= 0 )
    return v5 != 0;
  return v3;
}
