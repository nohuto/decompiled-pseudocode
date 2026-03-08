/*
 * XREFs of NtUserfnPOWERBROADCAST @ 0x1C009DCB0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035F20 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall NtUserfnPOWERBROADCAST(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4, __int64 a5, char a6)
{
  _DWORD *v10; // rdi
  unsigned int v11; // r14d
  __int64 v12; // rax
  __int64 v13; // rbx
  __int128 v15; // [rsp+48h] [rbp-50h]
  __int128 v16; // [rsp+58h] [rbp-40h] BYREF
  __int64 v17; // [rsp+68h] [rbp-30h]

  v10 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  PtiCurrentShared(a1);
  if ( (a3 & 0x8000) != 0 && a4 )
  {
    ProbeForRead(a4, 0x14uLL, 1u);
    v15 = *(_OWORD *)a4;
    v11 = a4[4];
    if ( v11 + 20 < v11 )
    {
      v13 = 0LL;
      goto LABEL_9;
    }
    ProbeForRead(a4, v11 + 20, 1u);
    v12 = Win32AllocPoolWithQuotaZInit(v11 + 20, 1651536725LL);
    v10 = (_DWORD *)v12;
    if ( !v12 )
    {
      UserSetLastError(8);
      v13 = 0LL;
      goto LABEL_9;
    }
    PushW32ThreadLock(v12, &v16, Win32FreePool);
    *(_OWORD *)v10 = v15;
    v10[4] = v11;
    memmove(v10 + 5, a4 + 5, v11);
    a4 = v10;
  }
  v13 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, _DWORD *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
         + ((a6 + 6) & 0x1F)))(
          a1,
          a2,
          a3,
          a4,
          a5);
LABEL_9:
  if ( v10 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v16);
  return v13;
}
