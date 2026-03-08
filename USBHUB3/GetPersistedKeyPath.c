/*
 * XREFs of GetPersistedKeyPath @ 0x1C0042E20
 * Callers:
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C00436CC (UsbDualRoleFeaturesQueryLocalMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C00258CC (WPP_RECORDER_SF_Ld.c)
 */

__int64 __fastcall GetPersistedKeyPath(_QWORD *a1)
{
  int PersistedStateLocation; // ebx
  __int64 v3; // rdx
  void *Pool2; // rdi
  __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]
  unsigned int v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = 0;
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             L"USB",
                             0LL,
                             L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USB",
                             0LL,
                             0LL,
                             0,
                             &v9);
  if ( PersistedStateLocation == -2147483643 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, v9, 1430540870LL);
    if ( Pool2 )
    {
      PersistedStateLocation = RtlGetPersistedStateLocation(
                                 L"USB",
                                 0LL,
                                 L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USB",
                                 0LL,
                                 Pool2,
                                 v9,
                                 0LL);
      if ( PersistedStateLocation >= 0 )
      {
        *a1 = Pool2;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v7) = PersistedStateLocation;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0xCu,
            (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
            v7);
        }
        ExFreePoolWithTag(Pool2, 0);
      }
    }
    else
    {
      PersistedStateLocation = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v8) = -1073741670;
        LODWORD(v6) = v9;
        WPP_RECORDER_SF_Ld(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v3,
          1u,
          0xBu,
          (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
          v6,
          v8);
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v6) = PersistedStateLocation;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0xAu,
      (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
      v6);
  }
  return (unsigned int)PersistedStateLocation;
}
