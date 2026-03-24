/*
 * XREFs of zzzAttachToQueue @ 0x1C0011EF4
 * Callers:
 *     zzzReattachThreads @ 0x1C001194C (zzzReattachThreads.c)
 *     xxxSwitchDesktop @ 0x1C0029864 (xxxSwitchDesktop.c)
 *     zzzSetDesktop @ 0x1C0065E20 (zzzSetDesktop.c)
 *     xxxSetThreadDesktop @ 0x1C00D9270 (xxxSetThreadDesktop.c)
 *     xxxHardErrorControl @ 0x1C02418AC (xxxHardErrorControl.c)
 * Callees:
 *     IsInsideMenuLoop @ 0x1C000E860 (IsInsideMenuLoop.c)
 *     ?CheckTransferState@@YAKPEAUtagTHREADINFO@@PEAUtagQ@@JH@Z @ 0x1C00122B0 (-CheckTransferState@@YAKPEAUtagTHREADINFO@@PEAUtagQ@@JH@Z.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0012504 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     LockQCursor @ 0x1C00128F0 (LockQCursor.c)
 *     UpdateRawMouseMode @ 0x1C0052508 (UpdateRawMouseMode.c)
 *     LockCaptureWindow @ 0x1C00C0664 (LockCaptureWindow.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00C1CCC (WPP_RECORDER_SF_qqq.c)
 *     UnlockCaptureWindow @ 0x1C010AF30 (UnlockCaptureWindow.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01DFB20 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 */

__int64 __fastcall zzzAttachToQueue(struct tagTHREADINFO *a1, struct tagQ *a2, __int64 a3, int a4)
{
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // eax
  struct tagTHREADINFO *v12; // rcx
  __int64 v13; // rbx
  unsigned int v14; // eax
  struct tagTHREADINFO *v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 result; // rax
  unsigned int v19; // ecx
  __int64 v20; // rbx
  struct tagQMSG *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // edx
  __int64 v26; // rdx
  __int64 v27; // xmm1_8
  int v28; // edx
  __int64 v29; // rdx
  __int64 v30; // [rsp+38h] [rbp-28h]
  __int128 v31; // [rsp+40h] [rbp-20h] BYREF
  __int64 v32; // [rsp+50h] [rbp-10h]

  v8 = CheckTransferState(a1, a2, 120, a4) - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      *((_QWORD *)&v31 + 1) = *(_QWORD *)(*(_QWORD *)(v10 + 432) + 120LL);
      *(_QWORD *)&v31 = v9 + 120;
      HMAssignmentLock(&v31);
      HMAssignmentUnlock(*((_QWORD *)a1 + 54) + 120LL);
      v22 = *((_QWORD *)a1 + 54);
      v23 = *(_QWORD *)(v22 + 296);
      if ( v23 )
      {
        if ( *(struct tagTHREADINFO **)(v23 + 16) == a1 && !*((_QWORD *)a2 + 37) )
        {
          *(_OWORD *)((char *)a2 + 296) = *(_OWORD *)(v22 + 296);
          *(_OWORD *)((char *)a2 + 312) = *(_OWORD *)(v22 + 312);
          *(_OWORD *)((char *)a2 + 328) = *(_OWORD *)(v22 + 328);
          *(_OWORD *)((char *)a2 + 344) = *(_OWORD *)(v22 + 344);
          *(_OWORD *)((char *)a2 + 360) = *(_OWORD *)(v22 + 360);
          *(_QWORD *)(*((_QWORD *)a1 + 54) + 296LL) = 0LL;
        }
      }
    }
  }
  else
  {
    CancelInputState((struct tagTHREADINFO *)v10, 0);
  }
  v11 = CheckTransferState(a1, a2, 112, a4) - 1;
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      *((_QWORD *)&v31 + 1) = *(_QWORD *)(*((_QWORD *)a1 + 54) + 112LL);
      *(_QWORD *)&v31 = (char *)a2 + 112;
      HMAssignmentLock(&v31);
      HMAssignmentUnlock(*((_QWORD *)a1 + 54) + 112LL);
    }
  }
  else
  {
    CancelInputState(v12, 1u);
  }
  v13 = *((_QWORD *)a1 + 54);
  HMAssignmentUnlock(v13 + 136);
  *(_BYTE *)(v13 + 144) = 0;
  HMAssignmentUnlock((char *)a2 + 136);
  *((_BYTE *)a2 + 144) = 0;
  v14 = CheckTransferState(a1, a2, 104, a4) - 1;
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      LockCaptureWindow(a2, *(struct tagWND **)(*((_QWORD *)a1 + 54) + 104LL));
      UnlockCaptureWindow(*((_QWORD *)a1 + 54));
      v27 = *((_QWORD *)a2 + 2);
      v31 = *(_OWORD *)a2;
      v32 = v27;
      UpdateRawMouseMode(a2);
      v28 = *((_DWORD *)a2 + 97);
      *((_DWORD *)a2 + 37) = *(_DWORD *)(*((_QWORD *)a1 + 54) + 148LL);
      *((_DWORD *)a2 + 97) = v28 ^ (v28 ^ *(_DWORD *)(*((_QWORD *)a1 + 54) + 388LL)) & 0x100000;
    }
  }
  else
  {
    CancelInputState(v15, 2u);
  }
  v16 = CheckTransferState(a1, a2, 128, a4) - 1;
  if ( v16 )
  {
    if ( v16 != 1 )
      goto LABEL_11;
    *(_QWORD *)&v31 = (char *)a2 + 128;
    v24 = *(_QWORD *)(*((_QWORD *)a1 + 54) + 128LL);
    goto LABEL_25;
  }
  v29 = *((_QWORD *)a2 + 15);
  if ( v29 )
  {
    if ( *((_QWORD *)a2 + 16) )
    {
      v24 = *(_QWORD *)(*((_QWORD *)a1 + 54) + 128LL);
      if ( v24 )
      {
        if ( *(_QWORD *)(v29 + 88) == v24 )
        {
          *(_QWORD *)&v31 = (char *)a2 + 128;
LABEL_25:
          *((_QWORD *)&v31 + 1) = v24;
          HMAssignmentLock(&v31);
          HMAssignmentUnlock(*((_QWORD *)a1 + 54) + 128LL);
        }
      }
    }
  }
