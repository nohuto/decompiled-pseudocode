/*
 * XREFs of sub_18013257C @ 0x18013257C
 * Callers:
 *     sub_1800693EC @ 0x1800693EC (sub_1800693EC.c)
 * Callees:
 *     _o_free @ 0x18006AB44 (_o_free.c)
 */

__int64 __fastcall sub_18013257C(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)a1;
  if ( v2 )
  {
    result = o_free(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  return result;
}
