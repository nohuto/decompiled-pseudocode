/*
 * XREFs of ?CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ @ 0x1C0094A28
 * Callers:
 *     xxxUserProcessCallout @ 0x1C0074450 (xxxUserProcessCallout.c)
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C0094980 (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 */

void __fastcall InputExtensibilityCallout::CloseCoreMsgPort(InputExtensibilityCallout *this)
{
  void *v2; // rcx

  RIMLockExclusive((__int64)this + 8);
  v2 = (void *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    ZwClose(v2);
    *((_QWORD *)this + 3) = 0LL;
  }
  *((_QWORD *)this + 2) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 8, 0LL);
  KeLeaveCriticalRegion();
}
