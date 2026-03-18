/*
 * XREFs of NtUserQueryInformationThread @ 0x1C00E2020
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0024460 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     xxxQueryInformationThread @ 0x1C00E21E4 (xxxQueryInformationThread.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

__int64 __fastcall NtUserQueryInformationThread(__int64 a1, unsigned int a2, volatile void *a3, unsigned int a4)
{
  SIZE_T v4; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  _BYTE *v16; // rdi
  __int64 v17; // rax
  unsigned int InformationThread; // esi
  _BYTE *v20; // [rsp+20h] [rbp-A8h]
  __int128 v21; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-90h]
  _BYTE Src[64]; // [rsp+50h] [rbp-78h] BYREF

  v4 = a4;
  v21 = 0LL;
  v22 = 0LL;
  memset_0(Src, 0, sizeof(Src));
  EnterCrit(0LL, 0LL);
  CurrentProcess = PsGetCurrentProcess(v9, v8, v10);
  v15 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( a3 )
    {
      ProbeForRead(a3, (unsigned int)v4, 2u);
      if ( (unsigned int)v4 > 0x40 )
      {
        v17 = Win32AllocPoolWithQuotaZInit((unsigned int)v4, 1230271317LL);
        v16 = (_BYTE *)v17;
        v20 = (_BYTE *)v17;
        if ( !v17 )
          ExRaiseStatus(-1073741801);
        PushW32ThreadLock(v17, &v21, (__int64)Win32FreePool);
      }
      else
      {
        v16 = Src;
        v20 = Src;
      }
      memmove(v16, (const void *)a3, (unsigned int)v4);
    }
    else
    {
      v16 = 0LL;
      v20 = 0LL;
    }
    InformationThread = xxxQueryInformationThread(a1, a2, v16, (unsigned int)v4, v20, v21, *((_QWORD *)&v21 + 1), v22);
    if ( a3 )
    {
      ProbeForWrite(a3, v4, 2u);
      memmove((void *)a3, v16, v4);
    }
    if ( v16 != Src && v16 )
      PopAndFreeAlwaysW32ThreadLock((__int64)&v21);
  }
  else
  {
    InformationThread = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v15, v12, v13, v14);
  return InformationThread;
}
