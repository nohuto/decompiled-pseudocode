/*
 * XREFs of HalpMcaPopulateErrorData @ 0x14050135C
 * Callers:
 *     HalpMcaReadError @ 0x1405014E0 (HalpMcaReadError.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14037D1B4 (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpMcaInitializeErrorSection @ 0x140501288 (HalpMcaInitializeErrorSection.c)
 *     HalpReadExtendedMcaRegistersAMD @ 0x1405040C4 (HalpReadExtendedMcaRegistersAMD.c)
 *     HalpReadExtendedMcaRegistersIntel @ 0x140504248 (HalpReadExtendedMcaRegistersIntel.c)
 *     HalpHvGetMachineCheckContext @ 0x140509A64 (HalpHvGetMachineCheckContext.c)
 *     HalpWheaReadMsrAddress @ 0x140516540 (HalpWheaReadMsrAddress.c)
 *     HalpWheaReadMsrMisc @ 0x140516598 (HalpWheaReadMsrMisc.c)
 */

char __fastcall HalpMcaPopulateErrorData(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v14; // di
  bool v15; // zf
  _OWORD v17[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+80h] [rbp+28h]

  HalpMcaInitializeErrorSection(a5, a1);
  v18 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))HalpWheaReadMsr)(a1, 378LL, 0LL);
  *(_DWORD *)(a5 + 36) = a2;
  *(_QWORD *)(a5 + 40) = a3;
  if ( (a3 & 0x400000000000000LL) != 0 )
    *(_QWORD *)(a5 + 48) = HalpWheaReadMsrAddress(a1, a2);
  v10 = 0LL;
  if ( (a3 & 0x800000000000000LL) != 0 && HalpMcaMiscImplemented )
    *(_QWORD *)(a5 + 56) = HalpWheaReadMsrMisc(a1, a2);
  v11 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))HalpWheaReadMsr)(a1, 377LL, 0LL);
  v13 = *(unsigned int *)(a5 + 4);
  if ( (_DWORD)v13 == 1 )
  {
    LOBYTE(v11) = HalpReadExtendedMcaRegistersIntel(v11, v12, a1, a5);
  }
  else if ( (_DWORD)v13 == 2 )
  {
    LOBYTE(v11) = HalpReadExtendedMcaRegistersAMD(v13, a2, a1, a5);
  }
  v14 = v18;
  if ( (v18 & 4) != 0 )
  {
    v15 = HalpHvWheaEnlightenedCpuManager == 0;
    *(_QWORD *)(a5 + 20) = v18;
    if ( !v15 )
    {
      v17[0] = 0LL;
      if ( (int)HalpHvGetMachineCheckContext((unsigned int)a1, v17) >= 0 && LODWORD(v17[0]) != 2 )
        v14 = v18 & 0xFD;
    }
    if ( a4 && (v14 & 2) != 0 )
      *(_QWORD *)(a5 + 28) = *(_QWORD *)(a4 + 360);
    LOBYTE(v11) = HalpGetCpuVendor();
    if ( (_BYTE)v11 == 2 )
    {
      v11 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))HalpWheaReadMsr)(a1, 377LL, 0LL);
      v10 = v11;
    }
    *(_QWORD *)(a5 + 264) = v10;
  }
  return v11;
}
