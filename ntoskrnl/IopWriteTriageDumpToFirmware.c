/*
 * XREFs of IopWriteTriageDumpToFirmware @ 0x140551DD0
 * Callers:
 *     IoWriteCrashDump @ 0x14054EF00 (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x140551A98 (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiScanBugCheckCallbackList @ 0x140568790 (KiScanBugCheckCallbackList.c)
 */

__int64 __fastcall IopWriteTriageDumpToFirmware(PHYSICAL_ADDRESS *BaseAddress)
{
  unsigned __int64 v3; // rsi
  PHYSICAL_ADDRESS *v4; // rdi
  char *v5; // rbp
  __int64 v6; // rax
  LONGLONG QuadPart; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rbx
  PVOID BaseAddressa; // [rsp+30h] [rbp+8h] BYREF

  if ( !BaseAddress )
    return 3221225635LL;
  v3 = 262172LL;
  BaseAddressa = &BaseAddress[512];
  v4 = BaseAddress;
  BaseAddress[514].LowPart = 28;
  *(_OWORD *)BaseAddressa = CrashdmpGuid;
  *((_DWORD *)BaseAddressa + 5) = 458752;
  *((_DWORD *)BaseAddressa + 6) = 262172;
  v5 = (char *)BaseAddressa;
  do
  {
    v6 = 4096LL;
    if ( v3 < 0x1000 )
      v6 = v3;
    v4->QuadPart = v6;
    v4[1] = MmGetPhysicalAddress(v5);
    QuadPart = v4->QuadPart;
    v4 += 2;
    v5 += QuadPart;
    v3 -= QuadPart;
  }
  while ( v3 );
  v4->QuadPart = 0LL;
  v4[1].QuadPart = 0LL;
  PhysicalAddress = MmGetPhysicalAddress(BaseAddress);
  KiScanBugCheckCallbackList();
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))off_140C01C58[0])(
           &BaseAddressa,
           1LL,
           (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart);
}
