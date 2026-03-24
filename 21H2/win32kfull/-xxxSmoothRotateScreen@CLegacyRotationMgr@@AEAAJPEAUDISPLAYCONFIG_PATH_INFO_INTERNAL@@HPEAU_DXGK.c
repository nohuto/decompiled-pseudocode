/*
 * XREFs of ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D1F14
 * Callers:
 *     ?xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z @ 0x1C01D1928 (-xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z.c)
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C0014620 (IsCurrentDesktopComposed.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00BD148 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00BD17C (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z @ 0x1C0126ECC (-ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?IsExtendTopology@@YAHXZ @ 0x1C01D1174 (-IsExtendTopology@@YAHXZ.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D21E4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     DwmAsyncNotifyRotationModeChange @ 0x1C0274FC4 (DwmAsyncNotifyRotationModeChange.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // esi
  void *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // ebx
  void *v21; // rax
  unsigned int v23; // [rsp+50h] [rbp-69h] BYREF
  int v24; // [rsp+54h] [rbp-65h] BYREF
  unsigned int v25; // [rsp+58h] [rbp-61h] BYREF
  _DWORD v26[4]; // [rsp+60h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+70h] [rbp-49h] BYREF
  _DWORD *v28; // [rsp+90h] [rbp-29h]
  __int64 v29; // [rsp+98h] [rbp-21h]
  int *v30; // [rsp+A0h] [rbp-19h]
  __int64 v31; // [rsp+A8h] [rbp-11h]
  int *v32; // [rsp+B0h] [rbp-9h]
  __int64 v33; // [rsp+B8h] [rbp-1h]
  int *v34; // [rsp+C0h] [rbp+7h]
  __int64 v35; // [rsp+C8h] [rbp+Fh]

  v7 = ConvertDisplayConfigRotationToDMDO(*((_DWORD *)a2 + 26));
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v26, gRotationProcessLock);
  if ( grpdeskRitInput && (v8 = *(_QWORD *)(grpdeskRitInput + 256LL)) != 0 )
    v9 = *(_DWORD *)(v8 + 56);
  else
    v9 = 0;
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v26);
  EtwTraceSmoothRotationStart(v7, a3, v9);
  DrvLogDiagDisplayChange(0LL, 8LL);
  v10 = IsExtendTopology();
  v13 = IsCurrentDesktopComposed();
  if ( v13 && !v10 )
  {
    v14 = (void *)ReferenceDwmApiPort(v12, v11);
    DwmAsyncNotifyRotationModeChange(v14);
    v15 = gdwInAtomicOperation;
    if ( gdwInAtomicOperation )
    {
      v15 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    v16 = UserReferenceDwmApiPort(v15);
    UserSessionSwitchLeaveCrit(v17);
    DwmSyncFlushAndWaitForBatch(v16);
    EnterCrit(0LL, 1LL);
  }
  v20 = xxxUserSetDisplayConfig(1LL, a2, 672LL, v13 != 0 ? 24 : 8, 0LL, 0, 0LL, 0LL, 0LL, a4);
  if ( v13 && !v10 )
  {
    v21 = (void *)ReferenceDwmApiPort(v19, v18);
    DwmAsyncNotifyRotationModeChange(v21);
  }
  EtwTraceSmoothRotationStop(v7, a3);
  if ( (unsigned int)dword_1C032B3D8 > 5
    && (qword_1C032B3E8 & 0x200000000001LL) != 0
    && (qword_1C032B3F0 & 0x200000000001LL) == qword_1C032B3F0 )
  {
    v23 = v20;
    v34 = (int *)&v23;
    v24 = v13;
    v32 = &v24;
    v25 = a3;
    v30 = (int *)&v25;
    v26[0] = v7;
    v28 = v26;
    v35 = 4LL;
    v33 = 4LL;
    v31 = 4LL;
    v29 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C032B3D8, (int)&dword_1C02F1045, 0, 0, 6u, &v27);
  }
  return v20;
}
