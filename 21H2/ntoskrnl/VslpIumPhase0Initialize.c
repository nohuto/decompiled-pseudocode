/*
 * XREFs of VslpIumPhase0Initialize @ 0x140A905C8
 * Callers:
 *     HvlPhase1Initialize @ 0x1403CFCC8 (HvlPhase1Initialize.c)
 *     VslInitSystem @ 0x140A73D70 (VslInitSystem.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 *     HvlQueryVsmConnection @ 0x140265408 (HvlQueryVsmConnection.c)
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     MmSetPageProtection @ 0x1403797D0 (MmSetPageProtection.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     KeQueryKvaShadowInformation @ 0x1408BCDE8 (KeQueryKvaShadowInformation.c)
 *     VslpIumPhase0InitializeNtKd @ 0x140A90850 (VslpIumPhase0InitializeNtKd.c)
 */

__int64 __fastcall VslpIumPhase0Initialize(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  _KIDTENTRY64 *IdtBase; // rbx
  int v5; // eax
  NTSTATUS v6; // eax
  __int64 v7; // [rsp+20h] [rbp-49h]
  int v8; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v9; // [rsp+34h] [rbp-35h] BYREF
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
    LODWORD(v12[1]) = 167772168;
    v12[2] = MmGetPhysicalAddress((PVOID)0xFFFFF78000000000LL).QuadPart;
    VslpIumPhase0InitializeNtKd(a1, v12);
    IdtBase = KeGetPcr()->IdtBase;
    v12[8] = MmGetPhysicalAddress(KeGetPcr()->NtTib.ExceptionList).QuadPart;
    v12[10] = MmGetPhysicalAddress(IdtBase).QuadPart;
    MmSetPageProtection((unsigned __int64)IdtBase, 0x1000uLL, 2u);
    ((void (__fastcall *)(__int64, __int64, _QWORD *, int *))off_140C00A68[0])(45LL, 8LL, &v12[9], &v8);
    MEMORY[0xFFFFF7800000036C] |= 0x100u;
    if ( KiKvaShadowMode )
      HIDWORD(v12[1]) |= 1u;
    KeQueryKvaShadowInformation(&v9, 4u, &v8);
    v5 = HIDWORD(v12[1]);
    if ( ((v9 >> 4) & 1) != 0 )
    {
      v5 = HIDWORD(v12[1]) | 2;
      HIDWORD(v12[1]) |= 2u;
    }
    if ( BBTBuffer )
    {
      v5 |= 4u;
      HIDWORD(v12[1]) = v5;
    }
    if ( ((v9 >> 4) & 1) != 0 && KiImplementedPhysicalBits > 0 )
    {
      v5 |= 8u;
      HIDWORD(v12[1]) = v5;
    }
    if ( KiDisableTsx )
      HIDWORD(v12[1]) = v5 | 0x10;
    v11 = VslpNestedPageProtectionFlags & 2;
    v12[6] = KeFeatureBits;
    v12[7] = KeFeatureBits2;
    v6 = VslpEnterIumSecureMode(2u, 208, 0, (__int64)v12);
    if ( v6 < 0 )
      KeBugCheckEx(0x6Fu, v6, 0LL, 1uLL, 0LL);
    if ( LODWORD(v12[2]) != 167772168 )
      KeBugCheckEx(0x6Fu, 0xFFFFFFFFC0000059uLL, 0LL, 2uLL, 0LL);
    v10 = 0;
    qword_140C47390 = (__int64)&qword_140C47388;
    qword_140C47388 = (__int64)&qword_140C47388;
    dword_140C47384 = HIDWORD(v12[2]);
    dword_140C47398 = HIDWORD(v12[2]);
    VslpIumThreadSemaphore = 5;
    byte_140C47382 = 8;
    VslVsmEnabled = 1;
    ((void (__fastcall *)(__int64, __int64, int *))off_140C00A70[0])(16LL, 4LL, &v10);
    return ((__int64 (__fastcall *)(__int64, __int64, int *))off_140C00A70[0])(18LL, 4LL, &v11);
  }
  return result;
}
