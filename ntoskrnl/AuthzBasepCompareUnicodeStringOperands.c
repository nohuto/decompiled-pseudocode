/*
 * XREFs of AuthzBasepCompareUnicodeStringOperands @ 0x1403657AC
 * Callers:
 *     AuthzBasepValueInSet @ 0x14036559C (AuthzBasepValueInSet.c)
 *     AuthzBasepEvaluateExpression @ 0x140366314 (AuthzBasepEvaluateExpression.c)
 * Callees:
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1402F707C (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x140365960 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     AuthzBasepGetOperandStringCaseForEvaluation @ 0x140365AE0 (AuthzBasepGetOperandStringCaseForEvaluation.c)
 *     RtlIsNameInExpression @ 0x140365B20 (RtlIsNameInExpression.c)
 *     AuthzBasepCompareUnicodeStringCaseSensitive @ 0x14066D11C (AuthzBasepCompareUnicodeStringCaseSensitive.c)
 *     RtlCompareUnicodeString @ 0x1406EA3B0 (RtlCompareUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepCompareUnicodeStringOperands(unsigned __int8 a1, __int64 a2, _DWORD *a3)
{
  int v5; // esi
  wchar_t **p_Buffer; // rax
  __int64 v7; // rcx
  int OperandStringCaseForEvaluation; // eax
  int v9; // r13d
  UNICODE_STRING *p_Name; // rdx
  __int64 v11; // r12
  bool v12; // zf
  UNICODE_STRING *v13; // rdx
  UNICODE_STRING *p_Expression; // rcx
  int IsNameInExpression; // ecx
  unsigned int v16; // r14d
  __int64 v17; // rdi
  wchar_t **v18; // rsi
  unsigned int v20; // eax
  BOOL v21; // eax
  unsigned __int8 v22; // al
  _WORD v23[2]; // [rsp+20h] [rbp-48h] BYREF
  int v24; // [rsp+24h] [rbp-44h]
  UNICODE_STRING *v25; // [rsp+28h] [rbp-40h]
  UNICODE_STRING Name; // [rsp+30h] [rbp-38h] BYREF
  UNICODE_STRING Expression; // [rsp+40h] [rbp-28h] BYREF
  char v28; // [rsp+88h] [rbp+20h] BYREF

  v5 = a1;
  v23[0] = 0;
  v28 = 0;
  p_Buffer = &Name.Buffer;
  v7 = 2LL;
  do
  {
    *p_Buffer = 0LL;
    p_Buffer += 2;
    --v7;
  }
  while ( v7 );
  *a3 = 0;
  OperandStringCaseForEvaluation = AuthzBasepGetOperandStringCaseForEvaluation(a2, &v28);
  v24 = OperandStringCaseForEvaluation;
  if ( OperandStringCaseForEvaluation < 0 )
  {
LABEL_25:
    *a3 = -1;
    v16 = OperandStringCaseForEvaluation;
    goto LABEL_19;
  }
  v9 = 0;
  p_Name = &Name;
  v25 = &Name;
  v11 = a2 + 16;
  do
  {
    if ( *(_DWORD *)(v11 - 4) == 1 )
    {
      v12 = v28 == 0;
    }
    else
    {
      v12 = v28 == 0;
      if ( v28 )
      {
        *p_Name = *(UNICODE_STRING *)*(_QWORD *)(*(_QWORD *)v11 + 48LL);
        goto LABEL_9;
      }
    }
    LOBYTE(p_Name) = v12;
    OperandStringCaseForEvaluation = AuthzBasepUnicodeStringFromOperandValue(
                                       a2 + 40LL * v9,
                                       p_Name,
                                       &Name + v9,
                                       (char *)v23 + v9);
    v24 = OperandStringCaseForEvaluation;
    if ( OperandStringCaseForEvaluation < 0 )
      goto LABEL_25;
    p_Name = v25;
LABEL_9:
    ++v9;
    v11 += 40LL;
    v25 = ++p_Name;
  }
  while ( v9 < 2 );
  if ( v5 == 128 || v5 == 129 )
  {
    if ( *(_DWORD *)(a2 + 12) == 2 || *(_DWORD *)(a2 + 52) == 2 )
    {
      if ( *(_DWORD *)(a2 + 52) == 1 )
      {
        v13 = &Name;
        p_Expression = &Expression;
      }
      else
      {
        v13 = &Expression;
        p_Expression = &Name;
      }
      IsNameInExpression = RtlIsNameInExpression(p_Expression, v13, v28 == 0, 0LL);
      *a3 = IsNameInExpression;
    }
    else
    {
      if ( v28 )
        v22 = AuthzBasepEqualUnicodeStringCaseSensitive((const void **)&Name, (__int64)&Expression);
      else
        v22 = RtlEqualUnicodeString(&Name, &Expression, 1u);
      IsNameInExpression = v22;
      *a3 = v22;
    }
    v16 = v24;
    if ( (_BYTE)v5 == 0x81 )
      *a3 = IsNameInExpression != 1;
    goto LABEL_19;
  }
  if ( v28 )
    v20 = AuthzBasepCompareUnicodeStringCaseSensitive(&Name, &Expression);
  else
    v20 = RtlCompareUnicodeString(&Name, &Expression, 1u);
  *a3 = v20;
  switch ( (_BYTE)v5 )
  {
    case 0x82:
LABEL_34:
      v21 = v20 >> 31;
LABEL_36:
      *a3 = v21;
      break;
    case 0x83:
      v21 = *a3 <= 0;
      goto LABEL_36;
    case 0x84:
      v21 = *a3 > 0;
      goto LABEL_36;
    case 0x85:
      v20 = ~*a3;
      goto LABEL_34;
  }
  v16 = v24;
LABEL_19:
  v17 = 0LL;
  v18 = &Name.Buffer;
  do
  {
    if ( *((_BYTE *)v23 + v17) )
      ExFreePoolWithTag(*v18, 0);
    ++v17;
    v18 += 2;
  }
  while ( v17 < 2 );
  return v16;
}
