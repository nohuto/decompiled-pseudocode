/*
 * XREFs of ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A7B94
 * Callers:
 *     ?xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z @ 0x1C01A7680 (-xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z.c)
 * Callees:
 *     ?ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z @ 0x1C003E448 (-ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0040C00 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0041D94 (_tlgKeywordOn.c)
 *     IsCurrentDesktopComposed @ 0x1C006D940 (IsCurrentDesktopComposed.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C007E800 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0080520 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?IsExtendTopology@@YAHXZ @ 0x1C01A6E70 (-IsExtendTopology@@YAHXZ.c)
 *     DwmAsyncNotifyRotationModeChange @ 0x1C026D278 (DwmAsyncNotifyRotationModeChange.c)
 */

__int64 __fastcall CLegacyRotationMgr::xxxSmoothRotateScreen(
        CLegacyRotationMgr *this,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  unsigned int v6; // r15d
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // edi
  __int64 v10; // rcx
  int v11; // esi
  void *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
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

  v6 = ConvertDisplayConfigRotationToDMDO(*((_DWORD *)a2 + 26));
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v26, gRotationProcessLock);
  if ( grpdeskRitInput && (v7 = *(_QWORD *)(grpdeskRitInput + 256LL)) != 0 )
    v8 = *(_DWORD *)(v7 + 56);
  else
    v8 = 0;
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v26);
  EtwTraceSmoothRotationStart(v6, a3, v8);
  DrvLogDiagDisplayChange(0LL, 8LL);
  v9 = IsExtendTopology();
  v11 = IsCurrentDesktopComposed();
  if ( v11 && !v9 )
  {
    v12 = (void *)ReferenceDwmApiPort(v10);
    DwmAsyncNotifyRotationModeChange(v12);
    v14 = UserReferenceDwmApiPort(v13);
    UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
    DwmSyncFlushAndWaitForBatch(v14);
    EnterCrit(1LL, 0LL);
  }
  v20 = xxxUserSetDisplayConfig(1LL, a2, 672LL, v11 != 0 ? 24 : 8);
  if ( v11 && !v9 )
  {
    v21 = (void *)ReferenceDwmApiPort(v19);
    DwmAsyncNotifyRotationModeChange(v21);
  }
  EtwTraceSmoothRotationStop(v6, a3);
  if ( (unsigned int)dword_1C0354098 > 5 && tlgKeywordOn((__int64)&dword_1C0354098, 0x200000000001LL) )
  {
    v23 = v20;
    v34 = (int *)&v23;
    v24 = v11;
    v32 = &v24;
    v25 = a3;
    v30 = (int *)&v25;
    v26[0] = v6;
    v28 = v26;
    v35 = 4LL;
    v33 = 4LL;
    v31 = 4LL;
    v29 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0354098, (unsigned __int8 *)dword_1C0319AF5, 0LL, 0LL, 6u, &v27);
  }
  return v20;
}
