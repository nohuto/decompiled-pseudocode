/*
 * XREFs of sub_1800B7B50 @ 0x1800B7B50
 * Callers:
 *     sub_180077000 @ 0x180077000 (sub_180077000.c)
 *     sub_18007A279 @ 0x18007A279 (sub_18007A279.c)
 *     sub_1800B9CE2 @ 0x1800B9CE2 (sub_1800B9CE2.c)
 *     sub_1800EABAD @ 0x1800EABAD (sub_1800EABAD.c)
 *     sub_1800EC0B2 @ 0x1800EC0B2 (sub_1800EC0B2.c)
 * Callees:
 *     sub_18002B930 @ 0x18002B930 (sub_18002B930.c)
 */

__int64 __fastcall sub_1800B7B50(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18002B930(v1);
  return result;
}
