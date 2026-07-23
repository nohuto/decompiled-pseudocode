/*
 * XREFs of XmGroup1General @ 0x140396F90
 * Callers:
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 * Callees:
 *     XmSetSourceValue @ 0x140397058 (XmSetSourceValue.c)
 *     XmSetDestinationValue @ 0x1403970E8 (XmSetDestinationValue.c)
 *     XmEvaluateAddressSpecifier @ 0x140397164 (XmEvaluateAddressSpecifier.c)
 *     XmGetRegisterAddress @ 0x1403974E8 (XmGetRegisterAddress.c)
 *     XmSetDataType @ 0x140397518 (XmSetDataType.c)
 */

__int64 __fastcall XmGroup1General(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 RegisterAddress; // rax
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  XmSetDataType();
  result = XmEvaluateAddressSpecifier(a1, &v7);
  if ( result )
  {
    if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
    {
      RegisterAddress = XmGetRegisterAddress(a1, v7);
      XmSetDestinationValue(a1, RegisterAddress);
    }
    else
    {
      XmSetDestinationValue(a1, result);
      v5 = XmGetRegisterAddress(v3, v7);
    }
    XmSetSourceValue(a1, v5, v4, v5);
    return 1LL;
  }
  return result;
}
