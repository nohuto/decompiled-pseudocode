/*
 * XREFs of RaidUnitMaintenanceTime @ 0x1C003FB34
 * Callers:
 *     RaidUnitEndMaintenanceTime @ 0x1C003F950 (RaidUnitEndMaintenanceTime.c)
 *     RaidUnitIoCoalescingCallback @ 0x1C003FAA0 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitPowerSettingCallback @ 0x1C003FCF0 (RaidUnitPowerSettingCallback.c)
 * Callees:
 *     RaidUnitPoFxActivateComponent @ 0x1C0005D80 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0006380 (RaidUnitCheckAndAcquirePoFx.c)
 *     McTemplateK0zjquuujsss_EtwWriteTransfer @ 0x1C003E3F0 (McTemplateK0zjquuujsss_EtwWriteTransfer.c)
 */

void __fastcall RaidUnitMaintenanceTime(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx

  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    v3 = *(_QWORD *)(a1 + 1744);
    v4 = *(_DWORD *)(v3 + 32);
    if ( (v4 & 0x100) != 0
      && (v4 & 0x400) != 0
      && (v4 & 0x800) == 0
      && !_interlockedbittestandset((volatile signed __int32 *)(v3 + 140), 0) )
    {
      v5 = *(_QWORD *)(a1 + 1744);
      if ( (__int64)(MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v5 + 128)) > 864000000000LL
        && (*(_QWORD *)(v5 + 120)
         || (*(_QWORD *)(*(_QWORD *)(a1 + 1744) + 120LL) = ExAllocateTimer(RaidUnitEndMaintenanceTime, a1, 0LL, v2),
             v5 = *(_QWORD *)(a1 + 1744),
             *(_QWORD *)(v5 + 120))) )
      {
        if ( byte_1C0069845 < 0 )
          McTemplateK0zjquuujsss_EtwWriteTransfer(
            a1 + 169,
            a1 + 160,
            a1 + 1976,
            *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4864LL),
            *(_QWORD *)(a1 + 24) + 5192LL,
            *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
            *(_BYTE *)(a1 + 96),
            *(_BYTE *)(a1 + 97),
            *(_BYTE *)(a1 + 98),
            a1 + 1976,
            (const char *)(a1 + 160),
            (const char *)(a1 + 169),
            (const char *)(a1 + 186));
        RaidUnitPoFxActivateComponent(a1, 0, 2LL, 0LL);
        *(_DWORD *)(*(_QWORD *)(a1 + 1744) + 136LL) = 0;
        ExSetTimer(*(_QWORD *)(*(_QWORD *)(a1 + 1744) + 120LL), -600000000LL, 0LL, 0LL);
      }
      else
      {
        *(_DWORD *)(v5 + 140) &= ~1u;
      }
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  }
}
