/*
 * XREFs of SendShape @ 0x1C01E83A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C003B6C4 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

__int64 __fastcall SendShape(_DWORD *a1)
{
  *a1 = 6;
  return InputExtensibilityCallout::CoreMsgSendMessage((__int64)a1, 1);
}
