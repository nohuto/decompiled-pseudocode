/*
 * XREFs of SeQuerySecureBootPolicyValue @ 0x140861880
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     SepSecureBootFindMatchingRegistryRule @ 0x1409CDDA0 (SepSecureBootFindMatchingRegistryRule.c)
 *     SepSecureBootGetPolicyValueByRef @ 0x1409CDED0 (SepSecureBootGetPolicyValueByRef.c)
 */

__int64 __fastcall SeQuerySecureBootPolicyValue(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        _DWORD *a6)
{
  int PolicyValueByRef; // ebx
  __int64 MatchingRegistryRule; // rax
  size_t v11; // rdx
  size_t Size; // [rsp+20h] [rbp-18h] BYREF
  void *Src; // [rsp+28h] [rbp-10h] BYREF

  Src = 0LL;
  LODWORD(Size) = 0;
  if ( qword_140D17BD0 )
  {
    MatchingRegistryRule = SepSecureBootFindMatchingRegistryRule(a1, a1, a2);
    if ( MatchingRegistryRule )
    {
      PolicyValueByRef = SepSecureBootGetPolicyValueByRef(
                           qword_140D1BC48 + *(unsigned int *)(MatchingRegistryRule + 12),
                           a3,
                           &Src,
                           &Size);
      if ( PolicyValueByRef >= 0 )
      {
        v11 = (unsigned int)Size;
        *a6 = Size;
        if ( a4 )
        {
          if ( a5 >= (unsigned int)v11 )
            memmove(a4, Src, v11);
          else
            return (unsigned int)-1073741789;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741772;
    }
  }
  else
  {
    return (unsigned int)-2143092730;
  }
  return (unsigned int)PolicyValueByRef;
}
