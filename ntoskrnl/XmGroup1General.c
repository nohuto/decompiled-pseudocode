__int64 __fastcall XmGroup1General(__int64 a1)
{
  __int64 result; // rax
  __int64 RegisterAddress; // rax
  __int64 v4; // r9
  __int64 v5; // rcx
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  XmSetDataType(a1);
  result = XmEvaluateAddressSpecifier(a1, &v6);
  if ( result )
  {
    if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
    {
      RegisterAddress = XmGetRegisterAddress(a1, v6);
      XmSetDestinationValue(a1, RegisterAddress);
    }
    else
    {
      XmSetDestinationValue(a1, result);
      v4 = XmGetRegisterAddress(v5, v6);
    }
    XmSetSourceValue(a1, v4);
    return 1LL;
  }
  return result;
}
