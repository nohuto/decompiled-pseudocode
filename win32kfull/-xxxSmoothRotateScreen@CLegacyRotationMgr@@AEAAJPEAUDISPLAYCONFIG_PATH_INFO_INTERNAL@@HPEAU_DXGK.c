/*
 * XREFs of ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A8DC4
 * Callers:
 *     ?xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z @ 0x1C01A88B0 (-xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z.c)
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C001FD80 (IsCurrentDesktopComposed.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0029DD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z @ 0x1C00F8848 (-ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C011CC38 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?IsExtendTopology@@YAHXZ @ 0x1C01A80A0 (-IsExtendTopology@@YAHXZ.c)
 *     DwmAsyncNotifyRotationModeChange @ 0x1C026FD28 (DwmAsyncNotifyRotationModeChange.c)
 */

__int64 __fastcall CLegacyRotationMgr::xxxSmoothRotateScreen(
        CLegacyRotationMgr *this,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  unsigned int v7; // r15d
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // edi
  __int64 v11; // rcx
  int v12; // esi
  void *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned int v20; // ebx
  void *v21; // rax
  unsigned int v23; // [rsp+60h] [rbp-69h] BYREF
  int v24; // [rsp+64h] [rbp-65h] BYREF
  unsigned int v25; // [rsp+68h] [rbp-61h] BYREF
  _DWORD v26[4]; // [rsp+70h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+80h] [rbp-49h] BYREF
  _DWORD *v28; // [rsp+A0h] [rbp-29h]
  __int64 v29; // [rsp+A8h] [rbp-21h]
  int *v30; // [rsp+B0h] [rbp-19h]
  __int64 v31; // [rsp+B8h] [rbp-11h]
  int *v32; // [rsp+C0h] [rbp-9h]
  __int64 v33; // [rsp+C8h] [rbp-1h]
  int *v34; // [rsp+D0h] [rbp+7h]
  __int64 v35; // [rsp+D8h] [rbp+Fh]

  v7 = ConvertDisplayConfigRotationToDMDO(*((_DWORD *)a2 + 26));
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v26, gRotationProcessLock);
  if ( grpdeskRitInput && (v8 = *(_QWORD *)(grpdeskRitInput + 248LL)) != 0 )
    v9 = *(_DWORD *)(v8 + 56);
  else
    v9 = 0;
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v26);
  EtwTraceSmoothRotationStart(v7, a3, v9);
  DrvLogDiagDisplayChange(0LL, 8LL);
  v10 = IsExtendTopology();
  v12 = IsCurrentDesktopComposed();
  if ( v12 && !v10 )
  {
    v13 = (void *)ReferenceDwmApiPort(v11);
    DwmAsyncNotifyRotationModeChange(v13);
    v17 = UserReferenceDwmApiPort(v15, v14, v16);
    UserSessionSwitchLeaveCrit(v18);
    DwmSyncFlushAndWaitForBatch(v17);
    EnterCrit(1LL, 0LL);
  }
  v20 = xxxUserSetDisplayConfig(1LL, a2, 672LL, v12 != 0 ? 24 : 8, 0LL, 0, 0LL, 0LL, 0LL, a4, 0LL);
  if ( v12 && !v10 )
  {
    v21 = (void *)ReferenceDwmApiPort(v19);
    DwmAsyncNotifyRotationModeChange(v21);
  }
  EtwTraceSmoothRotationStop(v7, a3);
  if ( (unsigned int)dword_1C0357098 > 5 && tlgKeywordOn((__int64)&dword_1C0357098, 0x200000000001LL) )
  {
    v23 = v20;
    v34 = (int *)&v23;
    v24 = v12;
    v32 = &v24;
    v25 = a3;
    v30 = (int *)&v25;
    v26[0] = v7;
    v28 = v26;
    v35 = 4LL;
    v33 = 4LL;
    v31 = 4LL;
    v29 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0357098, (unsigned __int8 *)dword_1C031B375, 0LL, 0LL, 6u, &v27);
  }
  return v20;
}
