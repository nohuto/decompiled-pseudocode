/*
 * XREFs of NtUserGetThreadDesktop @ 0x1C00B0190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserGetThreadDesktop(unsigned int a1)
{
  __int64 v1; // rbx

  v1 = 0LL;
  if ( qword_1C02952B0 && (int)qword_1C02952B0() >= 0 && qword_1C02952B8 )
    return qword_1C02952B8(a1);
  return v1;
}
