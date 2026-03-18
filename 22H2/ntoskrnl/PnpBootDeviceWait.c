/*
 * XREFs of PnpBootDeviceWait @ 0x14037519C
 * Callers:
 *     VhdInitialize @ 0x140B3F4DC (VhdInitialize.c)
 *     IopInitializeBootDrivers @ 0x140B405B4 (IopInitializeBootDrivers.c)
 *     CimfsInitialize @ 0x140B75330 (CimfsInitialize.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402467F0 (KeDelayExecutionThread.c)
 *     HeadlessKernelAddLogEntry @ 0x14032240C (HeadlessKernelAddLogEntry.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     IopGetRegistryValue @ 0x14068CE78 (IopGetRegistryValue.c)
 *     RtlFreeUnicodeString @ 0x14076F8E0 (RtlFreeUnicodeString.c)
 *     IopOpenRegistryKeyEx @ 0x1408135F0 (IopOpenRegistryKeyEx.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpBootDeviceWait(
        __int64 a1,
        int a2,
        __int64 (__fastcall *a3)(__int64, __int64, UNICODE_STRING *),
        __int64 a4)
{
  int v4; // edi
  ULONG_PTR BugCheckParameter4; // r14
  unsigned int v9; // ebx
  int RegistryValue; // esi
  int v11; // eax
  ULONG_PTR v12; // rbx
  PVOID P; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v16[3]; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+40h] BYREF

  v4 = 0;
  BugCheckParameter4 = a2;
  P = 0LL;
  Handle = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v16[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\PnP";
  v16[0] = 7209068LL;
  v9 = 0;
  RegistryValue = IopOpenRegistryKeyEx(&Handle, 0LL, v16, 131097LL);
  if ( RegistryValue >= 0 )
  {
    RegistryValue = IopGetRegistryValue(Handle);
    if ( RegistryValue >= 0 )
    {
      if ( *((_DWORD *)P + 3) == 4 )
      {
        v9 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
        if ( v9 < 0xC8 )
        {
          v9 = 0;
        }
        else if ( v9 > 0x2BF20 )
        {
          v9 = 180000;
        }
      }
      else
      {
        RegistryValue = -1073741823;
      }
      ExFreePoolWithTag(P, 0);
    }
    ZwClose(Handle);
  }
  P = (PVOID)-2000000LL;
  if ( RegistryValue >= 0 )
    v4 = v9;
  while ( 1 )
  {
    RtlFreeUnicodeString(&UnicodeString);
    v11 = a3(a1, a4, &UnicodeString);
    v12 = v11;
    if ( v11 >= 0 )
      break;
    if ( v4 <= 0 )
    {
      HeadlessKernelAddLogEntry();
      KeBugCheckEx(0x7Bu, (ULONG_PTR)&UnicodeString, v12, 0LL, BugCheckParameter4);
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&P);
    v4 -= 200;
  }
  RtlFreeUnicodeString(&UnicodeString);
  return 0LL;
}
