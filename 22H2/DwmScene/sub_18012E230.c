/*
 * XREFs of sub_18012E230 @ 0x18012E230
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void __fastcall sub_18012E230()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18020B7D0 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18020B7D0 + 1) >= 0x1000 )
    {
      v0 = qword_18020B7B8 - *(_QWORD *)(qword_18020B7B8 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18020B7D0 + 40);
        JUMPOUT(0x18012E293LL);
      }
    }
    j_j__o_free();
  }
  unk_18020B7C8 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(qword_18020B7B8) = 0;
}
