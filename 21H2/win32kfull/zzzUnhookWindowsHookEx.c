/*
 * XREFs of zzzUnhookWindowsHookEx @ 0x1C002468C
 * Callers:
 *     NtUserUnhookWindowsHookEx @ 0x1C0024510 (NtUserUnhookWindowsHookEx.c)
 *     zzzSetWindowsHookEx @ 0x1C00249B8 (zzzSetWindowsHookEx.c)
 *     zzzCancelJournalling @ 0x1C011886C (zzzCancelJournalling.c)
 *     zzzUnhookWindowsHook @ 0x1C01E1508 (zzzUnhookWindowsHook.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C004DAB0 (PhkFirstGlobalValid.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     FreeHook @ 0x1C0070000 (FreeHook.c)
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_HOOK@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1C0070274 (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_HOOK@@@-$DomainSharedRecursive@$$V@.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     PhkNextValid @ 0x1C00EA754 (PhkNextValid.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01E0DC0 (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall zzzUnhookWindowsHookEx(struct tagHOOK *a1)
{
  __int64 v2; // rcx
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // r14
  _BYTE *v6; // r13
  unsigned int v7; // edi
  int v9; // esi
  bool v10; // di
  int v11; // edx
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r12d
  char *v18; // r15
  tagDomLock *v19; // rcx
  __int64 i; // rax
  __int128 v21; // [rsp+50h] [rbp-49h] BYREF
  __int64 v22; // [rsp+60h] [rbp-39h]
  tagDomLock *v23; // [rsp+68h] [rbp-31h]
  char v24; // [rsp+70h] [rbp-29h] BYREF
  __int64 v25; // [rsp+78h] [rbp-21h]
  char v26; // [rsp+80h] [rbp-19h]
  __int64 v27; // [rsp+88h] [rbp-11h]
  char v28; // [rsp+90h] [rbp-9h]
  tagDomLock *v29; // [rsp+98h] [rbp-1h] BYREF
  char v30; // [rsp+A0h] [rbp+7h]
  char v31; // [rsp+C0h] [rbp+27h]

  DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_HOOK>::ObjectLockRecursive<>::ObjectLockRecursive<>(&v29);
  v5 = *((_QWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 16) & 0x80u) != 0 )
  {
    v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 29;
      LOBYTE(v11) = v10;
      LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v3,
        v4,
        3,
        12,
        29,
        (__int64)&WPP_2f783c65cfeb33cb020ce7f53e61bce9_Traceguids,
        (char)a1);
    }
    v7 = 0;
  }
  else
  {
    v6 = &unk_1C02E8960;
    v7 = 1;
    if ( (*((_BYTE *)&unk_1C02E8960 + *((int *)a1 + 12) + 1) & 4) != 0 )
    {
      v21 = 0LL;
      v22 = 0LL;
      DLT = DLT_HOOK::getDLT(v2);
      DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
      v25 = gDomainDummyLock;
      v23 = DomainLockRef;
      v24 = 1;
      v26 = 0;
      v27 = 0LL;
      if ( DomainLockRef )
        tagDomLock::UnLockExclusive(DomainLockRef);
      v28 = 1;
      ThreadLock(a1, &v21);
      zzzJournalAttach((struct tagTHREADINFO *)v5, 0);
      a1 = (struct tagHOOK *)ThreadUnlock1(v15, v14, v16);
      if ( v28 )
      {
        v17 = 0;
        v18 = &v24;
        do
        {
          v19 = (tagDomLock *)*((_QWORD *)v18 - 1);
          if ( v19 )
          {
            if ( *v18 )
              tagDomLock::LockExclusive(v19);
            else
              tagDomLock::LockShared(v19);
          }
          ++v17;
          v18 += 16;
        }
        while ( !v17 );
      }
    }
    if ( a1 )
      FreeHook(a1);
    if ( (*(_DWORD *)(v5 + 488) & 0x40000) != 0 )
    {
      v9 = -1;
      do
      {
        if ( (*v6 & 0x10) != 0 )
        {
          for ( i = PhkFirstGlobalValid(v5, (unsigned int)v9); i; i = PhkNextValid(i) )
          {
            if ( *(_QWORD *)(i + 16) == v5 )
              goto LABEL_6;
          }
        }
        ++v9;
        ++v6;
      }
      while ( v9 <= 14 );
      *(_DWORD *)(v5 + 488) &= ~0x40000u;
    }
  }
LABEL_6:
  if ( v31 && v29 )
  {
    if ( v30 )
      tagDomLock::UnLockExclusive(v29);
    else
      tagDomLock::UnLockShared(v29);
  }
  return v7;
}
