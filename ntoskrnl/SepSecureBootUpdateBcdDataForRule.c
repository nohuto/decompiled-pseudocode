/*
 * XREFs of SepSecureBootUpdateBcdDataForRule @ 0x1409CE004
 * Callers:
 *     SepSecureBootCorrectBcd @ 0x1409CDB74 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     BiDeleteElement @ 0x14082CDF8 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14082D894 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14082E398 (BcdGetElementDataWithFlags.c)
 *     SepSecureBootGetPolicyDefaultValue @ 0x1409CDE74 (SepSecureBootGetPolicyDefaultValue.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1409CE184 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSecureBootUpdateBcdDataForRule(__int64 a1, void *a2, _BYTE *a3)
{
  _WORD *v3; // rsi
  __int64 *Pool2; // rdi
  int PolicyDefaultValue; // ebx
  char v9; // al
  int v10; // eax
  unsigned int v11; // edx
  __int64 *v12; // r13
  int ElementDataWithFlags; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v18; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v19; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v20; // [rsp+90h] [rbp+50h] BYREF
  __int64 v21; // [rsp+98h] [rbp+58h] BYREF

  v3 = (_WORD *)(qword_140D1BC48 + *(unsigned int *)(a1 + 8));
  v21 = 0LL;
  v18 = 0LL;
  Pool2 = 0LL;
  v20 = 0;
  PolicyDefaultValue = 0;
  v9 = *(_BYTE *)v3 & 0x1F;
  *a3 = 0;
  if ( v9 == 8 )
  {
    if ( !v3[1] )
    {
      v10 = BiDeleteElement(a2, *(_DWORD *)(a1 + 4));
      PolicyDefaultValue = v10;
      if ( v10 == -1073741275 )
      {
        return 0;
      }
      else if ( v10 >= 0 )
      {
        *a3 = 1;
      }
    }
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 4);
    v19 = 8;
    v12 = &v21;
    ElementDataWithFlags = BcdGetElementDataWithFlags((__int64)a2, v11, (__int64)a3, (__int64)&v21, &v19);
    PolicyDefaultValue = ElementDataWithFlags;
    if ( ElementDataWithFlags == -1073741789 || ElementDataWithFlags == -2147483643 )
    {
      Pool2 = (__int64 *)ExAllocatePool2(256LL, v19, 1649632595LL);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v12 = Pool2;
      PolicyDefaultValue = BcdGetElementDataWithFlags((__int64)a2, *(_DWORD *)(a1 + 4), v15, (__int64)Pool2, &v19);
      if ( PolicyDefaultValue < 0 )
        goto LABEL_18;
    }
    if ( PolicyDefaultValue < 0
      || (PolicyDefaultValue = SepSecureBootValidateBcdDataAgainstBcdRule(a1, v12, v19), PolicyDefaultValue < 0) )
    {
      PolicyDefaultValue = SepSecureBootGetPolicyDefaultValue(v3, v14, &v18, (int *)&v20);
      if ( PolicyDefaultValue >= 0 )
      {
        PolicyDefaultValue = BcdSetElementDataWithFlags(a2, *(_DWORD *)(a1 + 4), v16, v18, v20);
        if ( PolicyDefaultValue >= 0 )
          *a3 = 1;
      }
    }
    if ( Pool2 )
LABEL_18:
      ExFreePoolWithTag(Pool2, 0x62536553u);
  }
  return (unsigned int)PolicyDefaultValue;
}
