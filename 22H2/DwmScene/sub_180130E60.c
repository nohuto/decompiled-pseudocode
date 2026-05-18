/*
 * XREFs of sub_180130E60 @ 0x180130E60
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void __fastcall sub_180130E60()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18020C430 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18020C430 + 1) >= 0x1000 )
    {
      v0 = qword_18020C418 - *(_QWORD *)(qword_18020C418 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18020C430 + 40);
        JUMPOUT(0x180130EC3LL);
      }
    }
    j_j__o_free();
  }
  unk_18020C428 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(qword_18020C418) = 0;
}
