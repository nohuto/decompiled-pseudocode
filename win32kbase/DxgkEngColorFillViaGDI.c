/*
 * XREFs of DxgkEngColorFillViaGDI @ 0x1C02713F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall DxgkEngColorFillViaGDI(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C02D5698;
  if ( qword_1C02D5698 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C02D5698(a1);
  return result;
}
