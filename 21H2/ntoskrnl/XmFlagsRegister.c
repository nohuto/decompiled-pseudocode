/*
 * XREFs of XmFlagsRegister @ 0x1404E5350
 * Callers:
 *     XmEmulateStream @ 0x140397208 (XmEmulateStream.c)
 * Callees:
 *     XmSetSourceValue @ 0x140396F08 (XmSetSourceValue.c)
 *     XmSetDestinationValue @ 0x140396F98 (XmSetDestinationValue.c)
 */

__int64 __fastcall XmFlagsRegister(__int64 a1)
{
  unsigned __int16 *v1; // rdx

  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  v1 = (unsigned __int16 *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 124) == 36 )
    XmSetSourceValue(a1, v1);
  else
    XmSetDestinationValue(a1, v1);
  return 1LL;
}
