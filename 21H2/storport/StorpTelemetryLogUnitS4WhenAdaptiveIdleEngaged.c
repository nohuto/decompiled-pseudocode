/*
 * XREFs of StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged @ 0x1C001346C
 * Callers:
 *     RaidUnitSetSystemPowerIrp @ 0x1C0012DE8 (RaidUnitSetSystemPowerIrp.c)
 * Callees:
 *     RaidUnitGetMinimumPowerCyclePeriod @ 0x1C00060B8 (RaidUnitGetMinimumPowerCyclePeriod.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0006380 (RaidUnitCheckAndAcquirePoFx.c)
 *     _tlgKeywordOn @ 0x1C000E56C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001B09C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r10
  __int64 v4; // rcx
  __int64 v5; // r9
  int v6; // ecx
  int v7; // r8d
  char v8; // [rsp+30h] [rbp-D0h] BYREF
  char v9; // [rsp+31h] [rbp-CFh] BYREF
  char v10; // [rsp+32h] [rbp-CEh] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  int MinimumPowerCyclePeriod; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+70h] [rbp-90h]
  __int64 v17; // [rsp+78h] [rbp-88h]
  __int64 v18; // [rsp+80h] [rbp-80h]
  __int64 v19; // [rsp+88h] [rbp-78h]
  int *v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+98h] [rbp-68h]
  char *v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  char *v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  char *v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  int *v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  int *p_MinimumPowerCyclePeriod; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  __int64 *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]

  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    v2 = *(unsigned int *)(*(_QWORD *)(a1 + 1744) + 32LL);
    if ( (v2 & 0x100) != 0 && (v2 & 0x200) != 0 && (unsigned int)dword_1C0069058 > 5 )
    {
      if ( tlgKeywordOn(v2, 0x400000000000LL) )
      {
        v4 = *(_QWORD *)(a1 + 24);
        v17 = 16LL;
        v19 = 16LL;
        v16 = v4 + 5192;
        v18 = a1 + 1976;
        v11 = *(_DWORD *)(v4 + 56);
        v20 = &v11;
        v8 = *(_BYTE *)(a1 + 96);
        v22 = &v8;
        v9 = *(_BYTE *)(a1 + 97);
        v24 = &v9;
        v10 = *(_BYTE *)(a1 + 98);
        v26 = &v10;
        v21 = 4LL;
        v23 = 1LL;
        v25 = 1LL;
        v27 = 1LL;
        v12 = *(_DWORD *)(v3 + 28);
        v28 = &v12;
        v29 = 4LL;
        MinimumPowerCyclePeriod = RaidUnitGetMinimumPowerCyclePeriod(a1);
        v31 = 4LL;
        p_MinimumPowerCyclePeriod = &MinimumPowerCyclePeriod;
        v32 = &v14;
        v14 = v5;
        v33 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(v6, (int)&dword_1C005F5A1, v7, v5, 0xBu, &v15);
      }
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  }
}
