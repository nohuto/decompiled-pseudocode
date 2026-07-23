/*
 * XREFs of XmLeaveOp @ 0x1404E6800
 * Callers:
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 * Callees:
 *     XmPopStack @ 0x14039700C (XmPopStack.c)
 */

__int64 __fastcall XmLeaveOp(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 138) )
  {
    *(_DWORD *)(a1 + 120) = 3;
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 44);
    result = XmPopStack(a1);
    *(_DWORD *)(a1 + 44) = result;
  }
  else
  {
    *(_DWORD *)(a1 + 120) = 1;
    *(_WORD *)(a1 + 40) = *(_WORD *)(a1 + 44);
    result = XmPopStack(a1);
    *(_WORD *)(a1 + 44) = result;
  }
  return result;
}
