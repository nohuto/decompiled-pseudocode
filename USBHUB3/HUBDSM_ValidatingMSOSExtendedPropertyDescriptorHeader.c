/*
 * XREFs of HUBDSM_ValidatingMSOSExtendedPropertyDescriptorHeader @ 0x1C0024AC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C00071D0 (McTemplateK0p_EtwWriteTransfer.c)
 */

__int64 __fastcall HUBDSM_ValidatingMSOSExtendedPropertyDescriptorHeader(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  unsigned __int16 v3; // r9

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4065;
  if ( *(_DWORD *)(v1 + 256) != 10 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_17;
    v3 = 65;
    goto LABEL_16;
  }
  if ( *(_DWORD *)(v1 + 1732) < 0xAu )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_17;
    v3 = 66;
    goto LABEL_16;
  }
  if ( *(_WORD *)(v1 + 1736) != 256 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_17;
    v3 = 67;
    goto LABEL_16;
  }
  if ( *(_WORD *)(v1 + 1738) != 5 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_17;
    v3 = 68;
    goto LABEL_16;
  }
  if ( *(_WORD *)(v1 + 1740) )
    return 4077;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = 69;
LABEL_16:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      v3,
      (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids);
  }
LABEL_17:
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      a1,
      &USBHUB3_ETW_EVENT_INVALID_MSOS_EXTENDED_PROPERTY_DESCRIPTOR_HEADER,
      (const GUID *)(v1 + 1516),
      *(_QWORD *)(v1 + 24));
  return v2;
}
