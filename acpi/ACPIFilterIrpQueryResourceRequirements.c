/*
 * XREFs of ACPIFilterIrpQueryResourceRequirements @ 0x1C0086660
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     ACPIDispatchForwardIrp @ 0x1C0001770 (ACPIDispatchForwardIrp.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C0009C8C (WPP_RECORDER_SF_qLqss.c)
 *     ACPIInternalSetProximityDomain @ 0x1C00883E8 (ACPIInternalSetProximityDomain.c)
 *     ACPIInternalSetSpare @ 0x1C0088498 (ACPIInternalSetSpare.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C008ED68 (PnpBiosGetDeviceResourceList.c)
 */

__int64 __fastcall ACPIFilterIrpQueryResourceRequirements(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  _QWORD *DeviceExtension; // rbx
  __int64 v5; // rdx
  int DeviceResourceList; // eax
  char v7; // r10
  const char *v8; // rcx
  const char *v9; // r8
  __int64 v10; // rdx
  PVOID P; // [rsp+70h] [rbp+18h] BYREF

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(BugCheckParameter3);
  ACPIInternalSetProximityDomain(DeviceExtension);
  ACPIInternalSetSpare(DeviceExtension);
  P = 0LL;
  LOBYTE(v5) = 1;
  DeviceResourceList = PnpBiosGetDeviceResourceList(BugCheckParameter3, v5, &P);
  if ( DeviceResourceList < 0 )
  {
    v7 = 0;
    v8 = byte_1C00622D0;
    v9 = byte_1C00622D0;
    if ( DeviceExtension )
    {
      v10 = DeviceExtension[1];
      v7 = (char)DeviceExtension;
      if ( (v10 & 0x200000000000LL) != 0 )
      {
        v8 = (const char *)DeviceExtension[76];
        if ( (v10 & 0x400000000000LL) != 0 )
          v9 = (const char *)DeviceExtension[77];
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0xFu,
        (__int64)&WPP_da1e537e7f723164eef71e38dd98447a_Traceguids,
        BugCheckParameter3,
        DeviceResourceList,
        v7,
        v8,
        v9);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return ACPIDispatchForwardIrp(BugCheckParameter3, Irp);
}
