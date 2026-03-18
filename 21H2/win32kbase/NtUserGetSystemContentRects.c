/*
 * XREFs of NtUserGetSystemContentRects @ 0x1C015AC70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ?GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z @ 0x1C0144660 (-GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z.c)
 *     ?GetCount@CContentRects@@SAIXZ @ 0x1C0144720 (-GetCount@CContentRects@@SAIXZ.c)
 */

__int64 __fastcall NtUserGetSystemContentRects(unsigned int *a1, ULONG64 a2, __int64 a3, __int64 a4)
{
  volatile void *v4; // rsi
  unsigned int *v5; // rdi
  int v6; // ebx
  __int64 v7; // rcx
  unsigned int Count; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int *v11; // rax
  __int64 CurrentProcessWow64Process; // rax
  bool ContentRects; // r14
  unsigned int v14; // eax
  unsigned int v16[20]; // [rsp+40h] [rbp-B8h] BYREF
  struct tagRECT Src[4]; // [rsp+90h] [rbp-68h] BYREF

  v4 = (volatile void *)a2;
  v5 = a1;
  v6 = 0;
  if ( a1 )
  {
    if ( a2 )
    {
      memset(Src, 0, sizeof(Src));
      v16[0] = 0;
      v11 = v5;
      if ( (unsigned __int64)v5 >= MmUserProbeAddress )
        v11 = (unsigned int *)MmUserProbeAddress;
      v16[0] = *v11;
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(MmUserProbeAddress, v9, v10);
      ProbeForWrite(v4, 16LL * v16[0], CurrentProcessWow64Process != 0 ? 1 : 4);
      ContentRects = CContentRects::GetContentRects(v16[0], Src, v16);
      a2 = MmUserProbeAddress;
      if ( (unsigned __int64)v5 >= MmUserProbeAddress )
        v5 = (unsigned int *)MmUserProbeAddress;
      v14 = v16[0];
      *v5 = v16[0];
      if ( !ContentRects )
      {
        v7 = 122LL;
        goto LABEL_3;
      }
      memmove((void *)v4, Src, 16LL * v14);
    }
    else
    {
      Count = CContentRects::GetCount();
      if ( (unsigned __int64)v5 >= MmUserProbeAddress )
        v5 = (unsigned int *)MmUserProbeAddress;
      *v5 = Count;
    }
    return 1;
  }
  v7 = 87LL;
LABEL_3:
  UserSetLastError(v7, a2, a3, a4);
  return v6;
}
