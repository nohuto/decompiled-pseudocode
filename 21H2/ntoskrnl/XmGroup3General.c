/*
 * XREFs of XmGroup3General @ 0x140396820
 * Callers:
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 * Callees:
 *     XmSetSourceValue @ 0x140397058 (XmSetSourceValue.c)
 *     XmSetDestinationValue @ 0x1403970E8 (XmSetDestinationValue.c)
 *     XmGetImmediateSourceValue @ 0x140397110 (XmGetImmediateSourceValue.c)
 *     XmEvaluateAddressSpecifier @ 0x140397164 (XmEvaluateAddressSpecifier.c)
 *     XmSetDataType @ 0x140397518 (XmSetDataType.c)
 */

__int64 __fastcall XmGroup3General(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // al
  int v6; // r8d
  __int64 v8; // rdx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0;
  XmSetDataType();
  v2 = XmEvaluateAddressSpecifier(a1, &v9);
  v5 = v9;
  *(_DWORD *)(a1 + 124) += v9;
  if ( *(_DWORD *)(a1 + 124) == 22 )
  {
    XmGetImmediateSourceValue(a1, 0LL);
    XmSetDestinationValue(a1, v2);
    *(_DWORD *)(a1 + 108) = v6;
  }
  else if ( (v5 & 4) != 0 )
  {
    v8 = a1 + 24;
    if ( (v5 & 2) != 0 )
      *(_QWORD *)(a1 + 88) = v8;
    else
      XmSetDestinationValue(a1, v8);
    XmSetSourceValue(a1, v2, v3, v4);
  }
  else
  {
    XmSetDestinationValue(a1, v2);
  }
  return 1LL;
}
