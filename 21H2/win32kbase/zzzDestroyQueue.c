/*
 * XREFs of zzzDestroyQueue @ 0x1C011D460
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C003D918 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C003EFB0 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00067B0 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     LockQCursor @ 0x1C00068B0 (LockQCursor.c)
 *     Win32FreeToPagedLookasideList @ 0x1C002BAA0 (Win32FreeToPagedLookasideList.c)
 *     HMAssignmentUnlock @ 0x1C0030630 (HMAssignmentUnlock.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C0044E6C (ApiSetEditionUpdateRawMouseMode.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0066C84 (WPP_RECORDER_SF_qqq.c)
 *     RecalculateQueueInfo @ 0x1C0082520 (RecalculateQueueInfo.c)
 *     FreeMessageList @ 0x1C0093D58 (FreeMessageList.c)
 *     IsFreeMessageListSupported @ 0x1C0095194 (IsFreeMessageListSupported.c)
 *     IsClearDelegationCaptureSupported @ 0x1C0098044 (IsClearDelegationCaptureSupported.c)
 *     ClearDelegationCapture @ 0x1C0099194 (ClearDelegationCapture.c)
 *     ApiSetEditionSystemGenerateMove @ 0x1C00A740C (ApiSetEditionSystemGenerateMove.c)
 *     SetWakeBit @ 0x1C00B677C (SetWakeBit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     xxxWindowEvent @ 0x1C01FC860 (xxxWindowEvent.c)
 */

__int64 (*__fastcall zzzDestroyQueue(__int64 a1, __int64 a2))(void)
{
  int v4; // r15d
  int v5; // edx
  __int64 v7; // rbp
  _QWORD *v8; // r11
  _QWORD *v9; // r10
  _QWORD *v10; // r8
  _QWORD *i; // r9
  _QWORD *v12; // rdx
  __int64 v13; // r14
  __int16 v14; // si
  __int64 v15; // r14
  int v16; // esi
  __int64 v17; // r8
  __int64 v18; // xmm1_8
  __int64 (*result)(void); // rax
  __int64 v20; // rdx
  int v21; // eax
  int v22; // esi
  int v23; // eax
  __int128 v24; // [rsp+40h] [rbp-38h] BYREF
  __int64 v25; // [rsp+50h] [rbp-28h]

  v4 = 0;
  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)&v24, a1);
  if ( (*(_DWORD *)(a1 + 392))-- == 1 )
  {
    if ( gpqForeground == a1 )
    {
      v20 = *(_QWORD *)(a1 + 112);
      if ( v20 )
      {
        v21 = 49;
        if ( gdwDeferWinEvent )
          v21 = 51;
        xxxWindowEvent(-2147483645, v20, 0, 6, v21);
      }
    }
    v22 = -1073741637;
    if ( qword_1C0257130 )
      v23 = qword_1C0257130();
    else
      v23 = -1073741637;
    if ( v23 >= 0 && qword_1C0257138 )
      qword_1C0257138(a1);
    HMAssignmentUnlock((__int64 *)(a1 + 112));
    HMAssignmentUnlock((__int64 *)(a1 + 120));
    HMAssignmentUnlock((__int64 *)(a1 + 128));
    if ( (int)IsClearDelegationCaptureSupported() >= 0 )
      ClearDelegationCapture();
    HMAssignmentUnlock((__int64 *)(a1 + 296));
    LockQCursor(a1, 0LL);
    if ( (int)IsFreeMessageListSupported() >= 0 )
    {
      CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)&v24, a1);
      FreeMessageList(a1 + 24);
    }
    result = qword_1C0257150;
    if ( qword_1C0257150 )
    {
      result = (__int64 (*)(void))qword_1C0257150();
      v22 = (int)result;
    }
    if ( v22 >= 0 && gpqForeground == a1 )
    {
      result = (__int64 (*)(void))qword_1C0257158;
      if ( qword_1C0257158 )
        result = (__int64 (*)(void))qword_1C0257158(0LL);
    }
    if ( gpqForegroundPrev == a1 )
      gpqForegroundPrev = 0LL;
    if ( gpqCursor == (struct tagQ *)a1 )
    {
      gpqCursor = 0LL;
      v4 = 1;
    }
    if ( *(_DWORD *)(a1 + 396) )
      *(_DWORD *)(a1 + 388) |= 0x4000000u;
    else
      result = Win32FreeToPagedLookasideList((__int64)QLookaside, a1);
    if ( v4 )
      return (__int64 (*)(void))ApiSetEditionSystemGenerateMove(2u);
  }
  else
  {
    if ( *(_QWORD *)(a1 + 64) == a2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_qqq(
          (_DWORD)gBaseLog,
          v5,
          19,
          17,
          (__int64)&WPP_fd8c6326b31137ef50dc3f85fe1c9044_Traceguids,
          a1,
          (char)gptiCurrent,
          *(_QWORD *)(a1 + 64));
      }
      *(_QWORD *)(a1 + 64) = 0LL;
    }
    if ( *(_QWORD *)(a1 + 96) == a2 || *(_QWORD *)(a1 + 88) == a2 )
    {
      v7 = 0LL;
      v8 = 0LL;
      v9 = 0LL;
      v10 = (_QWORD *)(*(_QWORD *)(a2 + 456) + 168LL);
      for ( i = (_QWORD *)*v10; i != v10; i = (_QWORD *)*i )
      {
        v12 = i - 93;
        if ( (*(_DWORD *)(i - 32) & 1) == 0 && v12[54] == a1 )
        {
          v13 = *(_QWORD *)(a2 + 448);
          v7 = (__int64)(i - 93);
          v14 = *(_WORD *)(v13 + 6);
          if ( (v14 & 6) != 0 && (*(_BYTE *)(v12[56] + 10LL) & 6) != 0 )
            v8 = i - 93;
          if ( (v14 & 1) != 0 && (*(_BYTE *)(v12[56] + 10LL) & 1) != 0 )
            v9 = i - 93;
          if ( (*(_WORD *)(v13 + 10) & 0x400) != 0 && (*(_WORD *)(v12[56] + 10LL) & 0x400) != 0 )
            v9 = i - 93;
        }
      }
      v15 = v7;
      if ( v8 )
        v15 = (__int64)v8;
      if ( v9 )
        v7 = (__int64)v9;
      if ( qword_1C0257110 )
        v16 = qword_1C0257110();
      else
        v16 = -1073741637;
      if ( v16 >= 0 )
      {
        if ( v15 )
          SetWakeBit(v15, *(_WORD *)(*(_QWORD *)(a2 + 448) + 6LL) & 6, (__int64)v10);
        if ( v7 )
        {
          SetWakeBit(v7, *(_WORD *)(*(_QWORD *)(a2 + 448) + 6LL) & 1, (__int64)v10);
          SetWakeBit(v7, *(_WORD *)(*(_QWORD *)(a2 + 448) + 6LL) & 0x400, v17);
        }
      }
      v18 = *(_QWORD *)(a1 + 16);
      v24 = *(_OWORD *)a1;
      v25 = v18;
      if ( *(_QWORD *)(a1 + 96) == a2 )
        *(_QWORD *)(a1 + 96) = v7;
      if ( *(_QWORD *)(a1 + 88) == a2 )
      {
        *(_QWORD *)(a1 + 88) = v15;
        ApiSetEditionUpdateRawMouseMode(a1);
      }
    }
    return (__int64 (*)(void))RecalculateQueueInfo();
  }
  return result;
}
