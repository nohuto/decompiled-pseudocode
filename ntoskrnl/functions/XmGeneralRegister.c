__int64 __fastcall XmGeneralRegister(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  XmEvaluateAddressSpecifier(a1, (int *)&v3);
  if ( !*(_BYTE *)(a1 + 142) )
    longjmp((_JBTYPE *)(a1 + 160), 10);
  XmSetSourceValue(a1, (unsigned __int16 *)(a1 + 4 * (v3 + 6LL)));
  result = 1LL;
  *(_QWORD *)(a1 + 88) = a1 + 4 * (v3 + 6LL);
  return result;
}
