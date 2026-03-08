/*
 * XREFs of NtUserQueryInformationThread @ 0x1C00930B0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035F20 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxQueryInformationThread @ 0x1C0093274 (xxxQueryInformationThread.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall NtUserQueryInformationThread(__int64 a1, unsigned int a2, volatile void *a3, unsigned int a4)
{
  SIZE_T v4; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 CurrentProcess; // rax
  __int64 v12; // rcx
  _BYTE *v13; // rdi
  __int64 v14; // rax
  unsigned int InformationThread; // esi
  _BYTE *v17; // [rsp+20h] [rbp-A8h]
  __int128 v18; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-90h]
  _BYTE Src[64]; // [rsp+50h] [rbp-78h] BYREF

  v4 = a4;
  v18 = 0LL;
  v19 = 0LL;
  memset_0(Src, 0, sizeof(Src));
  EnterCrit(0LL, 0LL);
  CurrentProcess = PsGetCurrentProcess(v9, v8, v10);
  v12 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( a3 )
    {
      ProbeForRead(a3, (unsigned int)v4, 2u);
      if ( (unsigned int)v4 > 0x40 )
      {
        v14 = Win32AllocPoolWithQuotaZInit((unsigned int)v4, 1230271317LL);
        v13 = (_BYTE *)v14;
        v17 = (_BYTE *)v14;
        if ( !v14 )
          ExRaiseStatus(-1073741801);
        PushW32ThreadLock(v14, &v18, Win32FreePool);
      }
      else
      {
        v13 = Src;
        v17 = Src;
      }
      memmove(v13, (const void *)a3, (unsigned int)v4);
    }
    else
    {
      v13 = 0LL;
      v17 = 0LL;
    }
    InformationThread = xxxQueryInformationThread(a1, a2, v13, (unsigned int)v4, v17, v18, *((_QWORD *)&v18 + 1), v19);
    if ( a3 )
    {
      ProbeForWrite(a3, v4, 2u);
      memmove((void *)a3, v13, v4);
    }
    if ( v13 != Src && v13 )
      PopAndFreeAlwaysW32ThreadLock((__int64)&v18);
  }
  else
  {
    InformationThread = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v12);
  return InformationThread;
}
