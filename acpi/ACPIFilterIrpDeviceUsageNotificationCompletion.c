__int64 __fastcall ACPIFilterIrpDeviceUsageNotificationCompletion(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rbx
  __int64 v5; // rdi
  int v6; // r14d
  const char *v7; // rax
  char v8; // r8
  const char *v9; // rdx
  __int64 v10; // rcx
  int v11; // edx
  unsigned int v12; // edx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(v5 + 3) |= 1u;
  v6 = *(_DWORD *)(a2 + 48);
  v7 = (const char *)&unk_1C00622D0;
  v8 = 0;
  v9 = (const char *)&unk_1C00622D0;
  if ( DeviceExtension )
  {
    v10 = *(_QWORD *)(DeviceExtension + 8);
    v8 = DeviceExtension;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v7 = *(const char **)(DeviceExtension + 608);
      if ( (v10 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(DeviceExtension + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0xCu,
      (__int64)&WPP_da1e537e7f723164eef71e38dd98447a_Traceguids,
      a2,
      (__int64)off_1C006C0C0,
      v6,
      v8,
      v7,
      v9);
  if ( v6 >= 0 )
  {
    if ( *(_DWORD *)(v5 + 16) == 2 )
    {
      if ( *(_BYTE *)(v5 + 8) )
        _InterlockedIncrement((volatile signed __int32 *)(DeviceExtension + 736));
      else
        _InterlockedDecrement((volatile signed __int32 *)(DeviceExtension + 736));
    }
    if ( *(_DWORD *)(v5 + 16) == 1 )
    {
      if ( *(_BYTE *)(v5 + 8) )
        _InterlockedIncrement((volatile signed __int32 *)(DeviceExtension + 740));
      else
        _InterlockedDecrement((volatile signed __int32 *)(DeviceExtension + 740));
    }
    if ( *(_DWORD *)(v5 + 16) == 3 )
    {
      if ( *(_BYTE *)(v5 + 8) )
        _InterlockedIncrement((volatile signed __int32 *)(DeviceExtension + 744));
      else
        _InterlockedDecrement((volatile signed __int32 *)(DeviceExtension + 744));
    }
    if ( *(_BYTE *)(v5 + 8) == 1 )
      *(_DWORD *)(a1 + 48) &= ~0x2000u;
    if ( !*(_BYTE *)(v5 + 8) && (*(_BYTE *)(DeviceExtension + 8) & 0x40) != 0 )
    {
      v11 = *(_DWORD *)(a1 + 48);
      if ( (*(_DWORD *)(*(_QWORD *)(DeviceExtension + 776) + 48LL) & 0x2000) != 0 )
        v12 = v11 | 0x2000;
      else
        v12 = v11 & 0xFFFFDFFF;
      *(_DWORD *)(a1 + 48) = v12;
    }
    IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(DeviceExtension + 784));
  }
  ACPIInternalDecrementIrpReferenceCount(DeviceExtension);
  return 0LL;
}
