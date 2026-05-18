/*
 * XREFs of sub_18012BC40 @ 0x18012BC40
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void __fastcall sub_18012BC40()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_180208740 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_180208740 + 1) >= 0x1000 )
    {
      v0 = qword_180208728 - *(_QWORD *)(qword_180208728 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_180208740 + 40);
        JUMPOUT(0x18012BCA3LL);
      }
    }
    j_j__o_free();
  }
  unk_180208738 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(qword_180208728) = 0;
}
