/*
 * XREFs of sub_180132100 @ 0x180132100
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void __fastcall sub_180132100()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18020CF70 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18020CF70 + 1) >= 0x1000 )
    {
      v0 = *(_QWORD *)aFont - *(_QWORD *)(*(_QWORD *)aFont - 8LL);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18020CF70 + 40);
        JUMPOUT(0x180132163LL);
      }
    }
    j_j__o_free();
  }
  unk_18020CF68 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  aFont[0] = 0;
}
