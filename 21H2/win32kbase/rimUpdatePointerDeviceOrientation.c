/*
 * XREFs of rimUpdatePointerDeviceOrientation @ 0x1C0199B60
 * Callers:
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C01979CC (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimUpdatePointerDeviceOrientation(__int64 a1, __int64 a2)
{
  int v2; // r8d
  _DWORD *v3; // r10
  _QWORD *v4; // r9
  __int64 result; // rax
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // r8d
  int v11; // r8d
  __int64 v12; // r8

  v2 = *(_DWORD *)(a1 + 224);
  v3 = (_DWORD *)a1;
  v4 = *(_QWORD **)(a1 + 392);
  result = (unsigned int)(v2 - 2);
  if ( (result & 0xFFFFFFFD) == 0 )
  {
    a2 = *(unsigned int *)(a1 + 176);
    *(_DWORD *)(a1 + 176) = *(_DWORD *)(a1 + 180);
    v6 = *(_DWORD *)(a1 + 188);
    *(_DWORD *)(a1 + 180) = a2;
    v7 = *(_DWORD *)(a1 + 184);
    v3[46] = v6;
    v8 = v3[49];
    v3[47] = v7;
    v9 = v3[48];
    v3[48] = v8;
    result = (unsigned int)v3[51];
    v3[49] = v9;
    a1 = (unsigned int)v3[50];
    v3[50] = result;
    v3[51] = a1;
  }
  if ( v4 )
  {
    v10 = v2 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = (unsigned int)(v11 - 1);
        if ( (_DWORD)v12 )
        {
          if ( (_DWORD)v12 != 1 )
            return MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, v12);
          result = v4[8];
        }
        else
        {
          result = v4[6];
        }
      }
      else
      {
        result = v4[4];
      }
    }
    else
    {
      result = v4[2];
    }
    v4[10] = result;
  }
  return result;
}
