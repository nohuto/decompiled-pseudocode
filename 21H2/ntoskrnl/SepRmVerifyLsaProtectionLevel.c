/*
 * XREFs of SepRmVerifyLsaProtectionLevel @ 0x1407AD858
 * Callers:
 *     SepRmLsaConnectRequest @ 0x1407AD5B0 (SepRmLsaConnectRequest.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwQuerySystemEnvironmentValueEx @ 0x1403FD1A0 (ZwQuerySystemEnvironmentValueEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

void __fastcall SepRmVerifyLsaProtectionLevel(void **a1)
{
  void *v2; // rcx
  NTSTATUS v3; // eax
  char v4; // bl
  int Value; // [rsp+30h] [rbp-40h] BYREF
  ULONG ValueLength; // [rsp+34h] [rbp-3Ch] BYREF
  PVOID Object; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  GUID VendorGuid; // [rsp+50h] [rbp-20h] BYREF

  Value = 0;
  ValueLength = 4;
  VendorGuid.Data1 = 2012912317;
  *(_DWORD *)&VendorGuid.Data2 = 1295123289;
  DestinationString = 0LL;
  *(_DWORD *)VendorGuid.Data4 = -198680387;
  *(_DWORD *)&VendorGuid.Data4[4] = 1266192359;
  RtlInitUnicodeString(&DestinationString, L"Kernel_Lsa_Ppl_Config");
  ZwQuerySystemEnvironmentValueEx(&DestinationString, &VendorGuid, &Value, &ValueLength, 0LL);
  if ( Value == 4 )
  {
    v2 = *a1;
    Object = 0LL;
    v3 = ObReferenceObjectByHandle(v2, 0x2000000u, 0LL, 0, &Object, 0LL);
    if ( v3 >= 0 )
    {
      v4 = *((_BYTE *)Object + 2170);
      HalPutDmaAdapter((PADAPTER_OBJECT)Object);
      if ( v4 == 65 )
        return;
      v3 = -1073741790;
    }
    KeBugCheckEx(0x29u, v3, (ULONG_PTR)"minkernel\\ntos\\se\\rmmain.c", 0x295uLL, 0LL);
  }
}
