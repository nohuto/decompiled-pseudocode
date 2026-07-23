/*
 * XREFs of PspGetJobProperty @ 0x140210754
 * Callers:
 *     PsGetJobProperty @ 0x1402106F0 (PsGetJobProperty.c)
 * Callees:
 *     PspGetProperty @ 0x1402107BC (PspGetProperty.c)
 */

__int64 __fastcall PspGetJobProperty(__int64 a1, __int64 a2, _QWORD *a3)
{
  int Property; // ecx
  __int64 v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+38h] [rbp-10h] BYREF

  v8 = 0LL;
  v7 = a2;
  Property = -1073741275;
  if ( a1 )
  {
    while ( 1 )
    {
      Property = PspGetProperty(a1 + 1280, a2, &v8);
      if ( Property >= 0 )
        break;
      a1 = *(_QWORD *)(a1 + 1072);
      if ( !a1 )
        return (unsigned int)Property;
      a2 = v7;
    }
    *a3 = v8;
  }
  return (unsigned int)Property;
}
