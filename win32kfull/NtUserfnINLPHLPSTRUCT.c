/*
 * XREFs of NtUserfnINLPHLPSTRUCT @ 0x1C01E2540
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035F20 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall NtUserfnINLPHLPSTRUCT(__int64 a1, unsigned int a2, __int64 a3, const void *a4, __int64 a5, char a6)
{
  ULONG64 v10; // rax
  int v11; // ebx
  __int64 v12; // rbx
  __int64 v13; // rax
  _WORD *v14; // rdi
  __int128 v16; // [rsp+48h] [rbp-50h] BYREF
  __int64 v17; // [rsp+58h] [rbp-40h]
  __int64 v18; // [rsp+70h] [rbp-28h]

  v16 = 0LL;
  v17 = 0LL;
  PtiCurrentShared(a1);
  v10 = (ULONG64)a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v10 = MmUserProbeAddress;
  v18 = *(_QWORD *)(v10 + 16);
  v11 = *(_DWORD *)v10;
  if ( (unsigned __int16)*(_DWORD *)v10 < 0x18u )
    return 0LL;
  v13 = Win32AllocPoolWithQuotaZInit((unsigned __int16)v11, 1818784597LL);
  v14 = (_WORD *)v13;
  if ( !v13 )
    ExRaiseStatus(-1073741801);
  PushW32ThreadLock(v13, &v16, (__int64)Win32FreePool);
  memmove(v14, a4, (unsigned __int16)v11);
  *v14 = v11;
  v12 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, _WORD *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
         + ((a6 + 6) & 0x1F)))(
          a1,
          a2,
          a3,
          v14,
          a5);
  PopAndFreeAlwaysW32ThreadLock((__int64)&v16);
  return v12;
}
