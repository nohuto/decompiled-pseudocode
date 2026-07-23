/*
 * XREFs of RtlStringCbCopyNA @ 0x1403B45D4
 * Callers:
 *     EmpParseTargetRuleStringIndexList @ 0x140A47D1C (EmpParseTargetRuleStringIndexList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyNA(NTSTRSAFE_PSTR pszDest, size_t cbDest, STRSAFE_PCNZCH pszSrc, size_t cbToCopy)
{
  NTSTATUS v4; // r10d
  size_t v5; // r9
  signed __int64 v6; // r8
  char v7; // al
  NTSTRSAFE_PSTR v8; // rax

  v4 = 0;
  if ( cbDest - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 >= 0 )
  {
    if ( cbToCopy > 0x7FFFFFFE )
    {
      v4 = -1073741811;
      *pszDest = 0;
    }
    else
    {
      if ( cbDest )
      {
        v5 = cbToCopy - cbDest;
        v6 = pszSrc - pszDest;
        do
        {
          if ( !(v5 + cbDest) )
            break;
          v7 = pszDest[v6];
          if ( !v7 )
            break;
          *pszDest++ = v7;
          --cbDest;
        }
        while ( cbDest );
      }
      v8 = pszDest - 1;
      if ( cbDest )
        v8 = pszDest;
      v4 = cbDest == 0 ? 0x80000005 : 0;
      *v8 = 0;
    }
  }
  return v4;
}