LABEL_11:
  v17 = *((_QWORD *)a1 + 54);
  if ( a1 == *(struct tagTHREADINFO **)(v17 + 64) )
  {
    *((_DWORD *)a2 + 97) ^= (*((_DWORD *)a2 + 97) ^ *(_DWORD *)(v17 + 388)) & 0xFFEFFFFF;
    if ( !(unsigned int)IsInsideMenuLoop((__int64)a1) )
      *((_DWORD *)a2 + 97) = v25 & 0xFFFFFFBF;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = *((_QWORD *)a1 + 54);
      v30 = *(_QWORD *)(v26 + 64);
      LOBYTE(v26) = 4;
      WPP_RECORDER_SF_qqq(
        gptiCurrent,
        v26,
        18,
        39,
        (__int64)&WPP_aa0cdaa0f1c33ddef9256642731d7c5d_Traceguids,
        *((_QWORD *)a1 + 54),
        gptiCurrent,
        v30);
    }
    *(_QWORD *)(*((_QWORD *)a1 + 54) + 64LL) = 0LL;
  }
  if ( gspwndCursor && a1 == *(struct tagTHREADINFO **)(gspwndCursor + 16) )
    LockQCursor(a2, *(_QWORD *)(*((_QWORD *)a1 + 54) + 376LL));
  *((_DWORD *)a2 + 96) += *((_DWORD *)a1 + 190);
  *((_QWORD *)a2 + 11) = a1;
  *((_QWORD *)a2 + 12) = a1;
  result = *((_QWORD *)a1 + 53);
  v19 = *(_DWORD *)(result + 880);
  if ( *((_DWORD *)a2 + 107) < v19 )
  {
    *((_DWORD *)a2 + 108) = 0;
    *((_DWORD *)a2 + 107) = v19;
  }
  v20 = *((_QWORD *)a1 + 54);
  *((_QWORD *)a1 + 54) = a2;
  if ( v20 == a3 )
  {
    --*(_DWORD *)(v20 + 392);
  }
  else
  {
    v21 = *(struct tagQMSG **)(v20 + 24);
    *(_QWORD *)(v20 + 24) = 0LL;
    *(_QWORD *)(v20 + 32) = 0LL;
    *(_DWORD *)(v20 + 40) = 0;
    RedistributeInput(v21, (struct tagQ *)v20, 0LL);
    return zzzDestroyQueue(v20);
  }
  return result;
}
