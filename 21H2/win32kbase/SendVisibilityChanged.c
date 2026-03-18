/*
 * XREFs of SendVisibilityChanged @ 0x1C00C18A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C003B6C4 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

__int64 __fastcall SendVisibilityChanged(__int64 a1)
{
  return InputExtensibilityCallout::CoreMsgSendMessage(a1, 1);
}
