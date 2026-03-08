/*
 * XREFs of ExUpdateLicenseData @ 0x14079C4D0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     SLUpdateLicenseDataInternal @ 0x1409F78B4 (SLUpdateLicenseDataInternal.c)
 */

__int64 ExUpdateLicenseData()
{
  __int64 v0; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  unsigned int v2; // r9d

  Blink = PsGetCurrentServerSiloGlobals()[56].Blink;
  if ( qword_140D53510 )
    return qword_140D53510(Blink, v2, v0);
  else
    return SLUpdateLicenseDataInternal(Blink, v2, v0);
}
