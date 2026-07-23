/*
 * XREFs of XmInsOp @ 0x1404E6560
 * Callers:
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x140396F10 (XmStoreResult.c)
 *     x86BiosReadIoSpace @ 0x140399800 (x86BiosReadIoSpace.c)
 *     XmGetStringAddress @ 0x1403C122C (XmGetStringAddress.c)
 */

_WORD *__fastcall XmInsOp(__int64 a1)
{
  _WORD *result; // rax
  int v3; // edi
  __int16 i; // si
  int *StringAddress; // rax
  unsigned int v6; // ecx
  unsigned __int32 IoSpace; // eax

  result = 0LL;
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
    StringAddress = XmGetStringAddress(a1, 0, 7u);
    v6 = *(_DWORD *)(a1 + 120);
    *(_QWORD *)(a1 + 88) = StringAddress;
    IoSpace = x86BiosReadIoSpace(v6, i);
    result = XmStoreResult(a1, IoSpace);
  }
  return result;
}
