/*
 * XREFs of XmJcxzOp @ 0x1404E6E90
 * Callers:
 *     XmEmulateStream @ 0x140397208 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XmJcxzOp(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 138) )
    result = *(unsigned int *)(a1 + 28);
  else
    result = *(unsigned __int16 *)(a1 + 28);
  if ( !(_DWORD)result )
  {
    result = *(unsigned __int16 *)(a1 + 104);
    *(_DWORD *)(a1 + 20) = result;
  }
  return result;
}
