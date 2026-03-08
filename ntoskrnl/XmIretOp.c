/*
 * XREFs of XmIretOp @ 0x1403B3570
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmPopStack @ 0x1403B4154 (XmPopStack.c)
 */

__int64 __fastcall XmIretOp(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  *(_DWORD *)(a1 + 20) = XmPopStack(a1);
  *(_WORD *)(a1 + 58) = XmPopStack(a1);
  *(_DWORD *)(a1 + 16) = XmPopStack(a1);
  result = 0xFFFFLL;
  if ( *(_DWORD *)(a1 + 20) == 0xFFFF && *(_WORD *)(a1 + 58) == 0xFFFF )
    XmStatus = 1;
  return result;
}
