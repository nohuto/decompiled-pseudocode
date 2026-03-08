/*
 * XREFs of PipProcessStartPhase1 @ 0x1406F7074
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406CCD80 (PipProcessDevNodeTree.c)
 * Callees:
 *     McTemplateK0dz_EtwWriteTransfer @ 0x1405620F8 (McTemplateK0dz_EtwWriteTransfer.c)
 *     PnpStartDeviceNode @ 0x1406F71A4 (PnpStartDeviceNode.c)
 *     PiDmaGuardProcessPreStart @ 0x1406F7574 (PiDmaGuardProcessPreStart.c)
 *     IopUncacheInterfaceInformation @ 0x1406F75C8 (IopUncacheInterfaceInformation.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x140960AF0 (PpProfileBeginHardwareProfileTransition.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x140960DA4 (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x140960EB4 (PpProfileQueryHardwareProfileChange.c)
 */

__int64 __fastcall PipProcessStartPhase1(__int64 MaxDataSize, unsigned int a2, __int64 a3)
{
  int v3; // edi
  int started; // edi
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0;
  v3 = a3;
  if ( (byte_140C0E10B & 0x10) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      MaxDataSize,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Start,
      a3,
      1,
      *(const wchar_t **)(MaxDataSize + 48));
  if ( v3 && (*(_DWORD *)(MaxDataSize + 396) & 0x400000) != 0 )
  {
    started = -1073741267;
  }
  else
  {
    IopUncacheInterfaceInformation(*(_QWORD *)(MaxDataSize + 32), 1LL);
    if ( !*(_DWORD *)(MaxDataSize + 568)
      || (PpProfileBeginHardwareProfileTransition(0LL),
          PpProfileIncludeInHardwareProfileTransition(MaxDataSize, 2LL),
          started = PpProfileQueryHardwareProfileChange(0LL, 2LL, &v8, 0LL),
          started >= 0) )
    {
      PiDmaGuardProcessPreStart(MaxDataSize);
      started = PnpStartDeviceNode(MaxDataSize, 0LL, a2);
    }
  }
  if ( (byte_140C0E10B & 0x10) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      MaxDataSize,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Stop,
      a3,
      1,
      *(const wchar_t **)(MaxDataSize + 48));
  return (unsigned int)started;
}
