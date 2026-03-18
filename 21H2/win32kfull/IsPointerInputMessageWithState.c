/*
 * XREFs of IsPointerInputMessageWithState @ 0x1C00AC37C
 * Callers:
 *     PostInputMessage @ 0x1C00AB69C (PostInputMessage.c)
 *     UnlinkSendListSms @ 0x1C00AC18C (UnlinkSendListSms.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01EB168 (xxxRetrievePointerInputMessage.c)
 *     ?IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z @ 0x1C020910C (-IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z.c)
 *     _QuerySendMessage @ 0x1C021942C (_QuerySendMessage.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C00AC3A0 (IsPointerInputMessage.c)
 */

__int64 __fastcall IsPointerInputMessageWithState(__int64 a1)
{
  int v1; // eax
  int v2; // ecx
  unsigned int v3; // edx

  v1 = IsPointerInputMessage(a1);
  v3 = 0;
  if ( v1 )
    return v2 != 595;
  return v3;
}
