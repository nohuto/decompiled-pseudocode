/*
 * XREFs of IsPointerParentNotify @ 0x1C006B28C
 * Callers:
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C005BA10 (TransformMessageBetweenCoordinateSpaces.c)
 *     UnlinkSendListSms @ 0x1C006A290 (UnlinkSendListSms.c)
 *     NtUserfnPARENTNOTIFY @ 0x1C0131970 (NtUserfnPARENTNOTIFY.c)
 *     IsMiPPointerMessage @ 0x1C01E191C (IsMiPPointerMessage.c)
 *     NtUserfnPOINTERINPUT @ 0x1C0206390 (NtUserfnPOINTERINPUT.c)
 *     _QuerySendMessage @ 0x1C021DE4C (_QuerySendMessage.c)
 *     xxxMenuWindowProc @ 0x1C023B5E0 (xxxMenuWindowProc.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPointerParentNotify(int a1, __int16 a2)
{
  return a1 == 528 && a2 == 582;
}
