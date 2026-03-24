/*
 * XREFs of RIMGetDevicePreparsedData @ 0x1C0155EF0
 * Callers:
 *     NtRIMGetDevicePreparsedData @ 0x1C0153790 (NtRIMGetDevicePreparsedData.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00541A0 (RawInputManagerObjectResolveHandle.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C0156060 (RIMGetDevicePreparsedDataLockfree.c)
 */

__int64 __fastcall RIMGetDevicePreparsedData(char *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v7; // r15
  int v9; // edx
  int v10; // ebx
  _BYTE *v11; // rdi
  int v12; // edx
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  Object = 0LL;
  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 120, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  v10 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v10 >= 0 )
  {
    v11 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( v11[81] )
    {
      v10 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v12, 1, 121, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
    }
    else
    {
      v10 = RIMGetDevicePreparsedDataLockfree(v7, a3, a4, a5);
    }
    *((_QWORD *)v11 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v11 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v11);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v9, 1, 122, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v10);
  }
  return (unsigned int)v10;
}
