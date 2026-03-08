/*
 * XREFs of ?_TryBuffer@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z @ 0x1C01DFAA4
 * Callers:
 *     ?_BufferPenPacket@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z @ 0x1C01DF4DC (-_BufferPenPacket@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z.c)
 *     ?_ProcessTouchPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@KH@Z @ 0x1C01DF71C (-_ProcessTouchPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@KH@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PalmTelemetry::_TryBuffer(_DWORD *a1, _DWORD *a2, int a3)
{
  int v3; // r10d
  int v5; // edi
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx

  v3 = a1[3];
  v5 = a1[6];
  result = (unsigned int)(-1713954085 * (v5 + v3));
  v7 = (v5 + v3) % 0x1AAu;
  if ( v3 == 426 )
  {
    if ( *a1 )
      return result;
    a1[6] = (v5 + 1) % 0x1AAu;
  }
  else
  {
    ++v3;
  }
  v8 = 3 * v7;
  a1[2 * v8 + 521] = a2[611];
  a1[6 * v7 + 522] = a2[2];
  a1[2 * v8 + 525] = a2[624];
  a1[2 * v8 + 523] = a2[622];
  result = (unsigned int)a2[623];
  a1[2 * v8 + 524] = result;
  a1[2 * v8 + 520] = a3;
  a1[3] = v3;
  return result;
}
