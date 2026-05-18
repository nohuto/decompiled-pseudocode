/*
 * XREFs of sub_180131300 @ 0x180131300
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void __fastcall sub_180131300()
{
  char *v0; // rcx

  if ( *((_QWORD *)&xmmword_18020CB68 + 1) >= 0x10uLL )
  {
    if ( (unsigned __int64)(*((_QWORD *)&xmmword_18020CB68 + 1) + 1LL) >= 0x1000 )
    {
      v0 = (char *)Buf2[0] - *((_QWORD *)Buf2[0] - 1);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, *((_QWORD *)&xmmword_18020CB68 + 1) + 40LL);
        JUMPOUT(0x180131363LL);
      }
    }
    j_j__o_free();
  }
  xmmword_18020CB68 = (__int128)_mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(Buf2[0]) = 0;
}
