/*
 * XREFs of sub_180130450 @ 0x180130450
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void __fastcall sub_180130450()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18020C450 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18020C450 + 1) >= 0x1000 )
    {
      v0 = qword_18020C438 - *(_QWORD *)(qword_18020C438 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18020C450 + 40);
        JUMPOUT(0x1801304B3LL);
      }
    }
    j_j__o_free();
  }
  unk_18020C448 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(qword_18020C438) = 0;
}
