/*
 * XREFs of XmLeaveOp @ 0x1405319D0
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmPopStack @ 0x1403B4154 (XmPopStack.c)
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
