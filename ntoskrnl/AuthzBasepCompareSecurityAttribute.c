/*
 * XREFs of AuthzBasepCompareSecurityAttribute @ 0x140776900
 * Callers:
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x140776804 (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 *     AuthzBasepCompareSecurityAttributesInformation @ 0x140A57160 (AuthzBasepCompareSecurityAttributesInformation.c)
 * Callees:
 *     AuthzBasepFindSecurityAttributeValue @ 0x140297C74 (AuthzBasepFindSecurityAttributeValue.c)
 */

char __fastcall AuthzBasepCompareSecurityAttribute(__int64 a1, __int64 a2)
{
  char v2; // si
  __int64 v5; // r15
  _QWORD *v6; // r14
  _QWORD *i; // rbx

  v2 = 0;
  v5 = 0LL;
  if ( *(_DWORD *)(a1 + 60) == *(_DWORD *)(a2 + 60)
    && *(_WORD *)(a1 + 48) == *(_WORD *)(a2 + 48)
    && *(_DWORD *)(a1 + 52) == *(_DWORD *)(a2 + 52) )
  {
    v6 = (_QWORD *)(a1 + 72);
    for ( i = *(_QWORD **)(a1 + 72); ; i = (_QWORD *)*i )
    {
      if ( i == v6 )
        return 1;
      switch ( *(_WORD *)(a1 + 48) )
      {
        case 1:
        case 2:
          goto LABEL_14;
        case 3:
        case 4:
        case 5:
LABEL_9:
          v5 = (__int64)(i + 5);
          break;
        case 6:
LABEL_14:
          v5 = i[5];
          break;
        case 0x10:
          goto LABEL_9;
      }
      if ( !AuthzBasepFindSecurityAttributeValue(a2, v5, *(_WORD *)(a1 + 48)) )
        return v2;
    }
  }
  return v2;
}
