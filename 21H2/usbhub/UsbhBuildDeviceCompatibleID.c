/*
 * XREFs of UsbhBuildDeviceCompatibleID @ 0x1C004F058
 * Callers:
 *     UsbhBuildCompatibleID @ 0x1C004EA50 (UsbhBuildCompatibleID.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UsbhBuildDeviceCompatibleID(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 Pool2; // rax
  __int64 v5; // r9
  __int64 result; // rax

  Pool2 = ExAllocatePool2(64LL, 190LL, 1112885333LL);
  v5 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_OWORD *)Pool2 = *(_OWORD *)L"USB\\DevClass_00&SubClass_00&Prot_00";
  *(_OWORD *)(Pool2 + 16) = *(_OWORD *)L"lass_00&SubClass_00&Prot_00";
  *(_OWORD *)(Pool2 + 32) = *(_OWORD *)L"SubClass_00&Prot_00";
  *(_OWORD *)(Pool2 + 48) = *(_OWORD *)L"_00&Prot_00";
  *(_OWORD *)(Pool2 + 64) = *(_OWORD *)L"_00";
  *(_OWORD *)(Pool2 + 80) = *(_OWORD *)&aUsbDevclass00S[40];
  *(_OWORD *)(Pool2 + 96) = *(_OWORD *)&aUsbDevclass00S[48];
  *(_OWORD *)(Pool2 + 112) = *(_OWORD *)&aUsbDevclass00S[56];
  *(_OWORD *)(Pool2 + 128) = *(_OWORD *)&aUsbDevclass00S[64];
  *(_OWORD *)(Pool2 + 144) = *(_OWORD *)&aUsbDevclass00S[72];
  *(_OWORD *)(Pool2 + 160) = *(_OWORD *)&aUsbDevclass00S[80];
  *(_QWORD *)(Pool2 + 176) = *(_QWORD *)&aUsbDevclass00S[88];
  *(_DWORD *)(Pool2 + 184) = *(_DWORD *)&aUsbDevclass00S[92];
  *(_WORD *)(Pool2 + 188) = aUsbDevclass00S[94];
  result = 0LL;
  *(_QWORD *)(a3 + 8) = v5;
  *(_DWORD *)(a3 + 4) = 190;
  return result;
}
