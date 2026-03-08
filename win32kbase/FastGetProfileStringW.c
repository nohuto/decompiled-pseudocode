/*
 * XREFs of FastGetProfileStringW @ 0x1C0074270
 * Callers:
 *     FastGetProfileStringFromIDW @ 0x1C0018E40 (FastGetProfileStringFromIDW.c)
 *     FastGetProfileIntW @ 0x1C0018FA0 (FastGetProfileIntW.c)
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0070E78 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     OpenCacheKeyEx @ 0x1C00760E0 (OpenCacheKeyEx.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall FastGetProfileStringW(
        PCUNICODE_STRING Source,
        __int64 a2,
        const WCHAR *a3,
        size_t *a4,
        unsigned __int16 *a5,
        unsigned __int64 a6,
        int a7)
{
  unsigned __int64 v9; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v10; // rcx
  void *v11; // rdi
  __int64 QuotaZInit; // rbx
  NTSTATUS v13; // eax
  unsigned int v15; // esi
  __int64 v16; // r11
  __int64 v17; // rax
  ULONG Length; // [rsp+30h] [rbp-48h] BYREF
  int v19; // [rsp+34h] [rbp-44h]
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF

  Length = 0;
  DestinationString = 0LL;
  v19 = gdwPolicyFlags | a7;
  v11 = (void *)OpenCacheKeyEx(Source);
  if ( v11 )
  {
    while ( 1 )
    {
      Length = 2 * a6 + 12;
      QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v10, v9, Length, 0x72707355u);
      if ( !QuotaZInit )
        break;
      RtlInitUnicodeString(&DestinationString, a3);
      v13 = ZwQueryValueKey(v11, &DestinationString, KeyValuePartialInformation, (PVOID)QuotaZInit, Length, &Length);
      if ( v13 == -2147483643 || v13 >= 0 )
      {
        v15 = a6;
        if ( *(_DWORD *)(QuotaZInit + 8) >> 1 < (unsigned int)a6 )
          v15 = *(_DWORD *)(QuotaZInit + 8) >> 1;
        if ( *(_DWORD *)(QuotaZInit + 8) < 2u )
        {
          *a5 = 0;
        }
        else
        {
          *(_WORD *)(QuotaZInit + 2LL * (v15 - 1) + 12) = 0;
          RtlStringCchCopyW(a5, (unsigned int)a6, (size_t *)(QuotaZInit + 12));
        }
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)QuotaZInit);
        ZwClose(v11);
        return v15;
      }
      if ( !v19 )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)QuotaZInit);
        goto LABEL_7;
      }
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)QuotaZInit);
      ZwClose(v11);
      v11 = (void *)OpenCacheKeyEx(Source);
      if ( !v11 )
        goto LABEL_11;
    }
LABEL_8:
    ZwClose(v11);
    goto LABEL_9;
  }
LABEL_11:
  if ( (a7 & 0x10) != 0 )
    return 0LL;
LABEL_7:
  if ( v11 )
    goto LABEL_8;
LABEL_9:
  if ( !a4 || RtlStringCchCopyW(a5, (unsigned int)a6, a4) < 0 )
    return 0LL;
  v17 = -1LL;
  do
    ++v17;
  while ( *(_WORD *)(v16 + 2 * v17) );
  return (unsigned int)(v17 + 1);
}
