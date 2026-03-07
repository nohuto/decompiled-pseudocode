char __fastcall HalpPciAccessMmConfigSpace(unsigned __int16 a1, char a2, __int64 a3, int a4, int a5, int a6, int a7)
{
  __int64 v10; // rdx
  unsigned int v11; // r11d
  __int64 MmConfigPhysicalAddress; // rax
  int v13; // eax
  __int64 (__fastcall **v14)(); // rcx
  signed __int32 v16[8]; // [rsp+0h] [rbp-38h] BYREF
  int v17; // [rsp+20h] [rbp-18h]

  if ( (unsigned int)(a5 + a6) > 0x1000 )
    return 0;
  if ( (unsigned __int8)HalpPciCheckAmdK8() )
    return 0;
  LOBYTE(v10) = a2;
  MmConfigPhysicalAddress = HalpPciGetMmConfigPhysicalAddress(a1, v10, v11);
  if ( !MmConfigPhysicalAddress )
    return 0;
  v13 = HalpPciMapMmConfigPhysicalAddress(MmConfigPhysicalAddress);
  v14 = HalpPciMmConfigReadHandlers;
  v17 = a6;
  if ( a7 )
    v14 = HalpPciMmConfigWriteHandlers;
  HalpPCIPerformConfigAccess((_DWORD)v14, v13, a4, a5, v17);
  _InterlockedOr(v16, 0);
  return 1;
}
