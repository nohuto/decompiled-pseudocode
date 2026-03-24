/*
 * XREFs of ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C00486FC
 * Callers:
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C0007F90 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00234E4 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C0024BDC (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1C0024CC8 (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     NtUserDestroyCursor @ 0x1C0048320 (NtUserDestroyCursor.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C00486FC (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     DestroyWindowSmIcon @ 0x1C007C4E0 (DestroyWindowSmIcon.c)
 *     DestroyClassSmIcon @ 0x1C010E350 (DestroyClassSmIcon.c)
 *     ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1C0125EFC (-DestroyAniIcon@@YAHPEAUtagACON@@@Z.c)
 *     DestroyUnlockedCursor @ 0x1C012CC60 (DestroyUnlockedCursor.c)
 *     ?zzzSetCursorContents@@YA_NPEAUtagCURSOR@@0@Z @ 0x1C01685C0 (-zzzSetCursorContents@@YA_NPEAUtagCURSOR@@0@Z.c)
 *     ?_CleanupUnneededSystemCursorSizes@@YAXI@Z @ 0x1C01D3AF0 (-_CleanupUnneededSystemCursorSizes@@YAXI@Z.c)
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C00486FC (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?RemoveCursorFromCaptionIconCache@@YAHPEAUtagCURSOR@@@Z @ 0x1C004893C (-RemoveCursorFromCaptionIconCache@@YAHPEAUtagCURSOR@@@Z.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C004B674 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?DestroyEmptyCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C004B754 (-DestroyEmptyCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C004B794 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall _DestroyCursor(struct tagCURSOR *a1, unsigned int a2)
{
  struct tagCURSOR *v2; // r12
  int v5; // esi
  int v6; // r14d
  char v7; // bp
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rax
  __int64 v10; // rbx
  __int64 v11; // r15
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct tagCURSOR *v17; // rax
  __int64 v18; // rcx
  struct tagCURSOR *v19; // rax
  struct tagCURSOR *v20; // rcx

  v2 = (struct tagCURSOR *)*((_QWORD *)a1 + 6);
  v5 = 0;
  v6 = 0;
  v7 = 1;
  if ( gbInDestroyHandleTableObjects )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 964LL);
    DestroyEmptyCursorObject(a1);
    return 1;
  }
  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread();
  v10 = *((_QWORD *)a1 + 3);
  v11 = *((_QWORD *)CurrentLogicalCursorThread + 53);
  if ( (unsigned int)RemoveCursorFromCaptionIconCache(a1) )
    return 1;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v12 = *((_DWORD *)a1 + 20);
      if ( !v10 )
      {
        v5 = 1;
        v7 = v12 & 1;
        goto LABEL_22;
      }
      if ( (v12 & 0x84) != 0 )
        goto LABEL_13;
      if ( v10 != v11 )
      {
        UserSetLastError(1435LL);
LABEL_20:
        v5 = 1;
        v7 = 0;
        goto LABEL_22;
      }
    }
    else if ( a2 != 2 )
    {
      goto LABEL_19;
    }
    if ( !v10 )
    {
LABEL_13:
      v5 = 1;
      goto LABEL_22;
    }
  }
  else
  {
    v13 = _HMPkheFromObject(a1, 0LL);
    if ( *(_QWORD *)(v13 + 8) == PsGetProcessWin32Process(gpepCSRSS) && PsGetCurrentProcess(v15, v14, v16) == gpepCSRSS )
      FixupGlobalCursor(a1, v11);
  }
LABEL_19:
  if ( !(unsigned int)HMMarkObjectDestroy(a1) )
    goto LABEL_20;
  *((_DWORD *)a1 + 20) |= 0x2000u;
LABEL_22:
  if ( v2 != a1 && (*(_DWORD *)(*((_QWORD *)a1 + 6) + 80LL) & 0x2000) != 0 )
    v6 = 1;
  if ( v5 )
  {
    if ( v6 )
    {
      v17 = a1;
      do
      {
        *((_QWORD *)v17 + 6) = a1;
        v17 = (struct tagCURSOR *)*((_QWORD *)v17 + 5);
      }
      while ( v17 );
    }
  }
  else
  {
    v18 = *((_QWORD *)a1 + 6);
    if ( gpcurLogCurrent == (struct tagCURSOR *)v18 )
    {
      gpcurLogCurrent = 0LL;
      gpcurPhysCurrent = 0LL;
    }
    if ( v2 == a1 || v6 )
    {
      v20 = (struct tagCURSOR *)*((_QWORD *)a1 + 5);
      if ( v20 )
      {
        *((_QWORD *)a1 + 5) = 0LL;
        _DestroyCursor(v20, a2);
      }
    }
    else
    {
      if ( v18 )
      {
        do
        {
          v19 = *(struct tagCURSOR **)(v18 + 40);
          if ( v19 == a1 )
            break;
          v18 = *(_QWORD *)(v18 + 40);
        }
        while ( v19 );
        if ( v18 )
          *(_QWORD *)(v18 + 40) = *((_QWORD *)a1 + 5);
      }
      *((_QWORD *)a1 + 5) = 0LL;
      *((_QWORD *)a1 + 6) = a1;
    }
    CleanupCursorObject(a1);
    DestroyEmptyCursorObject(a1);
  }
  return v7;
}
