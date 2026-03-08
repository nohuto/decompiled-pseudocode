/*
 * XREFs of XmInsOp @ 0x140531730
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmGetStringAddress @ 0x14039559C (XmGetStringAddress.c)
 *     XmStoreResult @ 0x1403B42E8 (XmStoreResult.c)
 *     x86BiosReadIoSpace @ 0x1403BC880 (x86BiosReadIoSpace.c)
 */

_WORD *__fastcall XmInsOp(__int64 a1)
{
  _WORD *result; // rax
  int v3; // edi
  unsigned __int16 i; // si
  __int64 StringAddress; // rax
  __int64 v6; // rcx
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
    v6 = *(unsigned int *)(a1 + 120);
    *(_QWORD *)(a1 + 88) = StringAddress;
    IoSpace = x86BiosReadIoSpace(v6, i);
    result = XmStoreResult(a1, IoSpace);
  }
  return result;
}
