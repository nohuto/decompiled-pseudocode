/*
 * XREFs of ?xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F5724
 * Callers:
 *     ?xxxHandleGhostRelatedWindowDestruction@@YAXPEAUtagWND@@@Z @ 0x1C012EBFC (-xxxHandleGhostRelatedWindowDestruction@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01F5B3C (-xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C002484C (InternalRemoveProp.c)
 *     IsNonImmersiveBand @ 0x1C0039CB0 (IsNonImmersiveBand.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     PostShellHookMessagesEx @ 0x1C0109A90 (PostShellHookMessagesEx.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F5BBC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxDestroyCorrespondingGhostWindow(struct tagWND *a1)
{
  unsigned int v1; // ebx
  int v3; // ebp
  __int64 v4; // rax
  struct tagWND *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned __int16 v9; // ax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v1 = 0;
  v3 = 0;
  v4 = InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(gpsi + 900LL), 1u);
  if ( v4 )
  {
    v1 = 1;
    if ( v4 == -1 )
    {
      if ( !IsNonImmersiveBand((__int64)a1) )
        PostShellHookMessagesEx(0x34u, *(_QWORD *)a1, 0LL);
      return v1;
    }
  }
  else
  {
    v4 = InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1378LL), 1u);
    if ( !v4 )
      return v1;
    v1 = 1;
    v3 = 1;
  }
  v5 = (struct tagWND *)HMValidateHandleNoSecure(v4, 1);
  if ( v5 )
  {
    v11 = 0LL;
    v12 = 0LL;
    ThreadLockAlways(v5, &v11);
    v8 = *(_WORD *)(*((_QWORD *)v5 + 5) + 42LL) & 0x2FFF;
    if ( (_DWORD)v8 == 682 )
    {
      if ( v3 )
        v9 = *(_WORD *)(gpsi + 1378LL);
      else
        v9 = *(_WORD *)(gpsi + 900LL);
      InternalRemoveProp((__int64)v5, v9, 1u);
      xxxHideGhostWindow(v5, a1);
    }
    else
    {
      v1 = 0;
    }
    ThreadUnlock1(v8, v6, v7);
  }
  return v1;
}
