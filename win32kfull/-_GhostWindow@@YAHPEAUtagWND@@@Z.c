/*
 * XREFs of ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F5244
 * Callers:
 *     ?_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z @ 0x1C01F51CC (-_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C002484C (InternalRemoveProp.c)
 *     IsNonImmersiveBand @ 0x1C0039CB0 (IsNonImmersiveBand.c)
 *     PostShellHookMessagesEx @ 0x1C0109A90 (PostShellHookMessagesEx.c)
 *     ?SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z @ 0x1C01F4ECC (-SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01F4FB8 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 */

_BOOL8 __fastcall _GhostWindow(struct tagWND *a1)
{
  BOOL v2; // edi
  __int64 v3; // rsi
  __int64 v4; // rdx
  struct _KTHREAD *v5; // rcx
  unsigned int ThreadProcessId; // eax
  struct _KTHREAD *v7; // rcx
  _QWORD *v8; // rcx
  int v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+24h] [rbp-34h]
  unsigned int v12; // [rsp+2Ch] [rbp-2Ch]
  unsigned int ThreadId; // [rsp+30h] [rbp-28h]
  __int128 v14; // [rsp+34h] [rbp-24h]
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  if ( (unsigned int)SetGhostProp(a1, (HWND)0xFFFFFFFFFFFFFFFFLL) )
  {
    v3 = *((_QWORD *)a1 + 2);
    if ( IsNonImmersiveBand((__int64)a1) )
    {
      v5 = *(struct _KTHREAD **)v3;
      v14 = 0LL;
      v10 = 1;
      v11 = v4;
      ThreadProcessId = (unsigned int)PsGetThreadProcessId(v5);
      v7 = *(struct _KTHREAD **)v3;
      v12 = ThreadProcessId;
      ThreadId = (unsigned int)PsGetThreadId(v7);
      v2 = SendAsyncSGHOSTINFO((struct _GHOSTINFO *const)&v10);
      if ( !v2 )
      {
        InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(gpsi + 900LL), 1u);
        return v2;
      }
    }
    else
    {
      PostShellHookMessagesEx(0x33u, v4, 0LL);
      v2 = 1;
    }
    if ( *(int *)(v3 + 488) >= 0 )
    {
      v15 = 0LL;
      v8 = *(_QWORD **)(v3 + 424);
      LODWORD(v15) = 4;
      PsSetProcessFaultInformation(*v8, &v15);
      *(_DWORD *)(v3 + 488) |= 0x80000000;
    }
  }
  return v2;
}
