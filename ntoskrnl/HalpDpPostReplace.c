/*
 * XREFs of HalpDpPostReplace @ 0x140A94408
 * Callers:
 *     HalpDpReplaceControl @ 0x140A94820 (HalpDpReplaceControl.c)
 * Callees:
 *     HalpAcpiPmRegisterWrite @ 0x1402F76E0 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterAvailable @ 0x1402F9250 (HalpAcpiPmRegisterAvailable.c)
 *     HalpAcpiPmRegisterRead @ 0x14039CF90 (HalpAcpiPmRegisterRead.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpSetClockAfterSleep @ 0x140508AF0 (HalpSetClockAfterSleep.c)
 */

void __fastcall HalpDpPostReplace(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int16 v4; // bx
  __int64 v5; // r10
  __int64 v6; // r8
  __int64 v7; // rax
  int v8; // ecx
  __int16 v9; // [rsp+40h] [rbp+8h] BYREF
  __int16 v10; // [rsp+48h] [rbp+10h] BYREF

  v3 = a1;
  v9 = 0;
  if ( *(_BYTE *)(a1 + 45) )
  {
    if ( *(_DWORD *)a1 )
    {
      v5 = *(_QWORD *)(a1 + 72);
      if ( v5 )
      {
        v6 = 1000LL * *(_QWORD *)(a1 + 80) / v5;
        v7 = 1000LL * *(_QWORD *)(a1 + 96);
        *(_DWORD *)(a1 + 88) = v6;
        v8 = v7 / v5;
        *(_DWORD *)(v3 + 120) = 1000LL * *(_QWORD *)(v3 + 112) / v5 - v8;
        *(_DWORD *)(v3 + 104) = v8 - v6;
      }
    }
  }
  else
  {
    if ( (HalpPlatformFlags & 4) != 0 )
      HalpSetClockAfterSleep(a1, a2, a3);
    LOBYTE(a1) = 1;
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(PmAcpiDispatchTable + 8))(a1, a2, a3, v3);
    if ( (int)HalpAcpiPmRegisterAvailable(0) >= 0 )
    {
      HalpAcpiPmRegisterRead(0, (unsigned __int8)byte_140C61CF8 >> 1, (__int64)&v9, 2u, 0LL);
      v4 = v9;
      v10 = v9;
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
      {
        HalpAcpiPmRegisterRead(3, (unsigned __int8)byte_140C61CF8 >> 1, (__int64)&v9, 2u, 0LL);
        v4 = v9 | v10;
      }
      v10 = v4 | 0x20;
      HalpAcpiPmRegisterWrite(0, (unsigned __int8)byte_140C61CF8 >> 1, (__int64)&v10, 2u, 0LL);
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
        HalpAcpiPmRegisterWrite(3, (unsigned __int8)byte_140C61CF8 >> 1, (__int64)&v10, 2u, 0LL);
    }
  }
}
