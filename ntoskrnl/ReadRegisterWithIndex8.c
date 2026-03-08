/*
 * XREFs of ReadRegisterWithIndex8 @ 0x14067B180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ReadRegisterWithIndex8(__int64 a1, unsigned __int8 a2)
{
  return ((__int64 (__fastcall *)(_QWORD))off_140C06B20[0])(*(_QWORD *)a1 + a2
                                                                          * (unsigned int)*(unsigned __int8 *)(a1 + 14));
}
