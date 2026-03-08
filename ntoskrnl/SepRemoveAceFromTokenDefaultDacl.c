/*
 * XREFs of SepRemoveAceFromTokenDefaultDacl @ 0x1402BECA4
 * Callers:
 *     NtSetInformationToken @ 0x140741E70 (NtSetInformationToken.c)
 * Callees:
 *     RtlFindAceBySid @ 0x140245DF0 (RtlFindAceBySid.c)
 *     RtlDeleteAce @ 0x1407444E0 (RtlDeleteAce.c)
 */

void __fastcall SepRemoveAceFromTokenDefaultDacl(__int64 a1, _WORD *a2)
{
  ACL *v2; // rbx
  ULONG AceIndex; // [rsp+30h] [rbp+8h] BYREF

  AceIndex = 0;
  v2 = *(ACL **)(a1 + 184);
  if ( v2 )
  {
    if ( RtlFindAceBySid(*(_QWORD *)(a1 + 184), a2, &AceIndex) )
      RtlDeleteAce(v2, AceIndex);
  }
}
