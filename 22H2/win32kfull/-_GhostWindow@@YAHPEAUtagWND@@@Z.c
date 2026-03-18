/*
 * XREFs of ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F4044
 * Callers:
 *     ?_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z @ 0x1C01F3FCC (-_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C00C94BC (InternalRemoveProp.c)
 *     IsNonImmersiveBand @ 0x1C00CEFB4 (IsNonImmersiveBand.c)
 *     PostShellHookMessagesEx @ 0x1C00D3370 (PostShellHookMessagesEx.c)
 *     ?SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z @ 0x1C01F3CCC (-SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01F3DB8 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 */

_BOOL8 __fastcall _GhostWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  BOOL v5; // edi
  __int64 v6; // rsi
  __int64 v7; // rdx
  struct _KTHREAD *v8; // rcx
  unsigned int ThreadProcessId; // eax
  struct _KTHREAD *v10; // rcx
  _QWORD *v11; // rcx
  int v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+24h] [rbp-34h]
  unsigned int v15; // [rsp+2Ch] [rbp-2Ch]
  unsigned int ThreadId; // [rsp+30h] [rbp-28h]
  __int128 v17; // [rsp+34h] [rbp-24h]
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0;
  if ( (unsigned int)SetGhostProp(a1, (HWND)0xFFFFFFFFFFFFFFFFLL, a3, a4) )
  {
    v6 = *((_QWORD *)a1 + 2);
    if ( IsNonImmersiveBand((__int64)a1) )
    {
      v8 = *(struct _KTHREAD **)v6;
      v17 = 0LL;
      v13 = 1;
      v14 = v7;
      ThreadProcessId = (unsigned int)PsGetThreadProcessId(v8);
      v10 = *(struct _KTHREAD **)v6;
      v15 = ThreadProcessId;
      ThreadId = (unsigned int)PsGetThreadId(v10);
      v5 = SendAsyncSGHOSTINFO((struct _GHOSTINFO *const)&v13);
      if ( !v5 )
      {
        InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(gpsi + 900LL), 1u);
        return v5;
      }
    }
    else
    {
      PostShellHookMessagesEx(0x33u, v7, 0LL);
      v5 = 1;
    }
    if ( *(int *)(v6 + 488) >= 0 )
    {
      v18 = 0LL;
      v11 = *(_QWORD **)(v6 + 424);
      LODWORD(v18) = 4;
      PsSetProcessFaultInformation(*v11, &v18);
      *(_DWORD *)(v6 + 488) |= 0x80000000;
    }
  }
  return v5;
}
