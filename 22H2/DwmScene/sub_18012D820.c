/*
 * XREFs of sub_18012D820 @ 0x18012D820
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void __fastcall sub_18012D820()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18020BDD0 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18020BDD0 + 1) >= 0x1000 )
    {
      v0 = qword_18020BDB8 - *(_QWORD *)(qword_18020BDB8 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18020BDD0 + 40);
        JUMPOUT(0x18012D883LL);
      }
    }
    j_j__o_free();
  }
  unk_18020BDC8 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(qword_18020BDB8) = 0;
}
