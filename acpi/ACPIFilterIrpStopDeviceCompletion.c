/*
 * XREFs of ACPIFilterIrpStopDeviceCompletion @ 0x1C0028EF0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00015BC (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C002E528 (ACPIInternalDecrementIrpReferenceCount.c)
 *     ACPIInitStopDevice @ 0x1C0087AE4 (ACPIInitStopDevice.c)
 */

__int64 __fastcall ACPIFilterIrpStopDeviceCompletion(ULONG_PTR a1, __int64 a2)
{
  int v2; // esi
  __int64 DeviceExtension; // rax
  char v5; // r8
  const char *v6; // rcx
  __int64 v7; // rbx
  const char *v8; // rdx
  __int64 v9; // rax

  v2 = *(_DWORD *)(a2 + 48);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = 0;
  v6 = (const char *)&unk_1C00622D0;
  v7 = DeviceExtension;
  v8 = (const char *)&unk_1C00622D0;
  if ( DeviceExtension )
  {
    v5 = DeviceExtension;
    v9 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v6 = *(const char **)(v7 + 608);
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = *(const char **)(v7 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x1Eu,
      (__int64)&WPP_da1e537e7f723164eef71e38dd98447a_Traceguids,
      a2,
      (__int64)off_1C006C030,
      v2,
      v5,
      v6,
      v8);
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  if ( v2 >= 0 )
  {
    *(_DWORD *)(v7 + 368) = 0;
    ACPIInitStopDevice(v7, 0LL);
  }
  ACPIInternalDecrementIrpReferenceCount(v7);
  return 0LL;
}
