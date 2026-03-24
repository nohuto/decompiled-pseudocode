/*
 * XREFs of XmPopaOp @ 0x1403C32A0
 * Callers:
 *     XmEmulateStream @ 0x140396B08 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x1403966C0 (XmStoreResult.c)
 *     XmPopStack @ 0x1403967BC (XmPopStack.c)
 *     XmSetDestinationValue @ 0x140396898 (XmSetDestinationValue.c)
 */

_WORD *__fastcall XmPopaOp(__int64 a1)
{
  unsigned int v2; // edi
  unsigned __int16 *v3; // rdx
  int v4; // eax
  _WORD *result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 8;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  v6 = *(_DWORD *)(a1 + 40);
  do
  {
    if ( --v2 == 4 )
      v3 = (unsigned __int16 *)&v6;
    else
      v3 = (unsigned __int16 *)(a1 + 4 * (v2 + 6LL));
    XmSetDestinationValue(a1, v3);
    v4 = XmPopStack(a1);
    result = XmStoreResult(a1, v4);
  }
  while ( v2 );
  return result;
}
