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
