__int64 __fastcall ACPIBuildDeviceResetPowerNode(_QWORD *BugCheckParameter2, ULONG_PTR BugCheckParameter3, __int64 a3)
{
  __int64 Pool2; // rsi
  __int64 v7; // rbp
  int v8; // edx
  __int64 v9; // r9
  void *v10; // r8

  Pool2 = ExAllocatePool2(64LL, 56LL, 1349542721LL);
  if ( Pool2 )
  {
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    BugCheckParameter2[56] = Pool2;
    v7 = *(_QWORD *)(a3 + 32);
    if ( (int)AMLIGetNameSpaceObject(*(void **)(v7 + 40)) < 0 )
    {
      v9 = BugCheckParameter2[1];
      v10 = &unk_1C00622D0;
      if ( (v9 & 0x200000000000LL) != 0 && (v9 & 0x400000000000LL) != 0 )
        v10 = (void *)BugCheckParameter2[77];
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sLqss(WPP_GLOBAL_Control->DeviceExtension, v8, (_DWORD)v10, 15);
      KeBugCheckEx(0xA5u, 6uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v7 + 40));
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_sqss(WPP_GLOBAL_Control->DeviceExtension, v8, 10, 16);
    }
    KeBugCheckEx(0xA5u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v7 + 40));
  }
  return 3221225626LL;
}
