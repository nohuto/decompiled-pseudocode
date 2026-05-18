/*
 * XREFs of sub_1801313E0 @ 0x1801313E0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void __fastcall sub_1801313E0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18021A3B8 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18021A3B8 + 1) >= 0x1000 )
    {
      v0 = *(_QWORD *)(qword_18021A3A0 - 8);
      if ( (unsigned __int64)(qword_18021A3A0 - v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18021A3B8 + 40);
        __debugbreak();
      }
    }
    j_j__o_free();
  }
  unk_18021A3B0 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(qword_18021A3A0) = 0;
}
