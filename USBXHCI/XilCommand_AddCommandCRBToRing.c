/*
 * XREFs of XilCommand_AddCommandCRBToRing @ 0x1C000AB9C
 * Callers:
 *     Command_InternalSendCommand @ 0x1C000A998 (Command_InternalSendCommand.c)
 * Callees:
 *     XilCommand_WriteDoorbell @ 0x1C000ABF8 (XilCommand_WriteDoorbell.c)
 *     XilCoreCommand_AddCommandTRBToRing @ 0x1C000AC28 (XilCoreCommand_AddCommandTRBToRing.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C0031B20 (XilCommand_SendAddCommandCRBToRingRequest.c)
 */

__int64 __fastcall XilCommand_AddCommandCRBToRing(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // edi

  v2 = a1 + 136;
  if ( *(_BYTE *)(a1 + 136) )
  {
    v4 = XilCommand_SendAddCommandCRBToRingRequest(a1 + 136);
  }
  else
  {
    XilCoreCommand_AddCommandTRBToRing(a1 + 168, a2 + 24);
    v4 = 0;
  }
  if ( *(_QWORD *)(v2 + 16) )
    XilCommand_WriteDoorbell(a1);
  return v4;
}
