/*
 * XREFs of rimUpdatePointerDeviceOrientation @ 0x1C01BF04C
 * Callers:
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C01BCC8C (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimUpdatePointerDeviceOrientation(__int64 a1)
{
  int v1; // r8d
  _QWORD *v3; // r9
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  __int64 v14; // rax

  v1 = *(_DWORD *)(a1 + 224);
  v3 = *(_QWORD **)(a1 + 392);
  if ( ((v1 - 2) & 0xFFFFFFFD) == 0 )
  {
    v4 = *(_DWORD *)(a1 + 176);
    *(_DWORD *)(a1 + 176) = *(_DWORD *)(a1 + 180);
    v5 = *(_DWORD *)(a1 + 188);
    *(_DWORD *)(a1 + 180) = v4;
    v6 = *(_DWORD *)(a1 + 184);
    *(_DWORD *)(a1 + 184) = v5;
    v7 = *(_DWORD *)(a1 + 196);
    *(_DWORD *)(a1 + 188) = v6;
    v8 = *(_DWORD *)(a1 + 192);
    *(_DWORD *)(a1 + 192) = v7;
    v9 = *(_DWORD *)(a1 + 204);
    *(_DWORD *)(a1 + 196) = v8;
    v10 = *(_DWORD *)(a1 + 200);
    *(_DWORD *)(a1 + 200) = v9;
    *(_DWORD *)(a1 + 204) = v10;
  }
  if ( v3 )
  {
    v11 = v1 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          if ( v13 != 1 )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 438);
            return;
          }
          v14 = v3[8];
        }
        else
        {
          v14 = v3[6];
        }
      }
      else
      {
        v14 = v3[4];
      }
    }
    else
    {
      v14 = v3[2];
    }
    v3[10] = v14;
  }
}
