/*
 * XREFs of SepSecureBootUpdateBcdDataForRule @ 0x140924654
 * Callers:
 *     SepSecureBootCorrectBcd @ 0x1409241E8 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     BiDeleteElement @ 0x14078319C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140783FDC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1407841C0 (BcdGetElementDataWithFlags.c)
 *     SepSecureBootGetPolicyDefaultValue @ 0x1409244C4 (SepSecureBootGetPolicyDefaultValue.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1409247B4 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepSecureBootUpdateBcdDataForRule(__int64 a1, void *a2, __int64 a3)
{
  _WORD *v3; // rsi
  __int64 *PoolWithTag; // rdi
  int PolicyDefaultValue; // ebx
  unsigned int v8; // edx
  __int64 *v9; // r12
  int ElementDataWithFlags; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v15; // [rsp+30h] [rbp-10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v17; // [rsp+90h] [rbp+50h] BYREF
  __int64 v18; // [rsp+98h] [rbp+58h] BYREF

  v3 = (_WORD *)(qword_140CFA3D8 + *(unsigned int *)(a1 + 8));
  v18 = 0LL;
  PoolWithTag = 0LL;
  v15 = 0LL;
  v17 = 0;
  PolicyDefaultValue = 0;
  if ( (*(_BYTE *)v3 & 0x1F) == 8 )
  {
    if ( !v3[1] )
    {
      PolicyDefaultValue = BiDeleteElement(a2, *(_DWORD *)(a1 + 4));
      if ( PolicyDefaultValue == -1073741275 )
        return 0;
    }
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 4);
    LODWORD(NumberOfBytes) = 8;
    v9 = &v18;
    ElementDataWithFlags = BcdGetElementDataWithFlags((__int64)a2, v8, a3, (__int64)&v18, &NumberOfBytes);
    PolicyDefaultValue = ElementDataWithFlags;
    if ( ElementDataWithFlags != -1073741789 && ElementDataWithFlags != -2147483643 )
      goto LABEL_19;
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x62536553u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    v9 = PoolWithTag;
    PolicyDefaultValue = BcdGetElementDataWithFlags(
                           (__int64)a2,
                           *(_DWORD *)(a1 + 4),
                           v12,
                           (__int64)PoolWithTag,
                           &NumberOfBytes);
    if ( PolicyDefaultValue >= 0 )
    {
LABEL_19:
      if ( PolicyDefaultValue < 0
        || (PolicyDefaultValue = SepSecureBootValidateBcdDataAgainstBcdRule(a1, v9, (unsigned int)NumberOfBytes),
            PolicyDefaultValue < 0) )
      {
        PolicyDefaultValue = SepSecureBootGetPolicyDefaultValue(v3, v11, &v15, (int *)&v17);
        if ( PolicyDefaultValue >= 0 )
          PolicyDefaultValue = BcdSetElementDataWithFlags(a2, *(_DWORD *)(a1 + 4), v13, v15, v17);
      }
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x62536553u);
  }
  return (unsigned int)PolicyDefaultValue;
}
