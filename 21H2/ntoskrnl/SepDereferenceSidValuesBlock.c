/*
 * XREFs of SepDereferenceSidValuesBlock @ 0x140923060
 * Callers:
 *     SepDeleteLogonSessionSidValues @ 0x140922FA8 (SepDeleteLogonSessionSidValues.c)
 *     SepDeleteTokenUserAndGroups @ 0x140922FD8 (SepDeleteTokenUserAndGroups.c)
 *     SepSetTokenUserAndGroups @ 0x1409231BC (SepSetTokenUserAndGroups.c)
 * Callees:
 *     SepLogTokenSidManagement @ 0x14091CE74 (SepLogTokenSidManagement.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
