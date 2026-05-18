/*
 * XREFs of sub_180131450 @ 0x180131450
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void __fastcall sub_180131450()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18021A3E8 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18021A3E8 + 1) >= 0x1000 )
    {
      v0 = *(_QWORD *)(qword_18021A3D0 - 8);
      if ( (unsigned __int64)(qword_18021A3D0 - v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18021A3E8 + 40);
        __debugbreak();
      }
    }
    j_j__o_free();
  }
  unk_18021A3E0 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(qword_18021A3D0) = 0;
}
