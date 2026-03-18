/*
 * XREFs of NtUserQueryInformationThread @ 0x1C00FC750
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     xxxQueryInformationThread @ 0x1C00FC914 (xxxQueryInformationThread.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall NtUserQueryInformationThread(__int64 a1, unsigned int a2, volatile void *a3, unsigned int a4)
{
  SIZE_T v4; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 CurrentProcess; // rax
  __int64 v11; // rcx
  _BYTE *v12; // rdi
  __int64 v13; // rax
  unsigned int InformationThread; // esi
  _BYTE *v16; // [rsp+20h] [rbp-A8h]
  __int128 v17; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-90h]
  _BYTE Src[64]; // [rsp+50h] [rbp-78h] BYREF

  v4 = a4;
  v17 = 0LL;
  v18 = 0LL;
  memset(Src, 0, sizeof(Src));
  EnterCrit(0LL, 0LL);
  CurrentProcess = PsGetCurrentProcess(v9, v8);
  v11 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( a3 )
    {
      ProbeForRead(a3, (unsigned int)v4, 2u);
      if ( (unsigned int)v4 > 0x40 )
      {
        v13 = Win32AllocPoolWithQuotaZInit((unsigned int)v4, 1230271317LL);
        v12 = (_BYTE *)v13;
        v16 = (_BYTE *)v13;
        if ( !v13 )
          ExRaiseStatus(-1073741801);
        PushW32ThreadLock(v13, &v17, (__int64)Win32FreePool);
      }
      else
      {
        v12 = Src;
        v16 = Src;
      }
      memmove(v12, (const void *)a3, (unsigned int)v4);
    }
    else
    {
      v12 = 0LL;
      v16 = 0LL;
    }
    InformationThread = xxxQueryInformationThread(a1, a2, v12, (unsigned int)v4, v16, v17, *((_QWORD *)&v17 + 1), v18);
    if ( a3 )
    {
      ProbeForWrite(a3, v4, 2u);
      memmove((void *)a3, v12, v4);
    }
    if ( v12 != Src && v12 )
      PopAndFreeAlwaysW32ThreadLock((__int64)&v17);
  }
  else
  {
    InformationThread = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v11);
  return InformationThread;
}
