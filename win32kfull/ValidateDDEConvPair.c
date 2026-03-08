/*
 * XREFs of ValidateDDEConvPair @ 0x1C01FD410
 * Callers:
 *     NtUserPostMessage @ 0x1C0047F50 (NtUserPostMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     _PostTransformableMessageIL @ 0x1C00CB574 (_PostTransformableMessageIL.c)
 *     _PostMessageCheckIL @ 0x1C01B81EC (_PostMessageCheckIL.c)
 * Callees:
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01FAB6C (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 */

struct tagWND *__fastcall ValidateDDEConvPair(__int64 a1, struct tagWND *a2)
{
  struct tagWND *result; // rax
  unsigned int v4; // ebx

  result = (struct tagWND *)ValidateHwnd(a1);
  v4 = 0;
  if ( result )
  {
    LOBYTE(v4) = FindDdeConv(result, a2) != 0LL;
    return (struct tagWND *)v4;
  }
  return result;
}
