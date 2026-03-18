/*
 * XREFs of ValidateDDEConvPair @ 0x1C01FB050
 * Callers:
 *     _PostTransformableMessageIL @ 0x1C004F3FC (_PostTransformableMessageIL.c)
 *     NtUserPostMessage @ 0x1C011E4B0 (NtUserPostMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 *     _PostMessageCheckIL @ 0x1C01B704C (_PostMessageCheckIL.c)
 * Callees:
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01F997C (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 */

struct tagWND *__fastcall ValidateDDEConvPair(__int64 a1, struct tagWND *a2)
{
  struct tagWND *result; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ebx

  result = (struct tagWND *)ValidateHwnd(a1);
  v6 = 0;
  if ( result )
  {
    LOBYTE(v6) = FindDdeConv(result, a2, v4, v5) != 0LL;
    return (struct tagWND *)v6;
  }
  return result;
}
