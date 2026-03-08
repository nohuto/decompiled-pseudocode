/*
 * XREFs of UsbhBuildDeviceCompatibleID @ 0x1C004F8A8
 * Callers:
 *     UsbhBuildCompatibleID @ 0x1C004F2B4 (UsbhBuildCompatibleID.c)
 * Callees:
 *     UsbhBuildVendorSpecificCompatibleIDs @ 0x1C0022B08 (UsbhBuildVendorSpecificCompatibleIDs.c)
 *     memmove @ 0x1C0023580 (memmove.c)
 */

__int64 __fastcall UsbhBuildDeviceCompatibleID(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  void *v5; // rdi
  __int64 v6; // rbp
  char *Pool2; // rax
  char *v8; // rsi
  char *v9; // rdx
  __int64 v10; // rdx
  size_t Size; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  LODWORD(Size) = 0;
  v5 = UsbhBuildVendorSpecificCompatibleIDs(a1, a2, 0LL, (unsigned int *)&Size);
  if ( v5 )
  {
    v6 = (unsigned int)Size;
    Pool2 = (char *)ExAllocatePool2(64LL, (unsigned int)Size + 190LL, 1112885333LL);
    v8 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, v5, (unsigned int)v6);
      v9 = &v8[v6];
      *(_OWORD *)v9 = *(_OWORD *)L"USB\\DevClass_00&SubClass_00&Prot_00";
      *((_OWORD *)v9 + 1) = *(_OWORD *)L"lass_00&SubClass_00&Prot_00";
      *((_OWORD *)v9 + 2) = *(_OWORD *)L"SubClass_00&Prot_00";
      *((_OWORD *)v9 + 3) = *(_OWORD *)L"_00&Prot_00";
      *((_OWORD *)v9 + 4) = *(_OWORD *)L"_00";
      *((_OWORD *)v9 + 5) = *(_OWORD *)&aUsbDevclass00S[40];
      *((_OWORD *)v9 + 6) = *(_OWORD *)&aUsbDevclass00S[48];
      v10 = (__int64)&v8[v6 + 128];
      *(_OWORD *)(v10 - 16) = *(_OWORD *)&aUsbDevclass00S[56];
      *(_OWORD *)v10 = *(_OWORD *)&aUsbDevclass00S[64];
      *(_OWORD *)(v10 + 16) = *(_OWORD *)&aUsbDevclass00S[72];
      *(_OWORD *)(v10 + 32) = *(_OWORD *)&aUsbDevclass00S[80];
      *(_QWORD *)(v10 + 48) = *(_QWORD *)&aUsbDevclass00S[88];
      *(_DWORD *)(v10 + 56) = *(_DWORD *)&aUsbDevclass00S[92];
      *(_WORD *)(v10 + 60) = aUsbDevclass00S[94];
      *(_DWORD *)(a3 + 4) = v6 + 190;
      *(_QWORD *)(a3 + 8) = v8;
    }
    else
    {
      v4 = -1073741670;
    }
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
