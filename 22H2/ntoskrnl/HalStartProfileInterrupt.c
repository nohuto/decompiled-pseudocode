/*
 * XREFs of HalStartProfileInterrupt @ 0x1404BE750
 * Callers:
 *     KiStartProfileTarget @ 0x14051BFE0 (KiStartProfileTarget.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalStartProfileInterrupt(unsigned int a1)
{
  return (*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))HalpProfileInterface[0] + 1))(0LL, a1, 0LL);
}
