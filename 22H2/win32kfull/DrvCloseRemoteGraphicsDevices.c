/*
 * XREFs of DrvCloseRemoteGraphicsDevices @ 0x1C0163144
 * Callers:
 *     xxxRemoteReconnect @ 0x1C0161DA0 (xxxRemoteReconnect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagGRAPHICS_DEVICE *DrvCloseRemoteGraphicsDevices()
{
  struct tagGRAPHICS_DEVICE *result; // rax
  struct tagGRAPHICS_DEVICE *v1; // rbx
  struct tagGRAPHICS_DEVICE *v2; // rdi
  struct tagGRAPHICS_DEVICE *v3; // rsi
  struct tagGRAPHICS_DEVICE *v4; // rax
  __int64 v5; // rax

  if ( !(unsigned int)UserIsUserCritSecIn() )
  {
    v5 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v5);
  }
  result = gpRemoteGraphicsDeviceList;
  v1 = gpRemoteGraphicsDeviceList;
  if ( gpRemoteGraphicsDeviceList )
  {
    v2 = gpRemoteGraphicsDeviceList;
    do
    {
      v3 = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)v1 + 16);
      if ( (*((_DWORD *)v1 + 40) & 0x4000000) != 0 )
      {
        *((_QWORD *)v2 + 16) = v3;
        v4 = v3;
        if ( v2 != v1 )
          v4 = v2;
        v2 = v4;
        if ( gpRemoteGraphicsDeviceList == v1 )
          gpRemoteGraphicsDeviceList = v3;
        if ( gpRemoteGraphicsDeviceListLast == v1 )
          gpRemoteGraphicsDeviceListLast = v4;
        --gcRemoteNextGlobalPhysicalOutputNumber;
        if ( *((_QWORD *)v1 + 38) )
        {
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))gDxgkInterface[50])(
            *((_QWORD *)v1 + 35),
            0LL,
            *((_QWORD *)v1 + 36));
          *((_QWORD *)v1 + 35) = 0LL;
          *((_QWORD *)v1 + 37) = 0LL;
          *((_QWORD *)v1 + 38) = 0LL;
        }
        result = (struct tagGRAPHICS_DEVICE *)DrvCleanupOneGraphicsDevice(v1);
      }
      else
      {
        v2 = v1;
      }
      v1 = v3;
    }
    while ( v3 );
  }
  return result;
}
