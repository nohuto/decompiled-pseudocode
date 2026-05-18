/*
 * XREFs of sub_18012BB60 @ 0x18012BB60
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void __fastcall sub_18012BB60()
{
  char *v0; // rcx

  if ( *((_QWORD *)&xmmword_1802085F8 + 1) >= 0x10uLL )
  {
    if ( (unsigned __int64)(*((_QWORD *)&xmmword_1802085F8 + 1) + 1LL) >= 0x1000 )
    {
      v0 = (char *)Src - *((_QWORD *)Src - 1);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, *((_QWORD *)&xmmword_1802085F8 + 1) + 40LL);
        JUMPOUT(0x18012BBC3LL);
      }
    }
    j_j__o_free();
  }
  xmmword_1802085F8 = (__int128)_mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(Src) = 0;
}
