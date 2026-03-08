/*
 * XREFs of HalpWheaInitDiscard @ 0x140B60A80
 * Callers:
 *     HalpWheaInitSystem @ 0x140A8CF90 (HalpWheaInitSystem.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     WheaConfigureErrorSource @ 0x140A8D100 (WheaConfigureErrorSource.c)
 *     HalpReserveHalPtes @ 0x140B3DD8C (HalpReserveHalPtes.c)
 *     KeHwPolicyLocateResource @ 0x140B60C10 (KeHwPolicyLocateResource.c)
 */

__int64 __fastcall HalpWheaInitDiscard(int a1)
{
  void *v1; // rax
  void *v2; // rdx
  void *v3; // r8
  __int64 v4; // rcx
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0LL;
  v7 = 0LL;
  if ( HalpHvWheaEnlightenedCpuManager )
  {
    v1 = HalpHvEpCpuid;
    v2 = HalpHvEpWriteMsr;
    v3 = HalpHvEpReadMsr;
  }
  else
  {
    v1 = HalpWheaNativeCpuid;
    v2 = HalpWheaNativeWriteMsr;
    v3 = HalpWheaNativeReadMsr;
  }
  HalpWheaCpuid = (__int64)v1;
  HalpWheaReadMsr = (__int64)v3;
  HalpWheaWriteMsr = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v2;
  if ( (int)KeHwPolicyLocateResource(a1, 102, 1, (unsigned int)&v8, (__int64)&v7) >= 0 && v7 >= 0x18 )
  {
    v4 = *(_QWORD *)(v8 + 16);
    if ( (v4 & 1) != 0 )
      HalpMcaRecoveryPolicy |= 1uLL;
    if ( (v4 & 2) != 0 )
      HalpMcaRecoveryPolicy |= 2uLL;
  }
  v6[0] = HalpWheaReadMsr;
  v6[1] = HalpWheaWriteMsr;
  PshedSetHalEnlightenments(v6);
  HalpWheaMappingMceReservation = HalpReserveHalPtes();
  if ( !HalpWheaMappingMceReservation )
    KeBugCheckEx(0x5Cu, 0x8100uLL, 1uLL, (ULONG_PTR)"minkernel\\hals\\lib\\whea\\whea.c", 0xB3uLL);
  HalpWheaMappingNmiReservation = HalpReserveHalPtes();
  if ( !HalpWheaMappingNmiReservation )
    KeBugCheckEx(0x5Cu, 0x8100uLL, 1uLL, (ULONG_PTR)"minkernel\\hals\\lib\\whea\\whea.c", 0xBEuLL);
  HalpWheaMappingReservation = HalpReserveHalPtes();
  if ( !HalpWheaMappingReservation )
    KeBugCheckEx(0x5Cu, 0x8100uLL, 1uLL, (ULONG_PTR)"minkernel\\hals\\lib\\whea\\whea.c", 0xC7uLL);
  HalpWheaMappingMceLock = 0LL;
  HalpWheaMappingNmiLock = 0LL;
  HalpWheaMappingLock = 0LL;
  off_140C01AC8[0] = (__int64 (__fastcall *)())HalpWheaInitProcessorGenericSection;
  WheaConfigureErrorSource(0, (__int64)&HalpMachineCheckConfiguration);
  WheaConfigureErrorSource(1, (__int64)&HalpMachineCheckConfiguration);
  WheaConfigureErrorSource(3, (__int64)&HalpNmiConfiguration);
  WheaConfigureErrorSource(5, (__int64)&HalpGenericConfiguration);
  WheaConfigureErrorSource(12, (__int64)&HalpGenericConfiguration);
  return 0LL;
}
