/*
 * XREFs of FastGetProfileValue @ 0x1C0018890
 * Callers:
 *     InitScancodeMap @ 0x1C00178C0 (InitScancodeMap.c)
 *     ?CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1C0017CAC (-CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     RtlLoadStringOrError @ 0x1C0018EE0 (RtlLoadStringOrError.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     OpenCacheKeyEx @ 0x1C00760E0 (OpenCacheKeyEx.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

__int64 __fastcall FastGetProfileValue(
        PCUNICODE_STRING Source,
        int a2,
        const WCHAR *a3,
        const void *a4,
        void *a5,
        size_t Size,
        int a7)
{
  const WCHAR *v9; // r14
  __int64 i; // rax
  unsigned __int64 v11; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v12; // rcx
  void *v13; // rsi
  ULONG *QuotaZInit; // rbx
  NTSTATUS v15; // eax
  ULONG Length; // [rsp+30h] [rbp-91h] BYREF
  int v18; // [rsp+34h] [rbp-8Dh]
  int v19; // [rsp+38h] [rbp-89h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-81h] BYREF
  __int128 v21; // [rsp+50h] [rbp-71h] BYREF
  _WORD v22[40]; // [rsp+60h] [rbp-61h] BYREF

  v19 = a2;
  Length = 0;
  v18 = gdwPolicyFlags | a7;
  v9 = a3;
  DestinationString = 0LL;
  v21 = 0LL;
  if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v22[0] = 0;
    RtlLoadStringOrError((unsigned __int16)a3, v22);
    v9 = v22;
  }
  for ( i = OpenCacheKeyEx(Source); ; i = OpenCacheKeyEx(Source) )
  {
    v13 = (void *)i;
    if ( !i )
    {
      if ( (a7 & 0x10) == 0 )
      {
LABEL_13:
        if ( v13 )
          ZwClose(v13);
        if ( a4 )
        {
          memmove(a5, a4, (unsigned int)Size);
          return (unsigned int)Size;
        }
      }
      return 0LL;
    }
    if ( (_DWORD)Size )
    {
      Length = Size + 12;
      QuotaZInit = (ULONG *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                              v12,
                              v11,
                              (unsigned int)(Size + 12),
                              0x72707355u);
      if ( !QuotaZInit )
        goto LABEL_13;
    }
    else
    {
      Length = 16;
      QuotaZInit = (ULONG *)&v21;
    }
    RtlInitUnicodeString(&DestinationString, v9);
    v15 = ZwQueryValueKey(v13, &DestinationString, KeyValuePartialInformation, QuotaZInit, Length, &Length);
    if ( v15 >= 0 )
      break;
    if ( v15 == -2147483643 && !(_DWORD)Size )
    {
      ZwClose(v13);
      return QuotaZInit[2];
    }
    if ( !v18 )
    {
      if ( (_DWORD)Size && QuotaZInit )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, QuotaZInit);
      goto LABEL_13;
    }
    if ( (_DWORD)Size && QuotaZInit )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, QuotaZInit);
    ZwClose(v13);
  }
  Length = QuotaZInit[2];
  memmove(a5, QuotaZInit + 3, Length);
  if ( (_DWORD)Size )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, QuotaZInit);
  ZwClose(v13);
  return Length;
}
