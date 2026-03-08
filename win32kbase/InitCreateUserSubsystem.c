/*
 * XREFs of InitCreateUserSubsystem @ 0x1C032009C
 * Callers:
 *     Win32UserInitialize @ 0x1C031E444 (Win32UserInitialize.c)
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0070E78 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     OpenCacheKeyEx @ 0x1C00760E0 (OpenCacheKeyEx.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     wcsstr @ 0x1C00DA8B8 (wcsstr.c)
 *     wcschr @ 0x1C00DA918 (wcschr.c)
 */

__int64 __fastcall InitCreateUserSubsystem(__int64 a1, unsigned __int64 a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v2; // rcx
  unsigned int v3; // r15d
  __int64 result; // rax
  unsigned __int16 *v5; // rbx
  unsigned __int64 v6; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v7; // rcx
  void *v8; // rsi
  __int64 QuotaZInit; // rdi
  NTSTATUS v10; // eax
  __int64 v11; // rax
  int v12; // r14d
  wchar_t *v13; // rax
  wchar_t *v14; // rax
  wchar_t *v15; // rdi
  ULONG v16; // ecx
  wchar_t *v17; // rax
  UNICODE_STRING String; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  ULONG Length; // [rsp+90h] [rbp+30h] BYREF
  int v21; // [rsp+98h] [rbp+38h] BYREF

  String = 0LL;
  v2 = (NSInstrumentation::CLeakTrackingAllocator *)WPP_GLOBAL_Control;
  v3 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      20,
      (__int64)&WPP_d82075a5283f313a7450cbd9ac983c1d_Traceguids);
  result = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v2, a2, 0x500uLL, 0x78747355u);
  v5 = (unsigned __int16 *)result;
  if ( result )
  {
    Length = 0;
    v21 = gdwPolicyFlags;
    DestinationString = 0LL;
    v8 = OpenCacheKeyEx(0LL, 10LL, 131097LL, &v21);
    if ( v8 )
    {
      while ( 1 )
      {
        Length = 1226;
        QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v7, v6, 0x4CAuLL, 0x72707355u);
        if ( !QuotaZInit )
          goto LABEL_14;
        RtlInitUnicodeString(&DestinationString, L"Windows");
        v10 = ZwQueryValueKey(v8, &DestinationString, KeyValuePartialInformation, (PVOID)QuotaZInit, Length, &Length);
        if ( v10 == -2147483643 || v10 >= 0 )
          break;
        if ( !v21 )
        {
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)QuotaZInit);
LABEL_14:
          ZwClose(v8);
          goto LABEL_15;
        }
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)QuotaZInit);
        ZwClose(v8);
        v8 = OpenCacheKeyEx(0LL, 10LL, 131097LL, &v21);
        if ( !v8 )
          goto LABEL_15;
      }
      v12 = 607;
      if ( *(_DWORD *)(QuotaZInit + 8) >> 1 < 0x25Fu )
        v12 = *(_DWORD *)(QuotaZInit + 8) >> 1;
      if ( *(_DWORD *)(QuotaZInit + 8) < 2u )
      {
        *v5 = 0;
      }
      else
      {
        *(_WORD *)(QuotaZInit + 2LL * (unsigned int)(v12 - 1) + 12) = 0;
        RtlStringCchCopyW(v5, 0x25FuLL, (size_t *)(QuotaZInit + 12));
      }
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)QuotaZInit);
      ZwClose(v8);
    }
    else
    {
LABEL_15:
      if ( RtlStringCchCopyW(v5, 0x25FuLL, (size_t *)L"SharedSection=,3072") < 0 )
        goto LABEL_39;
      v11 = -1LL;
      do
        ++v11;
      while ( v5[v11] );
      v12 = v11 + 1;
    }
    if ( v12 )
    {
      gdwDesktopSectionSize = 512;
      gdwNOIOSectionSize = 128;
      v13 = wcsstr(v5, L"SharedSection");
      if ( v13 )
      {
        v13[32] = 0;
        v14 = wcschr(v13, 0x2Cu);
        v15 = v14;
        if ( v14 )
        {
          RtlInitUnicodeString(&String, v14 + 1);
          RtlUnicodeStringToInteger(&String, 0, &gdwDesktopSectionSize);
          v16 = gdwDesktopSectionSize;
          if ( gdwDesktopSectionSize < 0x200 )
          {
            v16 = 512;
            gdwDesktopSectionSize = 512;
          }
          gdwNOIOSectionSize = v16;
          v17 = wcschr(v15 + 1, 0x2Cu);
          if ( v17 )
          {
            RtlInitUnicodeString(&String, v17 + 1);
            RtlUnicodeStringToInteger(&String, 0, &gdwNOIOSectionSize);
            if ( gdwNOIOSectionSize < 0x80 )
              gdwNOIOSectionSize = 128;
          }
        }
      }
      goto LABEL_27;
    }
LABEL_39:
    v3 = 0;
LABEL_27:
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v5);
    return v3;
  }
  return result;
}
