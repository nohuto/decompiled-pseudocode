__int64 __fastcall XmImulImmediate(__int64 a1)
{
  unsigned __int16 *v2; // rbx
  __int64 result; // rax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  v2 = (unsigned __int16 *)XmEvaluateAddressSpecifier(a1, (int *)&v4);
  *(_DWORD *)(a1 + 108) = XmGetImmediateSourceValue(a1, *(_DWORD *)(a1 + 112) & 2);
  XmSetDestinationValue(a1, v2);
  result = 1LL;
  *(_QWORD *)(a1 + 88) = a1 + 4 * (v4 + 6LL);
  return result;
}
