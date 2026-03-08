/*
 * XREFs of SepDereferenceSidValuesBlock @ 0x1409CC964
 * Callers:
 *     SepDeleteLogonSessionSidValues @ 0x1409CC8AC (SepDeleteLogonSessionSidValues.c)
 *     SepDeleteTokenUserAndGroups @ 0x1409CC8DC (SepDeleteTokenUserAndGroups.c)
 *     SepSetTokenUserAndGroups @ 0x1409CCB0C (SepSetTokenUserAndGroups.c)
 * Callees:
 *     SepLogTokenSidManagement @ 0x1409C6C70 (SepLogTokenSidManagement.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall SepDereferenceSidValuesBlock(volatile signed __int64 *P, __int64 a2)
{
  signed __int64 v3; // rax
  bool v4; // cc
  signed __int64 v5; // rax

  if ( P )
  {
    v3 = _InterlockedExchangeAdd64(P + 1, 0xFFFFFFFFFFFFFFFFuLL);
    v4 = v3 <= 1;
    v5 = v3 - 1;
    if ( v4 )
    {
      if ( v5 )
        __fastfail(0xEu);
      SepLogTokenSidManagement(5, (__int64)P, 0LL, a2);
      ExFreePoolWithTag((PVOID)P, 0);
    }
  }
}
