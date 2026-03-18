/*
 * XREFs of PsPicoSystemCallDispatch @ 0x1409B202C
 * Callers:
 *     PsPicoAltSystemCallDispatch @ 0x1405E1600 (PsPicoAltSystemCallDispatch.c)
 *     PsSyscallProviderDispatch @ 0x1406593C0 (PsSyscallProviderDispatch.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PsPicoSystemCallDispatch(__int64 a1)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  ((void (__fastcall *)(__int64 *))qword_140C1BE08)(&v3);
  return *(_QWORD *)(a1 + 48);
}
