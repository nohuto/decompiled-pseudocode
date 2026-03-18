/*
 * XREFs of DxgkEngGetRemoteDeviceCount @ 0x1C0232560
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*DxgkEngGetRemoteDeviceCount())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0294598;
  if ( qword_1C0294598 )
    return (__int64 (*)(void))qword_1C0294598();
  return result;
}
