/*
 * XREFs of AuthzBasepGetNextValue @ 0x1403656C8
 * Callers:
 *     AuthzBasepValueInSet @ 0x14036559C (AuthzBasepValueInSet.c)
 *     AuthzBasepEvaluateSetRelationship @ 0x1403663B8 (AuthzBasepEvaluateSetRelationship.c)
 *     AuthzBasepDeviceMemberOf @ 0x14066D2CC (AuthzBasepDeviceMemberOf.c)
 *     AuthzBasepMemberOf @ 0x14066D410 (AuthzBasepMemberOf.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1402472F0 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepGetConstantOperand @ 0x1402E9A60 (AuthzBasepGetConstantOperand.c)
 */

__int64 __fastcall AuthzBasepGetNextValue(__int64 a1, __int64 a2)
{
  unsigned int ConstantOperand; // ecx
  _BYTE *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v9; // edx
  int v10; // [rsp+30h] [rbp+8h] BYREF

  ConstantOperand = 0;
  v10 = 0;
  v5 = (_BYTE *)(a1 + 4);
  v6 = *(unsigned int *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 12) == 1 )
  {
    if ( *v5 )
    {
      v9 = *(_DWORD *)(a1 + 24);
      if ( (unsigned int)v6 < v9 )
      {
        ConstantOperand = AuthzBasepGetConstantOperand(
                            (unsigned __int8 *)(*(_QWORD *)(a1 + 32) + v6),
                            v9 - (unsigned int)v6,
                            a2,
                            &v10);
        if ( *(_BYTE *)(a2 + 4) )
          return (unsigned int)-1073741406;
        else
          *(_DWORD *)(a1 + 8) += v10;
        return ConstantOperand;
      }
    }
    else if ( !(_DWORD)v6 )
    {
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a1 + 24);
      *(_OWORD *)a2 = *(_OWORD *)a1;
      *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 16);
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
      return ConstantOperand;
    }
    return (unsigned int)-2147483622;
  }
  if ( (_DWORD)v6 || !*(_DWORD *)v5 )
  {
    if ( (unsigned int)v6 >= *(_DWORD *)v5 )
      return (_DWORD)v6 != 0 ? -2147483622 : -1073741275;
    ConstantOperand = AuthzBasepQuerySecurityAttributeAndValues(*(_QWORD *)(a1 + 16));
    *(_WORD *)a2 = *(_WORD *)a1;
    *(_BYTE *)(a2 + 4) = *v5;
    *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 24);
    v7 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a2 + 32) = 0LL;
    *(_QWORD *)(a2 + 16) = v7;
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 12);
  }
  else
  {
    *(_OWORD *)a2 = *(_OWORD *)a1;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 16);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
  }
  ++*(_DWORD *)(a1 + 8);
  return ConstantOperand;
}
