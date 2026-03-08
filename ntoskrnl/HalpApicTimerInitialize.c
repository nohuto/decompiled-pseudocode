/*
 * XREFs of HalpApicTimerInitialize @ 0x1402DD200
 * Callers:
 *     HalpApicTimerStop @ 0x1402DD1D0 (HalpApicTimerStop.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpApicTimerInitialize(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // rbx

  v1 = a1;
  ((void (__fastcall *)(__int64, _QWORD))HalpApicWrite)(992LL, *((unsigned int *)a1 + 1));
  LODWORD(v1) = *v1 | 0x30000;
  ((void (__fastcall *)(__int64, __int64))HalpApicWrite)(896LL, 0xFFFFFFFFLL);
  ((void (__fastcall *)(__int64, _QWORD))HalpApicWrite)(800LL, (unsigned int)v1);
  return 0LL;
}
