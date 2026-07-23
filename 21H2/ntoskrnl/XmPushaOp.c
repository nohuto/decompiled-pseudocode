/*
 * XREFs of XmPushaOp @ 0x1403C44D0
 * Callers:
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 * Callees:
 *     XmPushStack @ 0x140396EB8 (XmPushStack.c)
 *     XmSetSourceValue @ 0x140397058 (XmSetSourceValue.c)
 */

__int64 __fastcall XmPushaOp(__int64 a1)
{
  unsigned int v2; // edi
  unsigned __int16 *v3; // rdx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  v2 = 0;
  v5 = *(_DWORD *)(a1 + 40);
  do
  {
    if ( v2 == 4 )
      v3 = (unsigned __int16 *)&v5;
    else
      v3 = (unsigned __int16 *)(a1 + 4 * (v2 + 6LL));
    XmSetSourceValue(a1, v3);
    result = XmPushStack(a1, *(_DWORD *)(a1 + 108));
    ++v2;
  }
  while ( v2 <= 7 );
  return result;
}
