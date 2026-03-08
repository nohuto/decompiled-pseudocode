/*
 * XREFs of XmFlagsRegister @ 0x14039F940
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmSetSourceValue @ 0x1403B41A0 (XmSetSourceValue.c)
 *     XmSetDestinationValue @ 0x1403B4248 (XmSetDestinationValue.c)
 */

__int64 __fastcall XmFlagsRegister(__int64 a1)
{
  __int64 v1; // rdx

  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  v1 = a1 + 16;
  if ( *(_DWORD *)(a1 + 124) == 36 )
    XmSetSourceValue(a1, v1);
  else
    XmSetDestinationValue(a1, v1);
  return 1LL;
}
