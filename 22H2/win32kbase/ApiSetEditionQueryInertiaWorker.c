/*
 * XREFs of ApiSetEditionQueryInertiaWorker @ 0x1C02076A8
 * Callers:
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C01E1FE0 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionQueryInertiaWorker(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi

  v2 = 0;
  if ( qword_1C0296D10 && (int)qword_1C0296D10() >= 0 && qword_1C0296D18 )
    return (unsigned int)qword_1C0296D18(a1, a2);
  return v2;
}
