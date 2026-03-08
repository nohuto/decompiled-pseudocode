/*
 * XREFs of ?_BufferPenPacket@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z @ 0x1C01DF4DC
 * Callers:
 *     ?_ProcessPenPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@K@Z @ 0x1C01DF608 (-_ProcessPenPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@K@Z.c)
 * Callees:
 *     ?_TryBuffer@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z @ 0x1C01DFAA4 (-_TryBuffer@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z.c)
 */

__int64 __fastcall PalmTelemetry::_BufferPenPacket(_DWORD *a1, __int64 a2, unsigned int a3)
{
  int v3; // r10d

  if ( a1[2] == 1 )
  {
    v3 = a1[3];
    if ( v3 )
    {
      if ( (unsigned int)(a1[6 * ((v3 + a1[6] - 1) % 0x1AAu) + 520] - 5) <= 1 )
        a1[3] = v3 - 1;
    }
  }
  return PalmTelemetry::_TryBuffer(a1, a2, a3);
}
