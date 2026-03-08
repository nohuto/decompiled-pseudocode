/*
 * XREFs of HalpStartProfileInterruptEx @ 0x140505FD0
 * Callers:
 *     HalStartProfileInterrupt @ 0x140504F00 (HalStartProfileInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpStartProfileInterruptEx(unsigned int a1, _DWORD *a2, unsigned int *a3, _QWORD *a4)
{
  __int64 v7; // rsi
  int v8; // r8d
  unsigned int v10; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+34h] [rbp-14h] BYREF
  _DWORD v12[4]; // [rsp+38h] [rbp-10h] BYREF

  v12[0] = 0;
  v10 = 0;
  v11 = 0;
  if ( HalpProfileInterface == &DefaultProfileInterface )
    v7 = HalpCounterStatus;
  else
    v7 = HalpCounterStatus + 8LL * HalpNumberOfCounters * KeGetPcr()->Prcb.Number;
  v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _DWORD *, unsigned int *, int *))HalpProfileInterface[1])(
         0LL,
         a1,
         v12,
         &v10,
         &v11);
  if ( v8 >= 0 )
  {
    if ( a2 )
      *(_DWORD *)(*(_QWORD *)(v7 + 8LL * v10) + 28LL) = *a2;
    if ( a3 )
      *a3 = v10;
    if ( a4 )
      *a4 = &HalpSampleProfilingCounters;
  }
  return (unsigned int)v8;
}
