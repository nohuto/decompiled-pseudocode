/*
 * XREFs of PipInitializeEarlyLaunchDrivers @ 0x140B57190
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x140B57734 (PipInitializeCoreDriversAndElam.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     IopGetDriverNameFromKeyNode @ 0x1406C1730 (IopGetDriverNameFromKeyNode.c)
 *     SeRegisterElamCertResources @ 0x14081B8D0 (SeRegisterElamCertResources.c)
 *     IopOpenRegistryKeyEx @ 0x14081BCC0 (IopOpenRegistryKeyEx.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     PnpInitializeBootStartDriver @ 0x140B58AC4 (PnpInitializeBootStartDriver.c)
 */

void __fastcall PipInitializeEarlyLaunchDrivers(UNICODE_STRING *a1, __int64 a2)
{
  UNICODE_STRING *v2; // r14
  UNICODE_STRING *v3; // rbx
  UNICODE_STRING *v5; // rdi
  __int64 v6; // rax
  ULONGLONG v7; // rcx
  NTSTATUS DriverNameFromKeyNode; // esi
  int v9; // [rsp+38h] [rbp-28h]
  PVOID P[2]; // [rsp+50h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+30h] BYREF
  __int64 v12; // [rsp+98h] [rbp+38h] BYREF

  v12 = 0LL;
  v2 = a1 + 4;
  Handle = 0LL;
  v3 = *(UNICODE_STRING **)&a1[4].Length;
  *(_OWORD *)P = 0LL;
  while ( v3 != v2 )
  {
    v5 = v3;
    v3 = *(UNICODE_STRING **)&v3->Length;
    if ( SLODWORD(v5[3].Buffer) >= 0 )
    {
      v6 = *(_QWORD *)&v5[3].Length;
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 48);
        if ( v7 )
          SeRegisterElamCertResources(v7, a2, 0);
      }
      P[1] = 0LL;
      Handle = 0LL;
      DriverNameFromKeyNode = IopOpenRegistryKeyEx(&Handle, 0LL, v5 + 2, 0x20019u);
      if ( DriverNameFromKeyNode >= 0 )
      {
        DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, (PUNICODE_STRING)P);
        if ( DriverNameFromKeyNode >= 0 )
          DriverNameFromKeyNode = PnpInitializeBootStartDriver(
                                    (unsigned int)P,
                                    (int)v5 + 32,
                                    *(_QWORD *)(*(_QWORD *)&v5[3].Length + 56LL),
                                    *(_QWORD *)&v5[3].Length,
                                    (__int64)&a1[1],
                                    0,
                                    0,
                                    v9,
                                    (__int64)&v12);
      }
      if ( Handle )
        ZwClose(Handle);
      if ( P[1] )
        ExFreePoolWithTag(P[1], 0);
      if ( DriverNameFromKeyNode < 0 )
        *(_DWORD *)(*(_QWORD *)&v5[3].Length + 104LL) |= 0x20000u;
    }
  }
}
