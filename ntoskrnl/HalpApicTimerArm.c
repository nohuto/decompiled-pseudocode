/*
 * XREFs of HalpApicTimerArm @ 0x1402D9970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpApicTimerArm(unsigned __int8 *a1, int a2, unsigned int a3)
{
  __int64 v5; // rdx

  v5 = *a1;
  LODWORD(v5) = v5 | 0x20000;
  if ( a2 != 2 )
    v5 = *a1;
  ((void (__fastcall *)(__int64, __int64))HalpApicWrite)(800LL, v5);
  ((void (__fastcall *)(__int64, _QWORD))HalpApicWrite)(992LL, *((unsigned int *)a1 + 1));
  ((void (__fastcall *)(__int64, _QWORD))HalpApicWrite)(896LL, a3);
  return 0LL;
}
