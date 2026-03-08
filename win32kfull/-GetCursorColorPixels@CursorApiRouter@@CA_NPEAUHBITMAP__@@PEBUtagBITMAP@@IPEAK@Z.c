/*
 * XREFs of ?GetCursorColorPixels@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@IPEAK@Z @ 0x1C0225E90
 * Callers:
 *     ?SendMITCursorShape@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z @ 0x1C02261A0 (-SendMITCursorShape@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     GreGetDIBitsInternal @ 0x1C02E044C (GreGetDIBitsInternal.c)
 */

bool __fastcall CursorApiRouter::GetCursorColorPixels(HBITMAP a1, const struct tagBITMAP *a2, int a3, unsigned int *a4)
{
  LONG bmWidth; // r10d
  LONG bmHeight; // r9d
  int v8; // [rsp+30h] [rbp-68h]
  _DWORD v9[3]; // [rsp+58h] [rbp-40h] BYREF
  __int64 v10; // [rsp+64h] [rbp-34h]
  __int128 v11; // [rsp+6Ch] [rbp-2Ch]
  __int64 v12; // [rsp+7Ch] [rbp-1Ch]

  bmWidth = a2->bmWidth;
  bmHeight = a2->bmHeight;
  if ( bmHeight * bmWidth == a3 )
  {
    v9[1] = a2->bmWidth;
    v9[2] = -bmHeight;
    v12 = 0LL;
    v9[0] = 40;
    v11 = 0LL;
    v10 = 2097153LL;
    return (unsigned int)GreGetDIBitsInternal(
                           *(_QWORD *)(gpDispInfo + 56LL),
                           (int)a1,
                           a3,
                           bmHeight,
                           (__int64)a4,
                           v9,
                           v8,
                           bmHeight * (((32 * bmWidth) >> 3) & 0xFFFFFFFC),
                           40) != 0;
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 811);
    return 0;
  }
}
