/*
 * XREFs of DxgkEngGetRemoteDeviceCount @ 0x1C01FBB80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 (*DxgkEngGetRemoteDeviceCount())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0256188;
  if ( qword_1C0256188 )
    return (__int64 (*)(void))qword_1C0256188();
  return result;
}
