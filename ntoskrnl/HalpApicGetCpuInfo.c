/*
 * XREFs of HalpApicGetCpuInfo @ 0x1403A84A4
 * Callers:
 *     HalpApicRegisterIoUnit @ 0x1403A8208 (HalpApicRegisterIoUnit.c)
 *     HalpApicIsCmciImplemented @ 0x1403A8404 (HalpApicIsCmciImplemented.c)
 * Callees:
 *     HalSocRequestApi @ 0x1403737EC (HalSocRequestApi.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

char __fastcall HalpApicGetCpuInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall *v4)(__int64, __int64, __int64, __int64); // rax

  v4 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))HalpApicCpuApi;
  if ( HalpApicCpuApi )
    return v4(a1, a2, a3, a4);
  if ( (int)HalSocRequestApi(a1, 0LL, 2, 16LL, &HalpApicCpuApi) >= 0
    && (v4 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))HalpApicCpuApi) != 0LL )
  {
    return v4(a1, a2, a3, a4);
  }
  else
  {
    return 0;
  }
}
