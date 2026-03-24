/*
 * XREFs of XmShiftDouble @ 0x1404E5850
 * Callers:
 *     XmEmulateStream @ 0x140396B08 (XmEmulateStream.c)
 * Callees:
 *     XmSetSourceValue @ 0x140396808 (XmSetSourceValue.c)
 *     XmSetDestinationValue @ 0x140396898 (XmSetDestinationValue.c)
 *     XmEvaluateAddressSpecifier @ 0x140396914 (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x140396C68 (XmGetCodeByte.c)
 */

__int64 __fastcall XmShiftDouble(__int64 a1)
{
  unsigned __int16 *v2; // rdi
  char CodeByte; // al
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  v2 = (unsigned __int16 *)XmEvaluateAddressSpecifier(a1, (int *)&v7);
  if ( (*(_DWORD *)(a1 + 112) & 1) != 0 )
    CodeByte = *(_BYTE *)(a1 + 28);
  else
    CodeByte = XmGetCodeByte(a1);
  v4 = v7 + 6LL;
  *(_BYTE *)(a1 + 144) = CodeByte & 0x1F;
  XmSetSourceValue(a1, (unsigned __int16 *)(a1 + 4 * v4));
  XmSetDestinationValue(v5, v2);
  return 1LL;
}
