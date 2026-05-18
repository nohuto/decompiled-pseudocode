/*
 * XREFs of sub_1800317CC @ 0x1800317CC
 * Callers:
 *     sub_18002DA20 @ 0x18002DA20 (sub_18002DA20.c)
 *     sub_18003185C @ 0x18003185C (sub_18003185C.c)
 *     sub_180060EB4 @ 0x180060EB4 (sub_180060EB4.c)
 *     sub_1800F0E04 @ 0x1800F0E04 (sub_1800F0E04.c)
 *     sub_1800FD7F8 @ 0x1800FD7F8 (sub_1800FD7F8.c)
 *     sub_180100F48 @ 0x180100F48 (sub_180100F48.c)
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800317CC(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
  {
    v9 = (a1[2] - v6) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v9 >= 0x1000 )
    {
      v10 = *(_QWORD *)(v6 - 8);
      v11 = v9 + 39;
      v12 = v6 - v10;
      if ( (unsigned __int64)(v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, v11);
        JUMPOUT(0x180031859LL);
      }
      v6 = v10;
    }
    result = j_j__o_free(v6);
  }
  *a1 = a2;
  a1[2] = a2 + 16 * a4;
  a1[1] = a2 + 16 * a3;
  return result;
}
