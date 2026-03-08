/*
 * XREFs of SepSecureBootFindMatchingRegistryRule @ 0x1409CDDA0
 * Callers:
 *     SeQuerySecureBootPolicyValue @ 0x140861880 (SeQuerySecureBootPolicyValue.c)
 * Callees:
 *     SepEqualAsciiWideStringCaseInSensitive @ 0x1409CDAF0 (SepEqualAsciiWideStringCaseInSensitive.c)
 */

_DWORD *__fastcall SepSecureBootFindMatchingRegistryRule(__int64 a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  _DWORD *v3; // r11
  unsigned __int64 v6; // rbx
  _WORD *v7; // rcx
  _WORD *v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v3 = (_DWORD *)qword_140D1BC50;
  v10 = 0LL;
  v6 = qword_140D1BC50 + 16LL * *((unsigned __int16 *)qword_140D17BD0 + 19);
  while ( 1 )
  {
    if ( (unsigned __int64)v3 >= v6 )
      return 0LL;
    if ( *v3 == -2130706432 )
    {
      v7 = (_WORD *)(qword_140D1BC48 + (unsigned int)v3[1]);
      *((_QWORD *)&v10 + 1) = v7 + 1;
      LOWORD(v10) = *v7;
      WORD1(v10) = v10 + 2;
      if ( SepEqualAsciiWideStringCaseInSensitive(a2, (unsigned __int16 *)&v10) )
      {
        v8 = (_WORD *)(qword_140D1BC48 + (unsigned int)v3[2]);
        *((_QWORD *)&v10 + 1) = v8 + 1;
        LOWORD(v10) = *v8;
        WORD1(v10) = v10 + 2;
        if ( SepEqualAsciiWideStringCaseInSensitive(a3, (unsigned __int16 *)&v10) )
          break;
      }
    }
    v3 += 4;
  }
  return v3;
}
