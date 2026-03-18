/*
 * XREFs of ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x1C019A364
 * Callers:
 *     RIMSetDeviceInputMode @ 0x1C00D2D38 (RIMSetDeviceInputMode.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C003B6C4 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     RIMSuppressAllActiveContacts @ 0x1C01958A0 (RIMSuppressAllActiveContacts.c)
 */

void __fastcall rimInvalidateInputs(struct RIMDEV *a1)
{
  if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 )
    RIMSuppressAllActiveContacts(*((struct RawInputManagerObject **)a1 + 42), *((_QWORD *)a1 + 59));
  if ( (*((_DWORD *)a1 + 46) & 0x10000) != 0 )
    InputExtensibilityCallout::CoreMsgSendMessage((__int64)a1, 10);
}
