/*
 * XREFs of StorPortGetDeviceBase @ 0x1C0039500
 * Callers:
 *     StorPortGetDeviceBaseVrfy @ 0x1C007F240 (StorPortGetDeviceBaseVrfy.c)
 * Callees:
 *     WPP_SF_is @ 0x1C003D8E4 (WPP_SF_is.c)
 *     RaidTranslateResourceListAddress @ 0x1C0042B1C (RaidTranslateResourceListAddress.c)
 *     RaidAllocateAddressMapping @ 0x1C0044CB4 (RaidAllocateAddressMapping.c)
 */

__int64 __fastcall StorPortGetDeviceBase(__int64 a1, int a2, int a3, int a4, unsigned int a5, char a6)
{
  __int64 v8; // rbp
  int v9; // r8d
  const char *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi

  v8 = **(_QWORD **)(a1 - 16);
  if ( (int)RaidTranslateResourceListAddress((int)v8 + 304, a2, a3, a4, a5) < 0 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      v10 = "Io";
      if ( !a6 )
        v10 = "Memory";
      WPP_SF_is(WPP_GLOBAL_Control->AttachedDevice, (unsigned int)"Memory", v9, a4, (__int64)v10);
    }
    return 0LL;
  }
  if ( a6 )
    return 0LL;
  v11 = MmMapIoSpaceEx(0LL, a5, 516LL);
  v12 = v11;
  if ( v11 && (int)RaidAllocateAddressMapping((int)v8 + 792, a4, v11, a5, a3, *(_QWORD *)(v8 + 8)) < 0 )
    return 0LL;
  return v12;
}
