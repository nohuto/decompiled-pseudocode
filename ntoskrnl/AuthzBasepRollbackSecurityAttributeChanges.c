/*
 * XREFs of AuthzBasepRollbackSecurityAttributeChanges @ 0x14066C990
 * Callers:
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x140297A30 (AuthzBasepFinaliseSecurityAttributesList.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributeValues @ 0x1402B87B0 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepRemoveSecurityAttributeFromLists @ 0x14066C88C (AuthzBasepRemoveSecurityAttributeFromLists.c)
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x14066C90C (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

bool __fastcall AuthzBasepRollbackSecurityAttributeChanges(_DWORD *a1, __int64 a2)
{
  char v2; // bl
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  _QWORD *v8; // r14
  _QWORD *v9; // rsi
  int v10; // eax

  v2 = 1;
  AuthzBasepRemoveSecurityAttributeFromLists(a1, (__int64 *)a2, 0, 1);
  v7 = *(_DWORD *)(v4 + 56);
  if ( (v7 & 4) != 0 )
  {
    if ( (v7 & 1) == 0 )
    {
      AuthzBasepFreeSecurityAttributeValues(v4, 0, v5, v6);
      return v2;
    }
    *(_DWORD *)(v4 + 56) = v7 & 0xFFFFFFFB;
    AuthzBasepFreeSecurityAttributeValues(v4, 1, v5, v6);
  }
  v8 = (_QWORD *)(a2 + 96);
  while ( 1 )
  {
    v9 = (_QWORD *)*v8;
    if ( (_QWORD *)*v8 == v8 )
      break;
    AuthzBasepRemoveSecurityAttributeValueFromLists((_DWORD *)a2, v9 - 2, 0);
    v10 = *((_DWORD *)v9 + 4);
    if ( (v10 & 4) != 0 )
    {
      --*(_DWORD *)(a2 + 64);
      *((_DWORD *)v9 + 4) &= ~4u;
      v10 = *((_DWORD *)v9 + 4);
    }
    if ( (v10 & 1) == 0 )
      ExFreePoolWithTag(v9 - 2, 0);
  }
  return (*(_BYTE *)(a2 + 56) & 1) == 0;
}
