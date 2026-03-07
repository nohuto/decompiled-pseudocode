__int64 __fastcall EnableDisableRegionSpacesForDevice(__int64 a1, char a2)
{
  unsigned int v2; // ebp
  __int64 result; // rax
  __int64 i; // rbx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // edx
  int v10; // r8d
  int v11; // r14d

  v2 = 0;
  result = *(_DWORD *)(a1 + 668) & (unsigned int)AcpiRegisteredOpRegionMask;
  if ( (*(_DWORD *)(a1 + 668) & AcpiRegisteredOpRegionMask) != 0 )
  {
    ExAcquireFastMutex(&AcpiOpRegionLock);
    for ( i = AcpiOpRegionHandlerList; (__int64 *)i != &AcpiOpRegionHandlerList; i = *(_QWORD *)i )
    {
      v7 = *(_DWORD *)(i + 36);
      if ( v7 - 8 <= 1 )
      {
        v8 = *(_DWORD *)(a1 + 668);
        if ( _bittest(&v8, v7) )
        {
          v11 = EnableDisableDeviceRegionSpace(a1, v7, a2);
          if ( v11 < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_sdqD(WPP_GLOBAL_Control->DeviceExtension, v9, v10, 13);
            v2 = v11;
          }
        }
      }
    }
    ExReleaseFastMutex(&AcpiOpRegionLock);
    return v2;
  }
  return result;
}
