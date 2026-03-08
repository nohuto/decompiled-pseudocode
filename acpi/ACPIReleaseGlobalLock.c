/*
 * XREFs of ACPIReleaseGlobalLock @ 0x1C003937C
 * Callers:
 *     ACPIIoctlReleaseGlobalLock @ 0x1C0031418 (ACPIIoctlReleaseGlobalLock.c)
 *     GlobalLockEventHandler @ 0x1C0039690 (GlobalLockEventHandler.c)
 * Callees:
 *     ACPIAcquireHardwareGlobalLock @ 0x1C0004C30 (ACPIAcquireHardwareGlobalLock.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001B508 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_i @ 0x1C002293C (WPP_RECORDER_SF_i.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0024980 (WPP_RECORDER_SF_qq.c)
 *     ACPIReleaseHardwareGlobalLock @ 0x1C00394BC (ACPIReleaseHardwareGlobalLock.c)
 *     ACPIStartNextGlobalLockRequest @ 0x1C0039504 (ACPIStartNextGlobalLockRequest.c)
 */

__int64 __fastcall ACPIReleaseGlobalLock(__int64 a1)
{
  __int64 v2; // rcx
  int v5; // edx

  v2 = *((_QWORD *)AcpiInformation + 9);
  if ( a1 == v2 )
  {
    if ( (*((_DWORD *)AcpiInformation + 20))-- == 1 )
    {
      *((_QWORD *)AcpiInformation + 9) = 0LL;
      ACPIReleaseHardwareGlobalLock();
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_i(
          WPP_GLOBAL_Control->DeviceExtension,
          v5,
          3,
          17,
          (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
          a1);
      }
      if ( *((_UNKNOWN **)AcpiInformation + 6) != (_UNKNOWN *)((char *)AcpiInformation + 48)
        && ACPIAcquireHardwareGlobalLock(*((volatile signed __int32 **)AcpiInformation + 5)) )
      {
        ACPIStartNextGlobalLockRequest();
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_qD(
        WPP_GLOBAL_Control->DeviceExtension,
        4,
        3,
        16,
        (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
        *((_QWORD *)AcpiInformation + 9),
        *((_DWORD *)AcpiInformation + 20));
    }
    return 0LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        WPP_GLOBAL_Control->DeviceExtension,
        4,
        3,
        15,
        (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
        v2,
        a1);
    return 3222536215LL;
  }
}
