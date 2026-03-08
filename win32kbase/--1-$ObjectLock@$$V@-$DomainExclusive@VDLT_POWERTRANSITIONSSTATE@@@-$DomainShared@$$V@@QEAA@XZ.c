/*
 * XREFs of ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C00D473C
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C015A9DC (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DomainShared<>::DomainExclusive<DLT_POWERTRANSITIONSSTATE>::ObjectLock<>::~ObjectLock<>(__int64 a1)
{
  PERESOURCE *v2; // rcx

  if ( *(_BYTE *)(a1 + 40) )
  {
    v2 = *(PERESOURCE **)a1;
    if ( v2 )
      ExReleaseResourceAndLeaveCriticalRegion(*v2);
    *(_BYTE *)(a1 + 40) = 0;
  }
}
