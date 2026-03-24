/*
 * XREFs of rimNotifyPointerDeviceChangeClients @ 0x1C0165D44
 * Callers:
 *     rimSetDeviceDisplayConfig @ 0x1C0165EBC (rimSetDeviceDisplayConfig.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetPostPointerEventMessage @ 0x1C01D01B0 (ApiSetPostPointerEventMessage.c)
 */

unsigned int __fastcall rimNotifyPointerDeviceChangeClients(_DWORD *a1, __int64 a2, unsigned int *a3, int a4)
{
  int v8; // ebx
  __int64 v9; // rdx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int result; // eax

  v8 = 0;
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 313);
  v9 = a3[26];
  if ( a1[500] != (_DWORD)v9 )
  {
    v9 = (unsigned int)(v9 - 1);
    if ( (_DWORD)v9 )
    {
      v9 = (unsigned int)(v9 - 1);
      if ( (_DWORD)v9 )
      {
        v9 = (unsigned int)(v9 - 1);
        if ( (_DWORD)v9 )
        {
          if ( (_DWORD)v9 == 1 )
            v8 = 32;
          else
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 336);
        }
        else
        {
          v8 = 16;
        }
      }
      else
      {
        v8 = 8;
      }
    }
    else
    {
      v8 = 4;
    }
  }
  v10 = a3[27];
  if ( a1[501] != v10 )
  {
    v11 = v10 - 2;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 == 1 )
        {
          v8 |= 0x800u;
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 10, (__int64)&WPP_516b30da09af3a4d670a255114438942_Traceguids);
        }
      }
      else
      {
        v8 |= 0x40u;
      }
    }
    else
    {
      v8 |= 0x80u;
    }
  }
  if ( a1[503] != a3[29] || a1[504] != a3[30] )
    v8 |= 0x400u;
  if ( a1[505] != a3[31] || a1[506] != a3[32] )
    v8 |= 0x200u;
  result = v8 | 0x100;
  if ( !a4 )
    result = v8;
  if ( result )
    return ApiSetPostPointerEventMessage(a2, v9, result);
  return result;
}
