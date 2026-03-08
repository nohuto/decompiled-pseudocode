/*
 * XREFs of ExpOsProductCacheProviderHelper @ 0x140859E94
 * Callers:
 *     ExpCloudbookHardwareLockedProvider @ 0x140859D80 (ExpCloudbookHardwareLockedProvider.c)
 *     ExpCloudbookHardwareIDProvider @ 0x1409F6AF0 (ExpCloudbookHardwareIDProvider.c)
 *     ExpGenuinePolicyPostProcess @ 0x1409F6FF0 (ExpGenuinePolicyPostProcess.c)
 *     ExpOsProductContentIdCacheProvider @ 0x1409F7240 (ExpOsProductContentIdCacheProvider.c)
 *     ExpOsProductPfnCacheProvider @ 0x1409F7280 (ExpOsProductPfnCacheProvider.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     SpRegOpenRedirectedKey @ 0x140859F40 (SpRegOpenRedirectedKey.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpOsProductCacheProviderHelper(
        __int64 a1,
        UNICODE_STRING *a2,
        _DWORD *a3,
        void *a4,
        unsigned int a5,
        _DWORD *a6,
        _BYTE *a7)
{
  NTSTATUS v10; // ebx
  _DWORD *Pool2; // rax
  _DWORD *v13; // rdi
  HANDLE KeyHandle[5]; // [rsp+30h] [rbp-28h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp+8h] BYREF
  int v16; // [rsp+64h] [rbp+Ch]

  v16 = HIDWORD(a1);
  KeyHandle[0] = 0LL;
  ResultLength = 0;
  *a7 = 1;
  v10 = SpRegOpenRedirectedKey(a1, a2, KeyHandle);
  if ( v10 >= 0 )
  {
    v10 = ZwQueryValueKey(KeyHandle[0], a2, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( (int)(v10 + 0x80000000) < 0 || v10 == -1073741789 )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(256LL, ResultLength, 542329939LL);
      v13 = Pool2;
      if ( Pool2 )
      {
        v10 = ZwQueryValueKey(KeyHandle[0], a2, KeyValuePartialInformation, Pool2, ResultLength, &ResultLength);
        if ( v10 >= 0 )
        {
          *a6 = v13[2];
          if ( a3 )
            *a3 = v13[1];
          if ( a5 >= v13[2] )
          {
            if ( a4 )
              memmove(a4, v13 + 3, (unsigned int)v13[2]);
          }
          else
          {
            v10 = -1073741789;
          }
        }
        ExFreePoolWithTag(v13, 0);
      }
      else
      {
        v10 = -1073741801;
      }
    }
    ZwClose(KeyHandle[0]);
  }
  return (unsigned int)v10;
}
