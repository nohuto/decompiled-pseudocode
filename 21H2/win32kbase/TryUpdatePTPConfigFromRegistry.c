/*
 * XREFs of TryUpdatePTPConfigFromRegistry @ 0x1C0148A9C
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x1C0148BC0 (_GetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     GetDWORDSettingValuesEx @ 0x1C0083920 (GetDWORDSettingValuesEx.c)
 */

void TryUpdatePTPConfigFromRegistry()
{
  if ( !gTouchPadMonitor && (unsigned int)GetDWORDSettingValuesEx(0LL, (__int64)off_1C02880D8, 0xEu, 1) )
  {
    if ( *((_DWORD *)off_1C02880D8 + 7) )
      HIDWORD(gTouchPadParameters) |= 4u;
    if ( *((_DWORD *)off_1C02880D8 + 11) )
      HIDWORD(gTouchPadParameters) |= 8u;
    if ( *((_DWORD *)off_1C02880D8 + 3) <= 4u )
      DWORD2(gTouchPadParameters) = *((_DWORD *)off_1C02880D8 + 3);
    if ( (unsigned int)(*((_DWORD *)off_1C02880D8 + 31) - 1) <= 0x13 )
      qword_1C0294F10 = *((_DWORD *)off_1C02880D8 + 31);
    if ( *((_DWORD *)off_1C02880D8 + 51) <= 0x64u )
      *((_BYTE *)&qword_1C0294F10 + 5) = *((_BYTE *)off_1C02880D8 + 204);
    if ( *((_DWORD *)off_1C02880D8 + 47) )
      *(&qword_1C0294F10 + 1) |= 0x40u;
    if ( !*((_DWORD *)off_1C02880D8 + 35) )
      *(&qword_1C0294F10 + 1) &= ~1u;
    if ( !*((_DWORD *)off_1C02880D8 + 39) )
      *(&qword_1C0294F10 + 1) &= ~2u;
    if ( !*((_DWORD *)off_1C02880D8 + 43) )
      *(&qword_1C0294F10 + 1) &= ~4u;
    if ( !*((_DWORD *)off_1C02880D8 + 23) )
      HIDWORD(gTouchPadParameters) &= ~0x200u;
    if ( !*((_DWORD *)off_1C02880D8 + 27) )
      HIDWORD(gTouchPadParameters) &= ~0x400u;
    if ( !*((_DWORD *)off_1C02880D8 + 15) )
      HIDWORD(gTouchPadParameters) &= ~0x80u;
    if ( !*((_DWORD *)off_1C02880D8 + 19) )
      HIDWORD(gTouchPadParameters) &= ~0x100u;
    if ( !*((_DWORD *)off_1C02880D8 + 55) )
      *(&qword_1C0294F10 + 1) &= ~0x10000u;
    LODWORD(gTouchPadParameters) = 0;
    gTouchPadMonitor = 1;
  }
}
