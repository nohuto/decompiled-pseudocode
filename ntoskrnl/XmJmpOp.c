/*
 * XREFs of XmJmpOp @ 0x1403BD570
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XmJmpOp(__int64 a1)
{
  bool v1; // zf
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 112) == 234;
  result = *(unsigned int *)(a1 + 104);
  *(_DWORD *)(a1 + 20) = result;
  if ( v1 || *(_DWORD *)(a1 + 124) != 34 )
  {
    result = *(unsigned __int16 *)(a1 + 82);
    *(_WORD *)(a1 + 58) = result;
  }
  return result;
}
