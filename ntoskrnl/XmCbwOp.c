/*
 * XREFs of XmCbwOp @ 0x140531F50
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x1403B42E8 (XmStoreResult.c)
 */

_WORD *__fastcall XmCbwOp(__int64 a1)
{
  bool v1; // zf
  char *v2; // rax
  int v3; // edx

  v1 = *(_BYTE *)(a1 + 138) == 0;
  v2 = (char *)(a1 + 24);
  *(_QWORD *)(a1 + 88) = a1 + 24;
  if ( v1 )
  {
    v3 = (unsigned __int16)*v2;
    *(_DWORD *)(a1 + 120) = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 120) = 3;
    v3 = *(__int16 *)v2;
  }
  return XmStoreResult(a1, v3);
}
