/*
 * XREFs of ReadPortWithIndex8 @ 0x14067B0C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ReadPortWithIndex8(__int64 a1, unsigned __int8 a2)
{
  return ((__int64 (__fastcall *)(_QWORD))UartHardwareAccess[0])(*(_QWORD *)a1 + a2
                                                                               * (unsigned int)*(unsigned __int8 *)(a1 + 14));
}
