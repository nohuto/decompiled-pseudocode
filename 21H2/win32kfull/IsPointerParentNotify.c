/*
 * XREFs of IsPointerParentNotify @ 0x1C006B32C
 * Callers:
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C005BAB0 (TransformMessageBetweenCoordinateSpaces.c)
 *     UnlinkSendListSms @ 0x1C006A330 (UnlinkSendListSms.c)
 *     NtUserfnPARENTNOTIFY @ 0x1C0131D20 (NtUserfnPARENTNOTIFY.c)
 *     IsMiPPointerMessage @ 0x1C01E1EDC (IsMiPPointerMessage.c)
 *     NtUserfnPOINTERINPUT @ 0x1C0206950 (NtUserfnPOINTERINPUT.c)
 *     _QuerySendMessage @ 0x1C021E40C (_QuerySendMessage.c)
 *     xxxMenuWindowProc @ 0x1C023BBA0 (xxxMenuWindowProc.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPointerParentNotify(int a1, __int16 a2)
{
  return a1 == 528 && a2 == 582;
}
