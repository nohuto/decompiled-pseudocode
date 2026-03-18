/*
 * XREFs of ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01EBB0C
 * Callers:
 *     xxxDiscardPointerFrameMessagesInternal @ 0x1C01EAEBC (xxxDiscardPointerFrameMessagesInternal.c)
 *     xxxPointerCallHook @ 0x1C01EAF28 (xxxPointerCallHook.c)
 *     xxxPromotePointerToMouse @ 0x1C01EB108 (xxxPromotePointerToMouse.c)
 *     xxxSendPointerMessage @ 0x1C01EB770 (xxxSendPointerMessage.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C023F024 (-GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C01EBAA4 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

struct _LIST_ENTRY *__fastcall GetThreadPointerData(struct _LIST_ENTRY *a1, __int16 a2, unsigned int *a3, int *a4)
{
  struct _LIST_ENTRY *Blink; // r10

  Blink = a1[1].Blink;
  if ( Blink )
  {
    if ( LOWORD(Blink[1].Flink) != a2 )
      return 0LL;
  }
  else
  {
    Blink = FindThreadPointerData(a1, a2);
    if ( !Blink )
      return 0LL;
  }
  if ( ((__int64)Blink[3].Flink & 8) != 0 )
    return 0LL;
  if ( a3 )
    *a3 = HIDWORD(Blink[1].Flink);
  if ( a4 )
    *a4 = -((__int64)Blink[3].Flink & 1);
  return Blink[1].Blink;
}
