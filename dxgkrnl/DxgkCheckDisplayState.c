/*
 * XREFs of DxgkCheckDisplayState @ 0x1C02F49D0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001F224 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??0DISPLAYSTATECHECKER@@QEAA@XZ @ 0x1C0049688 (--0DISPLAYSTATECHECKER@@QEAA@XZ.c)
 *     DpiTryLidStateRecovery @ 0x1C005DB6C (DpiTryLidStateRecovery.c)
 *     ?CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ @ 0x1C02F21A0 (-CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ.c)
 *     ?Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z @ 0x1C02F3B84 (-Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z.c)
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F4034 (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ @ 0x1C02F48CC (-NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ.c)
 */

__int64 __fastcall DxgkCheckDisplayState(unsigned int *a1)
{
  DISPLAYSTATECHECKER *v2; // rax
  char *v3; // rbx
  const char *v4; // r9
  int v5; // r8d
  __int64 v6; // rdx
  int v7; // edi
  __int128 v9; // [rsp+60h] [rbp-18h] BYREF

  v2 = (DISPLAYSTATECHECKER *)operator new[](0x3710uLL, 0x4B677844u, 256LL);
  if ( !v2 )
  {
    v3 = 0LL;
    goto LABEL_8;
  }
  v3 = (char *)DISPLAYSTATECHECKER::DISPLAYSTATECHECKER(v2);
  if ( !v3 )
  {
LABEL_8:
    WdLogSingleEntry1(2LL, 59LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"No memory available for DISPLAYSTATECHECKER",
      59LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v7 = -1073741801;
    goto LABEL_9;
  }
  v4 = (const char *)*((_QWORD *)a1 + 1);
  v5 = a1[1];
  v6 = *a1;
  v9 = *(_OWORD *)(a1 + 6);
  v7 = DISPLAYSTATECHECKER::Initialize((__int64)v3, v6, v5, v4, &v9);
  if ( v7 >= 0 )
  {
    DISPLAYSTATECHECKER::CheckPrimaryContentState((DISPLAYSTATECHECKER *)v3);
    DISPLAYSTATECHECKER::LogAllDisplayDiagInfo(
      (DISPLAYSTATECHECKER *)v3,
      *((struct _DXGK_DISPLAY_SCENARIO_CONTEXT **)a1 + 2));
    if ( a1[1] && DISPLAYSTATECHECKER::NeedLidStateRecovery((DISPLAYSTATECHECKER *)v3) )
      DpiTryLidStateRecovery();
    goto LABEL_10;
  }
LABEL_9:
  if ( v3 )
  {
LABEL_10:
    `vector destructor iterator'(
      v3 + 40,
      3512LL,
      4LL,
      (void (__fastcall *)(char *))DISPLAYDIAGNOSTICADAPTERDATA::~DISPLAYDIAGNOSTICADAPTERDATA);
    operator delete(v3);
  }
  return (unsigned int)v7;
}
