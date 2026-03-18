/*
 * XREFs of IvtDetachDeviceDomain @ 0x14052C220
 * Callers:
 *     <none>
 * Callees:
 *     IvtAttachDeviceDomainInternal @ 0x14052B8B8 (IvtAttachDeviceDomainInternal.c)
 */

__int64 __fastcall IvtDetachDeviceDomain(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  return IvtAttachDeviceDomainInternal(a1, a2, 0LL, a4);
}
