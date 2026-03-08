/*
 * XREFs of IopDumpTraceDisableCrashDumpFailure @ 0x140550658
 * Callers:
 *     IopDisableCrashDump @ 0x14055013C (IopDisableCrashDump.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     IopDumpIsTracingEnabled @ 0x140550448 (IopDumpIsTracingEnabled.c)
 */

char __fastcall IopDumpTraceDisableCrashDumpFailure(int a1)
{
  char result; // al
  int v2; // [rsp+40h] [rbp-19h] BYREF
  __int64 v3; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+60h] [rbp+7h] BYREF
  __int64 *v6; // [rsp+80h] [rbp+27h]
  int v7; // [rsp+88h] [rbp+2Fh]
  int v8; // [rsp+8Ch] [rbp+33h]
  int *v9; // [rsp+90h] [rbp+37h]
  int v10; // [rsp+98h] [rbp+3Fh]
  int v11; // [rsp+9Ch] [rbp+43h]
  int v12; // [rsp+C0h] [rbp+67h] BYREF

  v12 = a1;
  result = IopDumpIsTracingEnabled();
  if ( result )
  {
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)&v12;
    UserData.Size = 4;
    result = EtwWriteEx(IopDumpEtwRegHandle, &DUMP_EVENT_CRASHDUMP_DISABLE_FAILED, 0LL, 0, 0LL, 0LL, 1u, &UserData);
  }
  if ( (unsigned int)dword_140C06248 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140C06248, 0x400000000000LL);
    if ( result )
    {
      v8 = 0;
      v11 = 0;
      v6 = &v3;
      v2 = v12;
      v3 = 0x1000000LL;
      v9 = &v2;
      v7 = 8;
      v10 = 4;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140C06248,
               (unsigned __int8 *)byte_14002B2D1,
               0LL,
               0LL,
               4u,
               &v5);
    }
  }
  return result;
}
