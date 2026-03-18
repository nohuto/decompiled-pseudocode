/*
 * XREFs of FastGetProfileStringW @ 0x1C0037000
 * Callers:
 *     FastGetProfileIntW @ 0x1C0033AC0 (FastGetProfileIntW.c)
 *     FastGetProfileStringFromIDW @ 0x1C0061F00 (FastGetProfileStringFromIDW.c)
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00369B4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     OpenCacheKeyEx @ 0x1C00371E0 (OpenCacheKeyEx.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall FastGetProfileStringW(
        __int64 a1,
        __int64 a2,
        const WCHAR *a3,
        size_t *a4,
        unsigned __int16 *a5,
        unsigned int a6,
        int a7)
{
  unsigned int v8; // r12d
  unsigned __int64 v10; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v11; // rcx
  void *v12; // rdi
  __int64 QuotaZInit; // rbx
  NTSTATUS v14; // eax
  unsigned int v16; // esi
  __int64 v17; // r11
  __int64 v18; // rax
  ULONG Length; // [rsp+30h] [rbp-48h] BYREF
  int v20; // [rsp+34h] [rbp-44h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF

  Length = 0;
  DestinationString = 0LL;
  v20 = gdwPolicyFlags | a7;
  v8 = a2;
  v12 = (void *)OpenCacheKeyEx(a1, a2, 131097LL, &v20);
  if ( v12 )
  {
    while ( 1 )
    {
      Length = 2 * a6 + 12;
      QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v11, v10, Length, 0x72707355u);
      if ( !QuotaZInit )
        break;
      RtlInitUnicodeString(&DestinationString, a3);
      v14 = ZwQueryValueKey(v12, &DestinationString, KeyValuePartialInformation, (PVOID)QuotaZInit, Length, &Length);
      if ( v14 == -2147483643 || v14 >= 0 )
      {
        v16 = a6;
        if ( *(_DWORD *)(QuotaZInit + 8) >> 1 < a6 )
          v16 = *(_DWORD *)(QuotaZInit + 8) >> 1;
        if ( *(_DWORD *)(QuotaZInit + 8) < 2u )
        {
          *a5 = 0;
        }
        else
        {
          *(_WORD *)(QuotaZInit + 2LL * (v16 - 1) + 12) = 0;
          RtlStringCchCopyW(a5, a6, (size_t *)(QuotaZInit + 12));
        }
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)QuotaZInit);
        ZwClose(v12);
        return v16;
      }
      if ( !v20 )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)QuotaZInit);
        goto LABEL_7;
      }
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)QuotaZInit);
      ZwClose(v12);
      v12 = (void *)OpenCacheKeyEx(a1, v8, 131097LL, &v20);
      if ( !v12 )
        goto LABEL_11;
    }
LABEL_8:
    ZwClose(v12);
    goto LABEL_9;
  }
LABEL_11:
  if ( (a7 & 0x10) != 0 )
    return 0LL;
LABEL_7:
  if ( v12 )
    goto LABEL_8;
LABEL_9:
  if ( !a4 || RtlStringCchCopyW(a5, a6, a4) < 0 )
    return 0LL;
  v18 = -1LL;
  do
    ++v18;
  while ( *(_WORD *)(v17 + 2 * v18) );
  return (unsigned int)(v18 + 1);
}
