/*
 * XREFs of HsaDetachDeviceDomain @ 0x14052F690
 * Callers:
 *     <none>
 * Callees:
 *     HsaAttachDeviceDomainInternal @ 0x14052F148 (HsaAttachDeviceDomainInternal.c)
 */

__int64 __fastcall HsaDetachDeviceDomain(__int64 a1, __int64 a2)
{
  return HsaAttachDeviceDomainInternal(a1, a2, 0LL);
}
