/*
 * XREFs of sub_180132950 @ 0x180132950
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void __fastcall sub_180132950()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18020D330 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18020D330 + 1) >= 0x1000 )
    {
      v0 = qword_18020D318 - *(_QWORD *)(qword_18020D318 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18020D330 + 40);
        JUMPOUT(0x1801329B3LL);
      }
    }
    j_j__o_free();
  }
  unk_18020D328 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(qword_18020D318) = 0;
}
