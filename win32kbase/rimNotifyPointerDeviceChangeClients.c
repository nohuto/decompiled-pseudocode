unsigned int __fastcall rimNotifyPointerDeviceChangeClients(_DWORD *a1, __int64 a2, unsigned int *a3, int a4)
{
  unsigned int *v5; // rdi
  int v8; // ebx
  __int64 v9; // rdx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int result; // eax

  v5 = a3;
  v8 = 0;
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 313);
  v9 = v5[26];
  if ( a1[498] != (_DWORD)v9 )
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
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 336);
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
  v10 = v5[27];
  if ( a1[499] != v10 )
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
        else
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
          {
            LOBYTE(v9) = 0;
          }
          if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v9,
              (_DWORD)a3,
              (_DWORD)gRimLog,
              3,
              1,
              10,
              (__int64)&WPP_aa84a250efe730432bc7145be823620d_Traceguids);
          }
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
  if ( a1[501] != v5[29] || a1[502] != v5[30] )
    v8 |= 0x400u;
  if ( a1[503] != v5[31] || a1[504] != v5[32] )
    v8 |= 0x200u;
  result = v8 | 0x100;
  if ( !a4 )
    result = v8;
  if ( result )
    return ApiSetPostPointerEventMessage(a2, v9, result);
  return result;
}
