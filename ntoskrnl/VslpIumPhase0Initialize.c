/*
 * XREFs of VslpIumPhase0Initialize @ 0x140B903AC
 * Callers:
 *     HvlPhase1Initialize @ 0x140384654 (HvlPhase1Initialize.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x1402D8618 (HvlQueryVsmConnection.c)
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     MmSetPageProtection @ 0x1403BCCE0 (MmSetPageProtection.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KeQueryKvaShadowInformation @ 0x140972498 (KeQueryKvaShadowInformation.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     VslpIumPhase0InitializeNtKd @ 0x140B90664 (VslpIumPhase0InitializeNtKd.c)
 */

__int64 __fastcall VslpIumPhase0Initialize(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  _KIDTENTRY64 *IdtBase; // rbx
  int v5; // eax
  int v6; // eax
  __int64 v7; // [rsp+20h] [rbp-49h]
  int v8; // [rsp+30h] [rbp-39h] BYREF
  BOOL v9; // [rsp+34h] [rbp-35h] BYREF
  int v10; // [rsp+38h] [rbp-31h] BYREF
  int v11; // [rsp+3Ch] [rbp-2Dh] BYREF
  _QWORD v12[14]; // [rsp+40h] [rbp-29h] BYREF

  result = *(_QWORD *)(a1 + 240);
  v9 = 0;
  v8 = 0;
  if ( (*(_DWORD *)(result + 132) & 0x200) != 0 )
  {
    if ( !HvlQueryVsmConnection(0LL) )
      KeBugCheckEx(0x6Fu, 0xFFFFFFFFC0000001uLL, 0LL, 0LL, v3 & v7);
    memset(v12, 0, 0x68uLL);
    LODWORD(v12[1]) = 167772172;
    v12[2] = MmGetPhysicalAddress((PVOID)0xFFFFF78000000000LL).QuadPart;
    VslpIumPhase0InitializeNtKd(a1, v12);
    IdtBase = KeGetPcr()->IdtBase;
    v12[8] = MmGetPhysicalAddress(KeGetPcr()->NtTib.ExceptionList).QuadPart;
    v12[10] = MmGetPhysicalAddress(IdtBase).QuadPart;
    MmSetPageProtection((unsigned __int64)IdtBase, 0x1000uLL, 2u);
    ((void (__fastcall *)(__int64, __int64, _QWORD *, int *))off_140C020E8[0])(45LL, 8LL, &v12[9], &v8);
    if ( (VslpNestedPageProtectionFlags & 0x1000) == 0 )
      *(_DWORD *)(MmWriteableSharedUserData + 876) |= 0x100u;
    if ( KiKvaShadowMode )
      HIDWORD(v12[1]) |= 1u;
    KeQueryKvaShadowInformation(&v9, 4u, &v8);
    v5 = HIDWORD(v12[1]);
    if ( (v9 & 0x10) != 0 )
    {
      v5 = HIDWORD(v12[1]) | 2;
      HIDWORD(v12[1]) |= 2u;
      if ( KiImplementedPhysicalBits > 0 )
      {
        v5 |= 4u;
        HIDWORD(v12[1]) = v5;
      }
    }
    if ( KiDisableTsx )
      HIDWORD(v12[1]) = v5 | 8;
    v11 = VslpNestedPageProtectionFlags & 2;
    v12[6] = KeFeatureBits;
    v12[7] = KeFeatureBits2;
    v6 = VslpEnterIumSecureMode(2u, 208, 0, (__int64)v12);
    if ( v6 < 0 )
      KeBugCheckEx(0x6Fu, v6, 0LL, 1uLL, 0LL);
    if ( LODWORD(v12[2]) != 167772172 )
      KeBugCheckEx(0x6Fu, 0xFFFFFFFFC0000059uLL, 0LL, 2uLL, 0LL);
    VslpReservedTransferLock = 0LL;
    qword_140C5EE90 = (__int64)&qword_140C5EE88;
    qword_140C5EE88 = (__int64)&qword_140C5EE88;
    VslpIumThreadSemaphore = 5;
    byte_140C5EE82 = 8;
    dword_140C5EE84 = HIDWORD(v12[2]);
    dword_140C5EE98 = HIDWORD(v12[2]);
    VslVsmEnabled = 1;
    VslpReservedTransferMdl = ExAllocatePool2(64LL, 0x1000uLL, 0x54736D56u);
    if ( !VslpReservedTransferMdl )
      KeBugCheckEx(0x6Fu, 0xFFFFFFFFC000009AuLL, 0LL, 3uLL, 0LL);
    v10 = 0;
    ((void (__fastcall *)(__int64, __int64, int *))off_140C020F0[0])(16LL, 4LL, &v10);
    return ((__int64 (__fastcall *)(__int64, __int64, int *))off_140C020F0[0])(18LL, 4LL, &v11);
  }
  return result;
}
