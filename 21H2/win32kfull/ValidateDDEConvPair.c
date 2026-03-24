/*
 * XREFs of ValidateDDEConvPair @ 0x1C021CAF0
 * Callers:
 *     _PostTransformableMessageIL @ 0x1C003F750 (_PostTransformableMessageIL.c)
 *     NtUserPostMessage @ 0x1C00546A0 (NtUserPostMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0059990 (xxxSendTransformableMessageTimeout.c)
 *     _PostMessageCheckIL @ 0x1C01E27B8 (_PostMessageCheckIL.c)
 * Callees:
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C021AC58 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 */

_BOOL8 __fastcall ValidateDDEConvPair(__int64 a1, struct tagWND *a2)
{
  struct tagWND *v3; // rax

  v3 = (struct tagWND *)ValidateHwnd(a1);
  return v3 && FindDdeConv(v3, a2);
}
