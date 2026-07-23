/*
 * XREFs of XmAaaOp @ 0x1404E5D50
 * Callers:
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XmAaaOp(__int64 a1)
{
  unsigned __int8 v1; // r8
  int v2; // eax
  unsigned int v3; // eax
  __int64 result; // rax

  v1 = *(_BYTE *)(a1 + 24);
  if ( (v1 & 0xFu) > 9 || (v2 = *(_DWORD *)(a1 + 16), (v2 & 0x10) != 0) )
  {
    *(_BYTE *)(a1 + 24) = (v1 + 6) & 0xF;
    *(_DWORD *)(a1 + 16) |= 1u;
    *(_BYTE *)(a1 + 25) += (v1 > 0xF9u) + 1;
    result = *(_DWORD *)(a1 + 16) | 0x10u;
  }
  else
  {
    v3 = v2 & 0xFFFFFFFE;
    *(_BYTE *)(a1 + 24) = v1 & 0xF;
    *(_DWORD *)(a1 + 16) = v3;
    result = v3 & 0xFFFFFFEF;
  }
  *(_DWORD *)(a1 + 16) = result;
  return result;
}
