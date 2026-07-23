/*
 * XREFs of SepModifyTokenPolicyCounter @ 0x14091CCF0
 * Callers:
 *     NtSetInformationToken @ 0x140694530 (NtSetInformationToken.c)
 *     SepFilterToken @ 0x1406CA87C (SepFilterToken.c)
 *     SepTokenDeleteMethod @ 0x1406FF0D0 (SepTokenDeleteMethod.c)
 *     SepDuplicateToken @ 0x14071B1E0 (SepDuplicateToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepModifyTokenPolicyCounter(__int64 a1, char a2)
{
  volatile signed __int32 *v2; // r9
  bool v3; // cf
  int v4; // r11d
  __int64 *v5; // rdx
  int v6; // r8d
  __int64 v7; // rdi
  __int64 result; // rax
  char v9; // si
  unsigned __int16 v10; // r10

  v2 = SepTokenPolicyCounterByCategory;
  v3 = a2 != 0;
  v4 = 0;
  v5 = AdtpPerCategoryCount;
  v6 = v3 ? 2 : 0;
  v7 = 9LL;
  do
  {
    LOWORD(result) = *(_WORD *)v5;
    v9 = 0;
    v10 = 0;
    if ( *(_WORD *)v5 )
    {
      do
      {
        if ( ((*(_BYTE *)(((unsigned __int64)(v4 + (unsigned int)v10) >> 1) + a1) >> (4 * ((v4 + v10) & 1))) & 0xF) != 0 )
        {
          _InterlockedExchangeAdd(&SepTokenPolicyCounter[v4 + v10], v6 - 1);
          v9 = 1;
        }
        LOWORD(result) = *(_WORD *)v5;
        ++v10;
      }
      while ( v10 < *(_WORD *)v5 );
      if ( v9 )
      {
        _InterlockedExchangeAdd(v2, v6 - 1);
        LOWORD(result) = *(_WORD *)v5;
      }
    }
    result = (unsigned __int16)result;
    ++v2;
    v4 += (unsigned __int16)result;
    v5 = (__int64 *)((char *)v5 + 2);
    --v7;
  }
  while ( v7 );
  return result;
}
