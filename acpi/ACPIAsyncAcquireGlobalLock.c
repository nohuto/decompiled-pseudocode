/*
 * XREFs of ACPIAsyncAcquireGlobalLock @ 0x1C0039130
 * Callers:
 *     ACPIIoctlAcquireGlobalLock @ 0x1C002F39C (ACPIIoctlAcquireGlobalLock.c)
 *     GlobalLockEventHandler @ 0x1C0039690 (GlobalLockEventHandler.c)
 * Callees:
 *     ACPIAcquireHardwareGlobalLock @ 0x1C0004C30 (ACPIAcquireHardwareGlobalLock.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001B508 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_i @ 0x1C002293C (WPP_RECORDER_SF_i.c)
 */

__int64 __fastcall ACPIAsyncAcquireGlobalLock(__int64 a1)
{
  KIRQL v2; // si
  void **i; // rax
  void **v5; // rdi
  _QWORD *v6; // rcx
  char *v7; // rax
  void **v8; // rdx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_i(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      3,
      10,
      (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
      a1);
  if ( a1 == *((_QWORD *)AcpiInformation + 9) )
  {
    ++*((_DWORD *)AcpiInformation + 20);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        WPP_GLOBAL_Control->DeviceExtension,
        4,
        3,
        11,
        (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
        a1,
        *((_DWORD *)AcpiInformation + 20));
    return 0LL;
  }
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AcpiInformation + 8);
  if ( *((_UNKNOWN **)AcpiInformation + 6) == (_UNKNOWN *)((char *)AcpiInformation + 48)
    && ACPIAcquireHardwareGlobalLock(*((volatile signed __int32 **)AcpiInformation + 5)) )
  {
    *((_QWORD *)AcpiInformation + 9) = a1;
    *((_DWORD *)AcpiInformation + 20) = 1;
    KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_i(
        WPP_GLOBAL_Control->DeviceExtension,
        4,
        3,
        12,
        (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
        a1);
    return 0LL;
  }
  for ( i = (void **)*((_QWORD *)AcpiInformation + 6); ; i = (void **)*i )
  {
    if ( i == (void **)((char *)AcpiInformation + 48) )
    {
      *(_WORD *)(a1 + 10) = 1;
      v6 = (_QWORD *)(a1 + 16);
      v7 = (char *)AcpiInformation + 48;
      v8 = (void **)*((_QWORD *)AcpiInformation + 7);
      if ( *v8 != (char *)AcpiInformation + 48 )
        __fastfail(3u);
      *v6 = v7;
      *(_QWORD *)(a1 + 24) = v8;
      *v8 = v6;
      *((_QWORD *)v7 + 1) = v6;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_i(
          WPP_GLOBAL_Control->DeviceExtension,
          4,
          3,
          14,
          (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
          a1);
      goto LABEL_22;
    }
    v5 = i - 2;
    if ( i - 2 == (void **)a1 )
      break;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      3,
      13,
      (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
      a1,
      *(_WORD *)(a1 + 10));
  ++*((_WORD *)v5 + 5);
LABEL_22:
  KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v2);
  return 259LL;
}
