/*
 * XREFs of sub_180130C30 @ 0x180130C30
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void __fastcall sub_180130C30()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18020C370 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18020C370 + 1) >= 0x1000 )
    {
      v0 = qword_18020C358 - *(_QWORD *)(qword_18020C358 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18020C370 + 40);
        JUMPOUT(0x180130C93LL);
      }
    }
    j_j__o_free();
  }
  unk_18020C368 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(qword_18020C358) = 0;
}
