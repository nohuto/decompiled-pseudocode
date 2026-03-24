/*
 * XREFs of RtlQueryInformationAcl @ 0x1406D8860
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x1403226D4 (SepAppendAceToTokenDefaultDacl.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1403F82C4 (SepSetProcessTrustLabelAceForToken.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1406D8200 (SepAppendAceToTokenObjectAcl.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x1406D4640 (RtlFirstFreeAce.c)
 */

__int64 __fastcall RtlQueryInformationAcl(unsigned __int8 *a1, _DWORD *a2, unsigned int a3, int a4)
{
  int v4; // esi
  int v6; // ecx
  int v8; // r9d
  __int64 v9; // rcx
  int v10; // ecx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v6 = *a1;
  v12 = 0LL;
  if ( (unsigned __int8)(v6 - 2) <= 2u )
  {
    v8 = a4 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        return 3221225475LL;
      if ( a3 >= 0xC )
      {
        if ( RtlFirstFreeAce((__int64)a1, &v12) )
        {
          v9 = v12;
          *a2 = *((unsigned __int16 *)a1 + 2);
          if ( v9 )
          {
            v10 = v9 - (_DWORD)a1;
            a2[1] = v10;
            v4 = *((unsigned __int16 *)a1 + 1) - v10;
          }
          else
          {
            a2[1] = *((unsigned __int16 *)a1 + 1);
          }
          a2[2] = v4;
          return 0LL;
        }
        return 3221225485LL;
      }
    }
    else if ( a3 >= 4 )
    {
      *a2 = v6;
      return 0LL;
    }
    return 3221225507LL;
  }
  return 3221225485LL;
}
