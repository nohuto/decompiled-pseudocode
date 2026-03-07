__int64 __fastcall XmGroup3General(__int64 a1)
{
  __int64 v2; // rdi
  char v3; // al
  int v4; // r8d
  __int64 v6; // rdx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  XmSetDataType(a1);
  v2 = XmEvaluateAddressSpecifier(a1, &v7);
  v3 = v7;
  *(_DWORD *)(a1 + 124) += v7;
  if ( *(_DWORD *)(a1 + 124) == 22 )
  {
    XmGetImmediateSourceValue(a1, 0LL);
    XmSetDestinationValue(a1, v2);
    *(_DWORD *)(a1 + 108) = v4;
  }
  else if ( (v3 & 4) != 0 )
  {
    v6 = a1 + 24;
    if ( (v3 & 2) != 0 )
      *(_QWORD *)(a1 + 88) = v6;
    else
      XmSetDestinationValue(a1, v6);
    XmSetSourceValue(a1, v2);
  }
  else
  {
    XmSetDestinationValue(a1, v2);
  }
  return 1LL;
}
