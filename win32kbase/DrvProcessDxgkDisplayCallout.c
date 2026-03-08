/*
 * XREFs of DrvProcessDxgkDisplayCallout @ 0x1C0194740
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00D93A8 (VideoPortCalloutThread.c)
 * Callees:
 *     DrvQueryMDEVPowerState @ 0x1C0011490 (DrvQueryMDEVPowerState.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018E59C (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     ?DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z @ 0x1C018F3A4 (-DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z.c)
 */

__int64 __fastcall DrvProcessDxgkDisplayCallout(
        struct _MDEV *a1,
        __int64 a2,
        unsigned __int8 *a3,
        bool *a4,
        bool *a5,
        _BYTE *a6)
{
  struct tagDESKTOP *v8; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v13; // eax
  unsigned int v14; // edi
  char v15; // cl
  int updated; // eax
  int v17; // eax
  __int64 v18; // rcx
  int v19; // ebx
  int v20; // eax
  unsigned __int8 v22[4]; // [rsp+40h] [rbp-99h] BYREF
  _DWORD v23[3]; // [rsp+44h] [rbp-95h] BYREF
  char v24; // [rsp+50h] [rbp-89h] BYREF
  _BYTE v25[143]; // [rsp+51h] [rbp-88h] BYREF

  v8 = grpdeskRitInput;
  memset(v25, 0, sizeof(v25));
  v24 = 0x80;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v11, v10);
  v13 = (*(__int64 (__fastcall **)(char *))(DxgkWin32kInterface + 240))(&v24);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v15 = v24;
    *a4 = (v24 & 0x20) != 0;
    *a5 = (v15 & 0x10) != 0;
    *a6 = v15 & 1;
    if ( (v15 & 2) != 0 )
    {
      v23[0] = PsGetCurrentProcessSessionId();
      updated = ZwUpdateWnfStateData(&WNF_DX_MONITOR_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, v23);
      v14 = updated;
      if ( updated < 0 )
      {
        WdLogSingleEntry2(2LL, updated);
        v14 = 0;
      }
      v15 = v24;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, v13);
    memset(v25, 0, sizeof(v25));
    v15 = 4;
    v24 = 4;
  }
  if ( (v15 & 4) != 0 )
  {
    v17 = *(_DWORD *)&v25[3];
    if ( !*(_DWORD *)&v25[3] )
      v17 = 2191;
    *(_DWORD *)&v25[3] = v17;
    if ( (v15 & 8) != 0 )
      *(_DWORD *)&v25[3] = v17 | 0x100;
    if ( (unsigned int)DrvQueryMDEVPowerState((__int64)a1) )
    {
      v22[0] = 0;
      v20 = DrvProcessSetDisplayConfigParameters(
              (struct _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *)&v24,
              *(unsigned int *)&v25[3],
              v8,
              v22,
              (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)&v25[23]);
      if ( v20 < 0 )
        goto LABEL_15;
      if ( v22[0] )
      {
        DrvUpdateDpiInfoOnOptimizedModeChange(a1, a3);
        v25[0] &= ~1u;
      }
    }
    else
    {
      v19 = *(_DWORD *)&v25[3];
      if ( (*(_WORD *)&v25[3] & 0x200) != 0 )
      {
        v20 = DrvProcessSetDisplayConfigParameters(
                (struct _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *)&v24,
                *(_DWORD *)&v25[3] & 0xFFFFFF7F,
                v8,
                0LL,
                (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)&v25[23]);
        if ( v20 < 0 )
        {
LABEL_15:
          v14 = v20;
          WdLogSingleEntry2(2LL, v20);
          goto LABEL_25;
        }
        v19 = *(_WORD *)&v25[3] & 0x1100 | 0x88F;
        *(_DWORD *)&v25[3] = v19;
      }
      else if ( (v25[3] & 0xF) == 0 )
      {
        WdLogSingleEntry0(2LL);
        goto LABEL_25;
      }
      *(_DWORD *)(SGDGetUserGdiSessionState(v18) + 16) = v19;
    }
  }
  if ( (v25[0] & 1) != 0 )
    DrvUpdateDpiInfoOnOptimizedModeChange(a1, a3);
LABEL_25:
  if ( *(_QWORD *)&v25[15] )
    ExFreePoolWithTag(*(PVOID *)&v25[15], 0);
  if ( *(_QWORD *)&v25[135] )
    **(_DWORD **)&v25[135] = v14;
  return v14;
}
