/*
 * XREFs of DrvProcessDxgkDisplayCallout @ 0x1C0147C78
 * Callers:
 *     VideoPortCalloutThread @ 0x1C011B084 (VideoPortCalloutThread.c)
 * Callees:
 *     DrvQueryMDEVPowerState @ 0x1C0019870 (DrvQueryMDEVPowerState.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0144690 (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     ?DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z @ 0x1C01452A0 (-DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z.c)
 */

__int64 __fastcall DrvProcessDxgkDisplayCallout(
        struct _MDEV *a1,
        __int64 a2,
        unsigned __int8 *a3,
        bool *a4,
        bool *a5,
        _BYTE *a6)
{
  struct tagDESKTOP *v7; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  char v15; // cl
  int updated; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int8 v33[4]; // [rsp+40h] [rbp-79h] BYREF
  _DWORD v34[3]; // [rsp+44h] [rbp-75h] BYREF
  char v35; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v36[111]; // [rsp+51h] [rbp-68h] BYREF

  v7 = grpdeskRitInput;
  memset(v36, 0, 0x67uLL);
  v35 = 0x80;
  v10 = ((__int64 (__fastcall *)(char *))qword_1C0250980)(&v35);
  v13 = v10;
  if ( v10 >= 0 )
  {
    v15 = v35;
    *a4 = (v35 & 0x20) != 0;
    *a5 = (v15 & 0x10) != 0;
    *a6 = v15 & 1;
    if ( (v15 & 2) != 0 )
    {
      v34[0] = PsGetCurrentProcessSessionId();
      updated = ZwUpdateWnfStateData(&WNF_DX_MONITOR_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, v34, 0, 0);
      v13 = updated;
      if ( updated < 0 )
      {
        v19 = WdLogNewEntry5_WdError(v18, v17);
        *(_QWORD *)(v19 + 24) = v13;
        *(_QWORD *)(v19 + 32) = v34[0];
        WdLogEvent5_WdError(v19);
        LODWORD(v13) = 0;
      }
      v15 = v35;
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v14 + 24) = v13;
    WdLogEvent5_WdError(v14);
    memset(v36, 0, 0x67uLL);
    v15 = 4;
    v35 = 4;
  }
  if ( (v15 & 4) != 0 )
  {
    v20 = *(_DWORD *)&v36[3];
    if ( !*(_DWORD *)&v36[3] )
      v20 = 2191;
    *(_DWORD *)&v36[3] = v20;
    if ( (v15 & 8) != 0 )
      *(_DWORD *)&v36[3] = v20 | 0x100;
    if ( (unsigned int)DrvQueryMDEVPowerState((__int64)a1) )
    {
      v33[0] = 0;
      v29 = DrvProcessSetDisplayConfigParameters(
              (struct _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *)&v35,
              *(unsigned int *)&v36[3],
              v7,
              v33,
              (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)&v36[23]);
      v27 = v29;
      if ( v29 < 0 )
      {
        LODWORD(v13) = v29;
        v28 = WdLogNewEntry5_WdError(v31, v30);
        *(_QWORD *)(v28 + 32) = 1LL;
        goto LABEL_16;
      }
      if ( v33[0] )
      {
        DrvUpdateDpiInfoOnOptimizedModeChange(a1, a3);
        v36[0] &= ~1u;
      }
    }
    else
    {
      v23 = *(_DWORD *)&v36[3];
      if ( (*(_WORD *)&v36[3] & 0x200) != 0 )
      {
        v24 = DrvProcessSetDisplayConfigParameters(
                (struct _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *)&v35,
                *(_DWORD *)&v36[3] & 0xFFFFFF7F,
                v7,
                0LL,
                (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)&v36[23]);
        v27 = v24;
        if ( v24 < 0 )
        {
          LODWORD(v13) = v24;
          v28 = WdLogNewEntry5_WdError(v26, v25);
          *(_QWORD *)(v28 + 32) = 0LL;
LABEL_16:
          *(_QWORD *)(v28 + 24) = v27;
LABEL_17:
          WdLogEvent5_WdError(v28);
          goto LABEL_28;
        }
        v23 = *(_WORD *)&v36[3] & 0x1100 | 0x88F;
        *(_DWORD *)&v36[3] = v23;
      }
      else if ( (v36[3] & 0xF) == 0 )
      {
        v28 = WdLogNewEntry5_WdError(v22, v21);
        goto LABEL_17;
      }
      gulDelayedSwitchAction = v23;
    }
  }
  if ( (v36[0] & 1) != 0 )
    DrvUpdateDpiInfoOnOptimizedModeChange(a1, a3);
LABEL_28:
  if ( *(_QWORD *)&v36[15] )
    ExFreePoolWithTag(*(PVOID *)&v36[15], 0);
  if ( *(_QWORD *)&v36[95] )
    **(_DWORD **)&v36[95] = v13;
  return (unsigned int)v13;
}
