/*
 * XREFs of AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x14066C90C
 * Callers:
 *     AuthzBasepAddSecurityAttributeValues @ 0x14029739C (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x1402B87B0 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x14066C5AC (AuthzBasepDeleteSecurityAttributeValues.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x14066C990 (AuthzBasepRollbackSecurityAttributeChanges.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall AuthzBasepRemoveSecurityAttributeValueFromLists(_DWORD *a1, __int64 *a2, char a3)
{
  __int64 **result; // rax
  __int64 **v5; // r9
  __int64 ***v6; // r8
  __int64 *v7; // r8

  result = (__int64 **)*((unsigned int *)a2 + 8);
  if ( ((unsigned __int8)result & 2) != 0 )
  {
    result = (__int64 **)(a2 + 2);
    v5 = (__int64 **)a2[2];
    if ( v5[1] != a2 + 2 )
      goto LABEL_14;
    v6 = (__int64 ***)a2[3];
    if ( *v6 != result )
      goto LABEL_14;
    *v6 = v5;
    v5[1] = (__int64 *)v6;
    *((_DWORD *)a2 + 8) &= ~2u;
    if ( a1 )
      --a1[22];
  }
  if ( !a3 )
    return result;
  result = (__int64 **)*((unsigned int *)a2 + 8);
  if ( ((unsigned __int8)result & 1) == 0 )
    return result;
  v7 = (__int64 *)*a2;
  if ( *(__int64 **)(*a2 + 8) != a2 || (result = (__int64 **)a2[1], *result != a2) )
LABEL_14:
    __fastfail(3u);
  *result = v7;
  v7[1] = (__int64)result;
  *((_DWORD *)a2 + 8) &= ~1u;
  if ( a1 )
  {
    --a1[15];
    result = (__int64 **)*((unsigned int *)a2 + 8);
    if ( ((unsigned __int8)result & 4) != 0 )
      --a1[16];
  }
  return result;
}
