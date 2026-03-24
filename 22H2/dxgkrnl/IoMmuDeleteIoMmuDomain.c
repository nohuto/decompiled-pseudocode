/*
 * XREFs of IoMmuDeleteIoMmuDomain @ 0x1C02D20A0
 * Callers:
 *     DpiResetIoMmuContext @ 0x1C0057B68 (DpiResetIoMmuContext.c)
 *     DpiDestroyIoMmuContext @ 0x1C02D2278 (DpiDestroyIoMmuContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IoMmuDeleteIoMmuDomain(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
  {
    result = ((__int64 (*)(void))qword_1C00B3030)();
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return result;
}
