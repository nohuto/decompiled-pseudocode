__int64 __fastcall ACPIBuildRegRequest(ULONG_PTR a1, __int64 a2, void (__fastcall *a3)(__int64, __int64, _QWORD))
{
  __int64 DeviceExtension; // rax
  __int64 v6; // r8
  __int64 v7; // rsi
  int v8; // r14d
  const char *v9; // rcx
  const char *v10; // rdx
  __int64 v11; // rax
  int v12; // edi
  KIRQL v14; // al
  int v15; // edx
  KIRQL v16; // di
  unsigned int v17; // ebx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  LOBYTE(v6) = 0;
  v7 = DeviceExtension;
  v8 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
  v9 = (const char *)&unk_1C00622D0;
  v10 = (const char *)&unk_1C00622D0;
  if ( DeviceExtension )
  {
    v6 = DeviceExtension;
    v11 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v9 = *(const char **)(v6 + 608);
      if ( (v11 & 0x400000000000LL) != 0 )
        v10 = *(const char **)(v6 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v10,
      0xAu,
      0x56u,
      (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
      a2,
      v8 - 1,
      v6,
      v9,
      v10);
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v12 = *(_DWORD *)(a2 + 48);
  if ( v12 >= 0 )
  {
    v14 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v15 = 21;
    v16 = v14;
    if ( v8 != 1 )
      v15 = 37;
    v17 = ACPIBuildRunMethodRequest(v7, (_DWORD)a3, a2, 1195725407, v15, 1);
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v16);
    if ( v17 == 259 )
      return (unsigned int)-1073741802;
    return v17;
  }
  else
  {
    if ( a3 )
      a3(v7, a2, (unsigned int)v12);
    return (unsigned int)v12;
  }
}
