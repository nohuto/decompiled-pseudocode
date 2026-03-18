/*
 * XREFs of NtUserCtxDisplayIOCtl @ 0x1C01F22C0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     CtxDisplayIOCtl @ 0x1C021FADC (CtxDisplayIOCtl.c)
 */

__int64 __fastcall NtUserCtxDisplayIOCtl(unsigned int a1, volatile void *a2, unsigned int a3)
{
  SIZE_T v3; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rax
  void *v11; // rbx
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  v3 = a3;
  v13 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( PsGetCurrentProcess(v7, v6) == gpepCSRSS )
  {
    ProbeForRead(a2, v3, 1u);
    v10 = Win32AllocPoolWithQuotaZInit(v3, 1950643029LL);
    v11 = (void *)v10;
    if ( !v10 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v10, &v13, (__int64)Win32FreePool);
    memmove(v11, (const void *)a2, v3);
    v9 = CtxDisplayIOCtl(a1, v11, (unsigned int)v3);
    if ( v11 )
      PopAndFreeAlwaysW32ThreadLock((__int64)&v13);
  }
  else
  {
    v9 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
