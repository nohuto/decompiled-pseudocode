/*
 * XREFs of XmDasOp @ 0x1405311D0
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XmDasOp(__int64 a1)
{
  unsigned __int8 v1; // dl
  unsigned int *v2; // r8
  unsigned int v3; // eax
  __int64 result; // rax

  v1 = *(_BYTE *)(a1 + 24);
  v2 = (unsigned int *)(a1 + 16);
  if ( (v1 & 0xFu) > 9 || (*v2 & 0x10) != 0 )
  {
    v1 -= 6;
    *v2 |= 0x10u;
    v3 = *v2;
    *(_BYTE *)(a1 + 24) = v1;
  }
  else
  {
    v3 = *v2 & 0xFFFFFFEF;
    *v2 = v3;
  }
  if ( v1 > 9u || (v3 & 1) != 0 )
  {
    *(_BYTE *)(a1 + 24) = v1 - 96;
    result = v3 | 1;
  }
  else
  {
    result = v3 & 0xFFFFFFFE;
  }
  *v2 = result;
  return result;
}
