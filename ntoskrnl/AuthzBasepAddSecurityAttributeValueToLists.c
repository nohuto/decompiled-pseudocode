/*
 * XREFs of AuthzBasepAddSecurityAttributeValueToLists @ 0x140297C28
 * Callers:
 *     AuthzBasepAddSecurityAttributeValues @ 0x14029739C (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1402976E0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepDeleteAllSecurityAttributeValues @ 0x14066C504 (AuthzBasepDeleteAllSecurityAttributeValues.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x14066C5AC (AuthzBasepDeleteSecurityAttributeValues.c)
 * Callees:
 *     <none>
 */

void __fastcall AuthzBasepAddSecurityAttributeValueToLists(__int64 a1, __int64 a2, char a3, char a4)
{
  _QWORD *v4; // r9
  _QWORD *v5; // rax
  _QWORD *v6; // r8

  if ( a4 && (*(_DWORD *)(a2 + 32) & 2) == 0 )
  {
    v4 = *(_QWORD **)(a1 + 104);
    v5 = (_QWORD *)(a2 + 16);
    if ( *v4 != a1 + 96 )
      goto FatalListEntryError_7;
    *v5 = a1 + 96;
    *(_QWORD *)(a2 + 24) = v4;
    *v4 = v5;
    *(_QWORD *)(a1 + 104) = v5;
    *(_DWORD *)(a2 + 32) |= 2u;
    ++*(_DWORD *)(a1 + 88);
  }
  if ( a3 && (*(_DWORD *)(a2 + 32) & 1) == 0 )
  {
    v6 = *(_QWORD **)(a1 + 80);
    if ( *v6 == a1 + 72 )
    {
      *(_QWORD *)a2 = a1 + 72;
      *(_QWORD *)(a2 + 8) = v6;
      *v6 = a2;
      *(_QWORD *)(a1 + 80) = a2;
      *(_DWORD *)(a2 + 32) |= 1u;
      ++*(_DWORD *)(a1 + 60);
      return;
    }
FatalListEntryError_7:
    __fastfail(3u);
  }
}
