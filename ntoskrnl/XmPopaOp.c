/*
 * XREFs of XmPopaOp @ 0x14039A450
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmPopStack @ 0x1403B4154 (XmPopStack.c)
 *     XmSetDestinationValue @ 0x1403B4248 (XmSetDestinationValue.c)
 *     XmStoreResult @ 0x1403B42E8 (XmStoreResult.c)
 */

__int64 __fastcall XmPopaOp(__int64 a1)
{
  unsigned int v2; // edi
  int *v3; // rdx
  unsigned int v4; // eax
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 8;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  v6 = *(_DWORD *)(a1 + 40);
  do
  {
    if ( --v2 == 4 )
      v3 = &v6;
    else
      v3 = (int *)(a1 + 4 * (v2 + 6LL));
    XmSetDestinationValue(a1, v3);
    v4 = XmPopStack(a1);
    result = XmStoreResult(a1, v4);
  }
  while ( v2 );
  return result;
}
