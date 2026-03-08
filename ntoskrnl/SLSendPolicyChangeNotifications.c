/*
 * XREFs of SLSendPolicyChangeNotifications @ 0x1409F788C
 * Callers:
 *     SLUpdateLicenseDataInternal @ 0x1409F78B4 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     ExNotifyCallback @ 0x1402D2F00 (ExNotifyCallback.c)
 */

void __fastcall SLSendPolicyChangeNotifications(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 46848);
  if ( v1 )
    ExNotifyCallback(v1, 0LL, 0LL);
}
