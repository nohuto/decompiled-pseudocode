/*
 * XREFs of ValidFilterExpression @ 0x1402DE3A4
 * Callers:
 *     ValidFilter @ 0x14076E8F0 (ValidFilter.c)
 * Callees:
 *     _PnpValidatePropertyData @ 0x140771CD0 (_PnpValidatePropertyData.c)
 */

_BOOL8 __fastcall ValidFilterExpression(__int64 a1)
{
  unsigned int v1; // r8d
  _BOOL8 result; // rax

  result = 0;
  if ( !*(_QWORD *)(a1 + 32) )
  {
    if ( *(_DWORD *)a1 == 1 )
      return 1;
    if ( *(_DWORD *)a1 == 65537 )
      return 1;
    v1 = *(_DWORD *)(a1 + 40);
    if ( v1 <= 1 )
      return 1;
    if ( (v1 <= 0x12 || v1 > 0x14)
      && *(_QWORD *)(a1 + 48)
      && !(unsigned int)PnpValidatePropertyData(*(PSECURITY_DESCRIPTOR *)(a1 + 48), *(_DWORD *)(a1 + 44)) )
    {
      return 1;
    }
  }
  return result;
}
