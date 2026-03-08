/*
 * XREFs of HalpHvSetMachineCheckRecoveryState @ 0x140509C70
 * Callers:
 *     HalpMemoryErrorDeferredHandler @ 0x1405173D0 (HalpMemoryErrorDeferredHandler.c)
 *     HalpMemoryErrorDeferredRecovery @ 0x1405174A4 (HalpMemoryErrorDeferredRecovery.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpHvSetMachineCheckRecoveryState(int a1)
{
  __int64 result; // rax
  int v2; // [rsp+38h] [rbp+10h] BYREF
  int v3; // [rsp+3Ch] [rbp+14h]

  result = 0LL;
  if ( qword_140C621B0 )
  {
    v3 = a1;
    v2 = 2;
    return ((__int64 (__fastcall *)(int *))qword_140C621B0)(&v2);
  }
  return result;
}
