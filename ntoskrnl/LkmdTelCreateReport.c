/*
 * XREFs of LkmdTelCreateReport @ 0x140A73E94
 * Callers:
 *     WheapReportLiveDump @ 0x140A0663C (WheapReportLiveDump.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlCaptureContext @ 0x140420580 (RtlCaptureContext.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KeCapturePersistentThreadState @ 0x140551EC0 (KeCapturePersistentThreadState.c)
 *     ExAllocatePoolWithTag @ 0x140AAB230 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char *__fastcall LkmdTelCreateReport(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *PoolWithTag; // rbx
  PVOID v9; // rax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v14; // eax
  __int64 v15; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B8h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+58h] [rbp-B0h] BYREF

  memset(&ContextRecord, 0, sizeof(ContextRecord));
  v16 = 0LL;
  LODWORD(v15) = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)1536, 0x88uLL, 0x74614454u);
  if ( PoolWithTag )
  {
    v9 = ExAllocatePoolWithTag((POOL_TYPE)1536, 0x40000uLL, 0x74614454u);
    *(_QWORD *)PoolWithTag = v9;
    if ( v9 && RtlStringCbPrintfW((NTSTRSAFE_PWSTR)PoolWithTag + 52, 0x20uLL, L"%ws", L"WHEA") >= 0 )
    {
      LODWORD(v15) = 1;
      v10 = WerLiveKernelCreateReport(PoolWithTag + 104, &v15, &v16);
      if ( v10 >= 0 )
      {
        if ( (_DWORD)v15 )
        {
          *((_QWORD *)PoolWithTag + 12) = v16;
          RtlCaptureContext(&ContextRecord);
          v14 = KeCapturePersistentThreadState(
                  (__int64)&ContextRecord,
                  0LL,
                  292,
                  a3,
                  a4,
                  a5,
                  a6,
                  *(_QWORD *)PoolWithTag);
          if ( v14 )
          {
            *((_DWORD *)PoolWithTag + 2) = v14;
            return PoolWithTag;
          }
        }
        else
        {
          DbgPrintEx(5u, 1u, "LKMDTEL: WerPolicy is WerLiveKernelPolicyNoDump, no dump is allowed.\n");
        }
      }
      else
      {
        DbgPrintEx(5u, 0, "LKMDTEL: WerLiveKernelCreateReport failed with status 0x%X\n", v10);
      }
    }
    if ( *(_QWORD *)PoolWithTag )
      ExFreePoolWithTag(*(PVOID *)PoolWithTag, 0x74614454u);
    ExFreePoolWithTag(PoolWithTag, 0x74614454u);
    PoolWithTag = 0LL;
  }
  if ( v16 )
  {
    v11 = WerLiveKernelCancelReport();
    if ( v11 < 0 )
      DbgPrintEx(5u, 1u, "LKMDTEL: WerLiveCancelReport failed, status 0x%X\n", v11);
    v12 = WerLiveKernelCloseHandle(v16);
    if ( v12 < 0 )
      DbgPrintEx(5u, 1u, "LKMDTEL: WerLiveCancelReport failed, status 0x%X\n", v12);
  }
  return PoolWithTag;
}
