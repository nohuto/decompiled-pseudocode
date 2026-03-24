/*
 * XREFs of SepRemoveAceFromTokenDefaultDacl @ 0x14031D324
 * Callers:
 *     NtSetInformationToken @ 0x1406ED790 (NtSetInformationToken.c)
 * Callees:
 *     RtlFindAceBySid @ 0x140347920 (RtlFindAceBySid.c)
 *     RtlDeleteAce @ 0x1406941B0 (RtlDeleteAce.c)
 */

void __fastcall SepRemoveAceFromTokenDefaultDacl(__int64 a1, __int64 a2)
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
