/*
 * XREFs of HUBPDO_D3ColdSupportInterfaceDereference @ 0x1C001ACD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall HUBPDO_D3ColdSupportInterfaceDereference(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = *(__int64 (__fastcall **)(_QWORD))(a1 + 336);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD))result(*(_QWORD *)(a1 + 320));
  return result;
}
