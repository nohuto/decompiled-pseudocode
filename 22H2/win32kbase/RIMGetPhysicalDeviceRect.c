/*
 * XREFs of RIMGetPhysicalDeviceRect @ 0x1C01569C0
 * Callers:
 *     NtRIMGetPhysicalDeviceRect @ 0x1C01537D0 (NtRIMGetPhysicalDeviceRect.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00551A0 (RawInputManagerObjectResolveHandle.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0058C60 (RawInputManagerDeviceObjectResolveHandle.c)
 */

__int64 __fastcall RIMGetPhysicalDeviceRect(char *a1, char *a2, _OWORD *a3)
{
  char *v4; // r14
  int v6; // edx
  int v7; // ebx
  _BYTE *v8; // rsi
  int v9; // edx
  int v10; // edx
  PVOID v11; // r14
  char *v12; // rcx
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF
  PVOID v15; // [rsp+78h] [rbp+20h] BYREF

  v4 = a2;
  v15 = 0LL;
  Object = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 132, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  v7 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v15);
  if ( v7 >= 0 )
  {
    v8 = v15;
    RIMLockExclusive((__int64)v15 + 104);
    if ( v8[81] )
    {
      v7 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 134, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
    }
    else
    {
      v7 = RawInputManagerDeviceObjectResolveHandle(v4, 3u, 1, &Object);
      if ( v7 >= 0 )
      {
        v11 = Object;
        if ( Object )
          v12 = (char *)Object + 88;
        else
          v12 = 0LL;
        if ( (*((_DWORD *)v12 + 50) & 0x80u) == 0 )
        {
          v7 = -1073741637;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v10) = 3;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v10, 1, 133, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
          }
        }
        else
        {
          if ( (unsigned __int64)a3 >= MmUserProbeAddress )
            a3 = (_OWORD *)MmUserProbeAddress;
          *a3 = *(_OWORD *)(*((_QWORD *)v12 + 60) + 140LL);
        }
        ObfDereferenceObject(v11);
      }
    }
    *((_QWORD *)v8 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v8);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v6, 1, 135, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v7);
  }
  return (unsigned int)v7;
}
