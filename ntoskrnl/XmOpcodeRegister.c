/*
 * XREFs of XmOpcodeRegister @ 0x1403B3D60
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmSetSourceValue @ 0x1403B41A0 (XmSetSourceValue.c)
 *     XmSetDestinationValue @ 0x1403B4248 (XmSetDestinationValue.c)
 */

__int64 __fastcall XmOpcodeRegister(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rdx

  v1 = *(_DWORD *)(a1 + 112) & 7;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  v2 = a1 + 4 * (v1 + 6LL);
  if ( *(_DWORD *)(a1 + 124) == 36 )
    XmSetSourceValue(a1, v2);
  else
    XmSetDestinationValue(a1, v2);
  return 1LL;
}
