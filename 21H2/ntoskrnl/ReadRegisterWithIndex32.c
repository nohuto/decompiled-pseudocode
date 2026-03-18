/*
 * XREFs of ReadRegisterWithIndex32 @ 0x140656890
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ReadRegisterWithIndex32(__int64 a1, unsigned __int8 a2)
{
  return ((__int64 (__fastcall *)(_QWORD))off_140C06A50[0])(*(_QWORD *)a1 + a2
                                                                          * (unsigned int)*(unsigned __int8 *)(a1 + 14));
}
