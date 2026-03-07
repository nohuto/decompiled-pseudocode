__int64 __fastcall ACPIVectorEnable(__int64 a1, unsigned int *a2)
{
  int v2; // esi
  __int64 v3; // rbx
  KIRQL v4; // di
  __int64 v5; // rcx
  char v6; // r8
  int v7; // edx

  v2 = *a2;
  v3 = (unsigned int)ACPIGpeIndexToGpeRegister(*a2);
  v4 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0LL);
  v5 = v2 & 7;
  v6 = 1 << v5;
  LOBYTE(v5) = 1;
  *((_BYTE *)GpeEnable + v3) |= v6;
  *((_BYTE *)GpeCurEnable + v3) |= v6;
  ACPIGpeEnableDisableEvents(v5);
  KeReleaseSpinLock(&GpeTableLock, v4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      14,
      14,
      (__int64)&WPP_7b0d4207db2a3169cd3bb4e871adee9d_Traceguids,
      v2);
  }
  return 0LL;
}
