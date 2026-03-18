/*
 * XREFs of McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0150614
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001CA20 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     EtwTraceGdiCreateHandle @ 0x1C001E804 (EtwTraceGdiCreateHandle.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C001F14C (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C001F9F0 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0025050 (--1SURFMEM@@QEAA@XZ.c)
 *     HMAllocObjectEx @ 0x1C002D20C (HMAllocObjectEx.c)
 *     EtwTraceUserCreateHandle @ 0x1C004DFE0 (EtwTraceUserCreateHandle.c)
 *     EtwTraceUserDestroyHandle @ 0x1C0050604 (EtwTraceUserDestroyHandle.c)
 *     EtwTraceUserUpdateHandleOwner @ 0x1C00AC6E8 (EtwTraceUserUpdateHandleOwner.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0047300 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pqqq_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, _DWORD a3, __int64 a4, ...)
{
  int v5; // [rsp+30h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-21h] BYREF
  __int64 *v7; // [rsp+50h] [rbp-11h]
  __int64 v8; // [rsp+58h] [rbp-9h]
  va_list v9; // [rsp+60h] [rbp-1h]
  __int64 v10; // [rsp+68h] [rbp+7h]
  int *v11; // [rsp+70h] [rbp+Fh]
  __int64 v12; // [rsp+78h] [rbp+17h]
  va_list v13; // [rsp+80h] [rbp+1Fh]
  __int64 v14; // [rsp+88h] [rbp+27h]
  __int64 v15; // [rsp+C8h] [rbp+67h] BYREF
  __int64 v16; // [rsp+D0h] [rbp+6Fh] BYREF
  va_list va; // [rsp+D0h] [rbp+6Fh]
  __int64 v18; // [rsp+D8h] [rbp+77h]
  va_list va1; // [rsp+E0h] [rbp+7Fh] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v16 = va_arg(va1, _QWORD);
  v18 = va_arg(va1, _QWORD);
  v15 = a4;
  v5 = gSessionId;
  v8 = 8LL;
  v7 = &v15;
  va_copy(v9, va);
  v11 = &v5;
  va_copy(v13, va1);
  v10 = 4LL;
  v12 = 4LL;
  v14 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 5u, &v6);
}
