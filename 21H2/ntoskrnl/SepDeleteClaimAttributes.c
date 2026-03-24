/*
 * XREFs of SepDeleteClaimAttributes @ 0x140924FE8
 * Callers:
 *     SepSetTokenClaims @ 0x1405DC6A8 (SepSetTokenClaims.c)
 *     SepDeleteLogonSessionClaims @ 0x1406A58F0 (SepDeleteLogonSessionClaims.c)
 *     SepTokenDeleteMethod @ 0x1406E7CF0 (SepTokenDeleteMethod.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402F5290 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall SepDeleteClaimAttributes(PVOID P)
{
  _DWORD *v2; // rcx
  _DWORD *v3; // rcx
  void *v4; // rcx

  if ( P )
  {
    v2 = (_DWORD *)*((_QWORD *)P + 72);
    if ( v2 )
    {
      AuthzBasepFreeSecurityAttributesList(v2);
      ExFreePoolWithTag(*((PVOID *)P + 72), 0);
      *((_QWORD *)P + 72) = 0LL;
    }
    v3 = (_DWORD *)*((_QWORD *)P + 73);
    if ( v3 )
    {
      AuthzBasepFreeSecurityAttributesList(v3);
      ExFreePoolWithTag(*((PVOID *)P + 73), 0);
      *((_QWORD *)P + 73) = 0LL;
    }
    v4 = (void *)*((_QWORD *)P + 1);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0);
      *((_QWORD *)P + 1) = 0LL;
    }
    ExFreePoolWithTag(P, 0);
  }
}
