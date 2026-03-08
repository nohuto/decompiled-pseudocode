/*
 * XREFs of NtUserCtxDisplayIOCtl @ 0x1C01CF250
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035F20 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     CtxDisplayIOCtl @ 0x1C0205B4C (CtxDisplayIOCtl.c)
 */

__int64 __fastcall NtUserCtxDisplayIOCtl(unsigned int a1, volatile void *a2, unsigned int a3)
{
  SIZE_T v3; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // rax
  void *v12; // rbx
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  v3 = a3;
  v14 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( PsGetCurrentProcess(v7, v6, v8) == gpepCSRSS )
  {
    ProbeForRead(a2, v3, 1u);
    v11 = Win32AllocPoolWithQuotaZInit(v3, 1950643029LL);
    v12 = (void *)v11;
    if ( !v11 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v11, &v14, (__int64)Win32FreePool);
    memmove(v12, (const void *)a2, v3);
    v10 = CtxDisplayIOCtl(a1, v12, (unsigned int)v3);
    if ( v12 )
      PopAndFreeAlwaysW32ThreadLock((__int64)&v14);
  }
  else
  {
    v10 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
