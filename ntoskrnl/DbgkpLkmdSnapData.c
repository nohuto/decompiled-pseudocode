/*
 * XREFs of DbgkpLkmdSnapData @ 0x1405397D0
 * Callers:
 *     DbgkCaptureLiveDump @ 0x1409378F8 (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSnapPendingIrps @ 0x140938048 (DbgkpLkmdSnapPendingIrps.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DbgkpLkmdSnapData(__int64 a1, __int64 a2, __int64 a3)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD, _QWORD))(a1 + 16448))(
           a1 + 0x4000,
           a2,
           a3,
           0LL,
           0LL,
           0LL);
}
