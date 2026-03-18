/*
 * XREFs of ACPICMButtonNotifyByDeviceObject @ 0x1C0018BD0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     ACPICMButtonNotify @ 0x1C0018AC8 (ACPICMButtonNotify.c)
 */

_QWORD *__fastcall ACPICMButtonNotifyByDeviceObject(ULONG_PTR a1, unsigned int a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  if ( result )
    return ACPICMButtonNotify(a1, (__int64)result, a2);
  return result;
}
