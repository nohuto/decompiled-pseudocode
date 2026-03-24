/*
 * XREFs of SLSendPolicyChangeNotifications @ 0x14094E268
 * Callers:
 *     SLUpdateLicenseDataInternal @ 0x14094E290 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     ExNotifyCallback @ 0x1402B0640 (ExNotifyCallback.c)
 */

void __fastcall SLSendPolicyChangeNotifications(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 46848);
  if ( v1 )
    ExNotifyCallback(v1, 0LL, 0LL);
}
