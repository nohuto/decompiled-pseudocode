/*
 * XREFs of HalpTscDiscover @ 0x1403A0B58
 * Callers:
 *     HalpTimerRegisterBuiltinPlugins @ 0x1403A08F8 (HalpTimerRegisterBuiltinPlugins.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     HalpTscGetAttributes @ 0x1403736C4 (HalpTscGetAttributes.c)
 *     HalSocRequestApi @ 0x1403737EC (HalSocRequestApi.c)
 *     HalpTimerRegister @ 0x140373EB4 (HalpTimerRegister.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 HalpTscDiscover()
{
  int v0; // ebx
  __int64 v1; // rcx
  __int64 (__fastcall *v2)(__int64, __int64); // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int128 v6; // [rsp+30h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v8[18]; // [rsp+50h] [rbp-39h] BYREF
  char v9; // [rsp+F0h] [rbp+67h] BYREF
  int v10; // [rsp+F8h] [rbp+6Fh] BYREF

  v10 = 0;
  v9 = 0;
  v6 = 0LL;
  DestinationString = 0LL;
  memset(v8, 0, sizeof(v8));
  v8[13] = 0LL;
  v8[11] = &v10;
  v0 = 7;
  v8[0] = 0x9000000001LL;
  LODWORD(v8[17]) = 5;
  v8[12] = 0x4000000004LL;
  if ( (int)HalSocRequestApi(v1, 0LL, 6, 16LL, &v6) >= 0 )
  {
    v4 = ((__int64 (*)(void))v6)();
    v5 = 0LL;
    if ( v4 )
      v5 = v4;
    v8[13] = v5;
  }
  if ( (int)HalpTscGetAttributes(&HalpTscPerformanceStateInvariant, &HalpTscIdleStateInvariant, &v9) < 0 )
  {
    v0 = 24583;
LABEL_15:
    HIDWORD(v8[14]) = v0;
    goto LABEL_6;
  }
  if ( !HalpTscPerformanceStateInvariant )
    v0 = 8199;
  HIDWORD(v8[14]) = v0;
  if ( !HalpTscIdleStateInvariant )
  {
    v0 |= 0x4000u;
    goto LABEL_15;
  }
LABEL_6:
  v8[1] = HalpTscInitialize;
  if ( v9 )
  {
    v2 = HalpTscQueryCounterOrdered;
    HIDWORD(v8[14]) = v0 | 0x1000000;
  }
  else
  {
    v2 = (__int64 (__fastcall *)(__int64, __int64))HalpTscQueryCounter;
  }
  v8[2] = v2;
  RtlInitUnicodeString(&DestinationString, L"VEN_vvvv&DEV_dddd&SUBVEN_ssss&SUBDEV_yyyy&REV_rrrr&INST_iiii&UID_uuuuuuuu");
  HalpTimerRegister((__int64)v8, &DestinationString);
  return 0LL;
}
