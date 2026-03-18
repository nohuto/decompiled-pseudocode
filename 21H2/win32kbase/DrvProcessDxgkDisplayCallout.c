/*
 * XREFs of DrvProcessDxgkDisplayCallout @ 0x1C01749FC
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00D24E0 (VideoPortCalloutThread.c)
 * Callees:
 *     DrvQueryMDEVPowerState @ 0x1C0067730 (DrvQueryMDEVPowerState.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0171294 (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     ?DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z @ 0x1C0172004 (-DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z.c)
 */

__int64 __fastcall DrvProcessDxgkDisplayCallout(
        struct _MDEV *a1,
        __int64 a2,
        unsigned __int8 *a3,
        bool *a4,
        bool *a5,
        _BYTE *a6)
{
  struct tagDESKTOP *v8; // r15
  int v10; // eax
  unsigned int v11; // ebx
  char v12; // cl
  int updated; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // r8
  unsigned __int8 v19[4]; // [rsp+40h] [rbp-99h] BYREF
  _DWORD v20[3]; // [rsp+44h] [rbp-95h] BYREF
  char v21; // [rsp+50h] [rbp-89h] BYREF
  _BYTE v22[143]; // [rsp+51h] [rbp-88h] BYREF

  v8 = grpdeskRitInput;
  memset(v22, 0, sizeof(v22));
  v21 = 0x80;
  v10 = ((__int64 (__fastcall *)(char *))qword_1C0296750)(&v21);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v12 = v21;
    *a4 = (v21 & 0x20) != 0;
    *a5 = (v12 & 0x10) != 0;
    *a6 = v12 & 1;
    if ( (v12 & 2) != 0 )
    {
      v20[0] = PsGetCurrentProcessSessionId();
      updated = ZwUpdateWnfStateData(&WNF_DX_MONITOR_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, v20);
      v11 = updated;
      if ( updated < 0 )
      {
        WdLogSingleEntry2(2LL, updated, v20[0]);
        v11 = 0;
      }
      v12 = v21;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, v10);
    memset(v22, 0, sizeof(v22));
    v12 = 4;
    v21 = 4;
  }
  if ( (v12 & 4) != 0 )
  {
    v14 = *(_DWORD *)&v22[3];
    if ( !*(_DWORD *)&v22[3] )
      v14 = 2191;
    *(_DWORD *)&v22[3] = v14;
    if ( (v12 & 8) != 0 )
      *(_DWORD *)&v22[3] = v14 | 0x100;
    if ( (unsigned int)DrvQueryMDEVPowerState((__int64)a1) )
    {
      v19[0] = 0;
      v16 = DrvProcessSetDisplayConfigParameters(
              (struct _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *)&v21,
              *(unsigned int *)&v22[3],
              v8,
              v19,
              (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)&v22[23]);
      if ( v16 < 0 )
      {
        v17 = 1LL;
        goto LABEL_16;
      }
      if ( v19[0] )
      {
        DrvUpdateDpiInfoOnOptimizedModeChange(a1, a3);
        v22[0] &= ~1u;
      }
    }
    else
    {
      v15 = *(_DWORD *)&v22[3];
      if ( (*(_WORD *)&v22[3] & 0x200) != 0 )
      {
        v16 = DrvProcessSetDisplayConfigParameters(
                (struct _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *)&v21,
                *(_DWORD *)&v22[3] & 0xFFFFFF7F,
                v8,
                0LL,
                (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)&v22[23]);
        if ( v16 < 0 )
        {
          v17 = 0LL;
LABEL_16:
          v11 = v16;
          WdLogSingleEntry2(2LL, v16, v17);
          goto LABEL_27;
        }
        v15 = *(_WORD *)&v22[3] & 0x1100 | 0x88F;
        *(_DWORD *)&v22[3] = v15;
      }
      else if ( (v22[3] & 0xF) == 0 )
      {
        WdLogSingleEntry0(2LL);
        goto LABEL_27;
      }
      gulDelayedSwitchAction = v15;
    }
  }
  if ( (v22[0] & 1) != 0 )
    DrvUpdateDpiInfoOnOptimizedModeChange(a1, a3);
LABEL_27:
  if ( *(_QWORD *)&v22[15] )
    ExFreePoolWithTag(*(PVOID *)&v22[15], 0);
  if ( *(_QWORD *)&v22[135] )
    **(_DWORD **)&v22[135] = v11;
  return v11;
}
