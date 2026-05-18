/*
 * XREFs of sub_1801305A0 @ 0x1801305A0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void __fastcall sub_1801305A0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18020C110 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18020C110 + 1) >= 0x1000 )
    {
      v0 = qword_18020C0F8 - *(_QWORD *)(qword_18020C0F8 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18020C110 + 40);
        JUMPOUT(0x180130603LL);
      }
    }
    j_j__o_free();
  }
  unk_18020C108 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(qword_18020C0F8) = 0;
}
