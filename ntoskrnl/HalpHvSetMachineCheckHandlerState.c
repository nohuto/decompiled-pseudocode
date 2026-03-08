/*
 * XREFs of HalpHvSetMachineCheckHandlerState @ 0x140509C30
 * Callers:
 *     HalpMceInit @ 0x140A87B68 (HalpMceInit.c)
 *     HalpPostSleepMP @ 0x140A93F28 (HalpPostSleepMP.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 HalpHvSetMachineCheckHandlerState()
{
  __int64 result; // rax
  __int64 v1; // [rsp+38h] [rbp+10h] BYREF

  result = 0LL;
  v1 = 0LL;
  if ( qword_140C621B0 )
  {
    LODWORD(v1) = 1;
    BYTE4(v1) = 1;
    return ((__int64 (__fastcall *)(__int64 *))qword_140C621B0)(&v1);
  }
  return result;
}
