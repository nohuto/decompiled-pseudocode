/*
 * XREFs of XmXchgOp @ 0x1403B3700
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x1403B42E8 (XmStoreResult.c)
 */

__int64 __fastcall XmXchgOp(__int64 a1)
{
  int v1; // eax
  _DWORD *v2; // rdx

  v1 = *(_DWORD *)(a1 + 120);
  v2 = *(_DWORD **)(a1 + 96);
  if ( v1 )
  {
    if ( v1 == 3 )
      *v2 = *(_DWORD *)(a1 + 104);
    else
      *(_WORD *)v2 = *(_WORD *)(a1 + 104);
  }
  else
  {
    *(_BYTE *)v2 = *(_BYTE *)(a1 + 104);
  }
  return XmStoreResult(a1, *(unsigned int *)(a1 + 108));
}
