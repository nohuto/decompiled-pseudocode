/*
 * XREFs of DxgkEngGetRemoteDeviceCount @ 0x1C0271420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (*DxgkEngGetRemoteDeviceCount())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02D5708;
  if ( qword_1C02D5708 )
    return (__int64 (*)(void))qword_1C02D5708();
  return result;
}
