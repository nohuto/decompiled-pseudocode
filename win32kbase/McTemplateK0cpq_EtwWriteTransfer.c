/*
 * XREFs of McTemplateK0cpq_EtwWriteTransfer @ 0x1C0164EF8
 * Callers:
 *     EtwTraceInputQueueLocked @ 0x1C0009A50 (EtwTraceInputQueueLocked.c)
 *     EtwTraceInputQueueLockedPeekRecursion @ 0x1C000B450 (EtwTraceInputQueueLockedPeekRecursion.c)
 *     EtwTraceInputQueueNoRemoveLocker @ 0x1C000DAA0 (EtwTraceInputQueueNoRemoveLocker.c)
 *     EtwTraceInputQueueUnLocked @ 0x1C0163A10 (EtwTraceInputQueueUnLocked.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0038218 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0cpq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        char a4,
        char a5,
        char a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-50h] BYREF
  char *v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  char *v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  char *v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  char v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = a4;
  v9 = 1LL;
  v8 = &v14;
  v11 = 8LL;
  v10 = &a5;
  v13 = 4LL;
  v12 = &a6;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 4u, &v7);
}
