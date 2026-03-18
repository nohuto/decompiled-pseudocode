/*
 * XREFs of zzzUnhookWindowsHook @ 0x1C01E1508
 * Callers:
 *     NtUserUnhookWindowsHook @ 0x1C01FFE70 (NtUserUnhookWindowsHook.c)
 * Callees:
 *     zzzUnhookWindowsHookEx @ 0x1C002468C (zzzUnhookWindowsHookEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     PhkFirstValid @ 0x1C00EA6F4 (PhkFirstValid.c)
 *     PhkNextValid @ 0x1C00EA754 (PhkNextValid.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall zzzUnhookWindowsHook(__int64 a1, __int64 a2)
{
  int v3; // r14d
  unsigned int DLT; // eax
  char v5; // di
  char *v6; // rsi
  int v7; // ebp
  tagDomLock *v8; // rcx
  __int64 ThreadWin32Thread; // rbp
  __int64 i; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // r8d
  int v15; // r9d
  PDEVICE_OBJECT v16; // rcx
  int v17; // edx
  unsigned int v18; // edi
  int v20; // r8d
  bool v21; // di
  int v22; // edx
  __int16 v23; // [rsp+30h] [rbp-78h]
  tagDomLock *DomainLockRef; // [rsp+50h] [rbp-58h]
  char v25; // [rsp+58h] [rbp-50h] BYREF
  __int64 v26; // [rsp+60h] [rbp-48h]
  char v27; // [rsp+68h] [rbp-40h]
  __int64 v28; // [rsp+70h] [rbp-38h]
  char v29; // [rsp+78h] [rbp-30h]

  v3 = a1;
  if ( (unsigned int)(a1 + 1) > 0xF )
  {
    UserSetLastError(1426LL, a2);
    v21 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = 26;
      LOBYTE(v22) = v21;
      LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v22,
        v20,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        12,
        26,
        (__int64)&WPP_2f783c65cfeb33cb020ce7f53e61bce9_Traceguids,
        v3);
    }
    return 0LL;
  }
  else
  {
    DLT = DLT_HOOK::getDLT(a1);
    v5 = 1;
    v27 = 0;
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    v6 = &v25;
    v26 = gDomainDummyLock;
    v28 = 0LL;
    v7 = 0;
    v29 = 0;
    v25 = 1;
    do
    {
      v8 = (tagDomLock *)*((_QWORD *)v6 - 1);
      if ( v8 )
      {
        if ( *v6 )
          tagDomLock::LockExclusive(v8);
        else
          tagDomLock::LockShared(v8);
      }
      ++v7;
      v6 += 16;
    }
    while ( !v7 );
    v29 = 1;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    for ( i = PhkFirstValid(ThreadWin32Thread, v3); ; i = PhkNextValid(v13) )
    {
      v13 = i;
      if ( !i )
      {
        UserSetLastError(1431LL, v11);
        v16 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
        {
          v5 = 0;
        }
        LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = 28;
          goto LABEL_22;
        }
        goto LABEL_23;
      }
      v12 = *(_DWORD *)(i + 68) == -1
          ? *(_QWORD *)(i + 56)
          : *(_QWORD *)(i + 56)
          + *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 424)
                      + 8LL * *(int *)(i + 68)
                      + 408);
      if ( v12 == a2 )
        break;
    }
    if ( *(_QWORD *)(v13 + 16) != ThreadWin32Thread )
    {
      UserSetLastError(5LL, v11);
      v16 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v5 = 0;
      }
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = 27;
LABEL_22:
        v23 = v17;
        LOBYTE(v17) = v5;
        WPP_RECORDER_AND_TRACE_SF_(
          v16->AttachedDevice,
          v17,
          v14,
          v15,
          3,
          12,
          v23,
          (__int64)&WPP_2f783c65cfeb33cb020ce7f53e61bce9_Traceguids);
      }
LABEL_23:
      v18 = 0;
      goto LABEL_24;
    }
    v18 = zzzUnhookWindowsHookEx((struct tagHOOK *)v13);
LABEL_24:
    if ( v29 && DomainLockRef )
    {
      if ( v25 )
        tagDomLock::UnLockExclusive(DomainLockRef);
      else
        tagDomLock::UnLockShared(DomainLockRef);
    }
    return v18;
  }
}
