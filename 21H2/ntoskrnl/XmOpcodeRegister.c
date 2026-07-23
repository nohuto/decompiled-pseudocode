/*
 * XREFs of XmOpcodeRegister @ 0x140396F40
 * Callers:
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 * Callees:
 *     XmSetSourceValue @ 0x140397058 (XmSetSourceValue.c)
 *     XmSetDestinationValue @ 0x1403970E8 (XmSetDestinationValue.c)
 */

__int64 __fastcall XmOpcodeRegister(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 v5; // rdx

  v4 = *(_DWORD *)(a1 + 112) & 7;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  v5 = a1 + 4 * ((unsigned int)v4 + 6LL);
  if ( *(_DWORD *)(a1 + 124) == 36 )
    XmSetSourceValue(a1, v5, v4, a4);
  else
    XmSetDestinationValue(a1, v5);
  return 1LL;
}
