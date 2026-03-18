/*
 * XREFs of ?CoreMsgCloseAllDestinations@InputExtensibilityCallout@@AEAAXXZ @ 0x1C00C1160
 * Callers:
 *     UserDeactivateMITInputProcessing @ 0x1C01EBB48 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 */

void __fastcall InputExtensibilityCallout::CoreMsgCloseAllDestinations(InputExtensibilityCallout *this)
{
  char *v1; // rbx
  HANDLE *v3; // rsi
  HANDLE *v4; // rdi

  v1 = (char *)this + 8;
  RIMLockExclusive((__int64)this + 8);
  v3 = (HANDLE *)((char *)this + 32);
  v4 = (HANDLE *)((char *)this + 912);
  while ( v3 != v4 )
  {
    if ( *v3 )
    {
      ZwClose(*v3);
      *v3 = 0LL;
    }
    v3 += 5;
  }
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
