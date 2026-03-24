/*
 * XREFs of GetPersistedKeyPath @ 0x1C0040800
 * Callers:
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C0041090 (UsbDualRoleFeaturesQueryLocalMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C000BDB4 (WPP_RECORDER_SF_Ld.c)
 */

__int64 __fastcall GetPersistedKeyPath(_QWORD *a1)
{
  PVOID PoolWithTag; // rdi
  int PersistedStateLocation; // ebx
  unsigned __int16 v4; // r9
  __int64 v5; // rdx
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp+10h] BYREF

  PoolWithTag = 0LL;
  LODWORD(NumberOfBytes) = 0;
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             L"USB",
                             0LL,
                             L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USB",
                             0LL,
                             0LL,
                             0,
                             &NumberOfBytes);
  if ( PersistedStateLocation != -2147483643 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 10;
LABEL_4:
      LODWORD(v7) = PersistedStateLocation;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v4,
        (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
        v7);
      goto LABEL_12;
    }
    goto LABEL_12;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x55445246u);
  if ( PoolWithTag )
  {
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"USB",
                               0LL,
                               L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USB",
                               0LL,
                               PoolWithTag,
                               NumberOfBytes,
                               0LL);
    if ( PersistedStateLocation >= 0 )
    {
      *a1 = PoolWithTag;
      goto LABEL_12;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 12;
      goto LABEL_4;
    }
LABEL_12:
    if ( PersistedStateLocation < 0 && PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    return (unsigned int)PersistedStateLocation;
  }
  PersistedStateLocation = -1073741670;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v8) = -1073741670;
    LODWORD(v7) = NumberOfBytes;
    WPP_RECORDER_SF_Ld(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v5,
      1u,
      0xBu,
      (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
      v7,
      v8);
  }
  return (unsigned int)PersistedStateLocation;
}
