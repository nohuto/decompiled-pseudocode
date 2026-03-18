/*
 * XREFs of CmRetrieveExtraParameter @ 0x14068E6DC
 * Callers:
 *     VrpPostOpenOrCreate @ 0x14068DF0C (VrpPostOpenOrCreate.c)
 * Callees:
 *     CmpFindExtraParameterInBlock @ 0x14068E720 (CmpFindExtraParameterInBlock.c)
 */

__int64 __fastcall CmRetrieveExtraParameter(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // r11
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  result = CmpFindExtraParameterInBlock(a1, &VRP_ORIGINAL_KEY_NAME_PARAMETER_GUID, &v3);
  if ( (int)result >= 0 )
  {
    *v2 = v3 + 48;
    return 0LL;
  }
  return result;
}
