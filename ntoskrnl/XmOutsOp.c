/*
 * XREFs of XmOutsOp @ 0x1405317C0
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmGetStringAddress @ 0x14039559C (XmGetStringAddress.c)
 *     XmSetSourceValue @ 0x1403B41A0 (XmSetSourceValue.c)
 *     x86BiosWriteIoSpace @ 0x1403BC9E0 (x86BiosWriteIoSpace.c)
 */

char __fastcall XmOutsOp(__int64 a1)
{
  char result; // al
  int v3; // edi
  unsigned __int16 i; // si
  unsigned __int16 *StringAddress; // rax

  result = 0;
  v3 = 1;
  if ( *(_BYTE *)(a1 + 139) )
  {
    if ( *(_BYTE *)(a1 + 137) )
    {
      v3 = *(_DWORD *)(a1 + 28);
      *(_DWORD *)(a1 + 28) = 0;
    }
    else
    {
      v3 = *(unsigned __int16 *)(a1 + 28);
      *(_WORD *)(a1 + 28) = 0;
    }
  }
  for ( i = *(_WORD *)(a1 + 108); v3; --v3 )
  {
    StringAddress = (unsigned __int16 *)XmGetStringAddress(a1, *(_DWORD *)(a1 + 116), 6u);
    XmSetSourceValue(a1, StringAddress);
    result = x86BiosWriteIoSpace(*(unsigned int *)(a1 + 120), i, *(_DWORD *)(a1 + 108));
  }
  return result;
}
