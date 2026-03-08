/*
 * XREFs of ?GetCursorMaskAndXorBits@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@PEAPEAEPEAI@Z @ 0x1C0225F84
 * Callers:
 *     ?SendMITCursorShape@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z @ 0x1C02261A0 (-SendMITCursorShape@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     GreGetBitmapBits @ 0x1C02B07CC (GreGetBitmapBits.c)
 */

bool __fastcall CursorApiRouter::GetCursorMaskAndXorBits(
        HBITMAP a1,
        const struct tagBITMAP *a2,
        unsigned __int8 **a3,
        unsigned int *a4)
{
  bool v5; // zf
  unsigned int BitmapBits; // eax
  unsigned int v10; // edi
  __int64 v11; // rax
  unsigned __int8 *v12; // rbx
  bool result; // al
  int v14; // [rsp+58h] [rbp+10h] BYREF

  v5 = a2->bmPlanes == 1;
  *a3 = 0LL;
  *a4 = 0;
  if ( v5 && a2->bmBitsPixel == 1 )
  {
    v14 = 0;
    BitmapBits = GreGetBitmapBits(a1, 0LL, 0LL, &v14);
    v10 = BitmapBits;
    if ( BitmapBits )
    {
      v11 = Win32AllocPoolZInit(BitmapBits, 1919964227LL);
      v12 = (unsigned __int8 *)v11;
      if ( v11 )
      {
        if ( (unsigned int)GreGetBitmapBits(a1, v10, v11, &v14) == v10 )
        {
          if ( v10 >= a2->bmHeight * (((a2->bmWidth + 15) >> 3) & 0xFFFFFFFE) )
          {
            *a3 = v12;
            result = 1;
            *a4 = v10;
            return result;
          }
          v14 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 785);
        }
        Win32FreePool(v12);
      }
    }
  }
  else
  {
    v14 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 743);
  }
  return 0;
}
