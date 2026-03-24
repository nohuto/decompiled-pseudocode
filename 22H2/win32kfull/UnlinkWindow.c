/*
 * XREFs of UnlinkWindow @ 0x1C007E8D8
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00134E8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ImeSetTopmost @ 0x1C00358C8 (ImeSetTopmost.c)
 *     SetWindowGroupBand @ 0x1C0036648 (SetWindowGroupBand.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068290 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C007BEF0 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxDestroyWindow @ 0x1C007DC00 (xxxDestroyWindow.c)
 * Callees:
 *     DirtyVisRgnTrackers @ 0x1C004E4D0 (DirtyVisRgnTrackers.c)
 *     _GetDesktopWindow @ 0x1C0070420 (_GetDesktopWindow.c)
 *     DwmAsyncChildUnlink @ 0x1C00E9CC4 (DwmAsyncChildUnlink.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0108CAC (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@P.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C0222A1C (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 */

__int64 __fastcall UnlinkWindow(__int64 a1, __int64 a2)
{
  int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 result; // rax
  void *v19; // rax
  __int128 v20; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v21[24]; // [rsp+30h] [rbp-18h] BYREF

  v4 = -__CFSHR__(*(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL), 5);
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(0LL, a1, 0LL, a2);
  if ( !v4 || !(unsigned int)IsWindowDesktopComposed(a1) || a1 == GetDesktopWindow(a1) )
    goto LABEL_11;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = 0LL;
  if ( v5 )
    v6 = *(_QWORD *)(v5 + 104);
  if ( a1 == v6 || a2 == gTermIO[1] )
  {
LABEL_11:
    v7 = 0;
  }
  else
  {
    v7 = 1;
    DirtyVisRgnTrackers((struct tagWND *)a1);
  }
  if ( *(_QWORD *)(a2 + 112) == a1 )
  {
    v9 = *(_QWORD *)(a1 + 88);
    if ( v9 )
      v10 = *(_QWORD *)(v9 + 48);
    else
      v10 = 0LL;
    *(_QWORD *)(*(_QWORD *)(a2 + 40) + 56LL) = v10;
    *(_QWORD *)&v20 = a2 + 112;
    *((_QWORD *)&v20 + 1) = v9;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 96);
    if ( !v8 )
      goto LABEL_19;
    v20 = *(_OWORD *)LockPointer(v21, v8 + 88, *(_QWORD *)(a1 + 88));
  }
  HMAssignmentLock(&v20);
LABEL_19:
  v11 = *(_QWORD *)(a1 + 88);
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 96);
    v13 = v11 + 96;
    v14 = *(_QWORD *)(v11 + 40);
    if ( v12 )
      v15 = *(_QWORD *)(v12 + 48);
    else
      v15 = 0LL;
    *(_QWORD *)(v14 + 80) = v15;
    *((_QWORD *)&v20 + 1) = v12;
    *(_QWORD *)&v20 = v13;
    HMAssignmentLock(&v20);
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL) = 0LL;
    HMAssignmentUnlock(a1 + 88);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 40) + 80LL) = 0LL;
  HMAssignmentUnlock(a1 + 96);
  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) &= ~8u;
  result = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(result + 232) &= ~0x10u;
  if ( v7 )
  {
    v19 = (void *)ReferenceDwmApiPort(v17, v16);
    return DwmAsyncChildUnlink(v19);
  }
  return result;
}
