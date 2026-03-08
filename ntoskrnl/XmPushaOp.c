/*
 * XREFs of XmPushaOp @ 0x14039BBF0
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmSetSourceValue @ 0x1403B41A0 (XmSetSourceValue.c)
 *     XmPushStack @ 0x1403B4270 (XmPushStack.c)
 */

__int64 __fastcall XmPushaOp(__int64 a1)
{
  unsigned int v2; // edi
  int *v3; // rdx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  v2 = 0;
  v5 = *(_DWORD *)(a1 + 40);
  do
  {
    if ( v2 == 4 )
      v3 = &v5;
    else
      v3 = (int *)(a1 + 4 * (v2 + 6LL));
    XmSetSourceValue(a1, v3);
    result = XmPushStack(a1, *(unsigned int *)(a1 + 108));
    ++v2;
  }
  while ( v2 <= 7 );
  return result;
}
