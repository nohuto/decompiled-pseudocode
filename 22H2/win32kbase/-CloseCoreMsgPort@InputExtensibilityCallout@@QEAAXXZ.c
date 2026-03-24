/*
 * XREFs of ?CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ @ 0x1C007614C
 * Callers:
 *     xxxUserProcessCallout @ 0x1C003D2A0 (xxxUserProcessCallout.c)
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C00760E0 (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 */

void __fastcall InputExtensibilityCallout::CloseCoreMsgPort(InputExtensibilityCallout *this)
{
  InputExtensibilityCallout *v1; // rdi
  void *v2; // rcx

  v1 = gpInputExtensibilityCallout;
  RIMLockExclusive((__int64)gpInputExtensibilityCallout + 8);
  v2 = (void *)*((_QWORD *)v1 + 3);
  if ( v2 )
  {
    ZwClose(v2);
    *((_QWORD *)v1 + 3) = 0LL;
  }
  *((_QWORD *)v1 + 2) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v1 + 8, 0LL);
  KeLeaveCriticalRegion();
}
