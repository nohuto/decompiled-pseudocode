/*
 * XREFs of DrvChangeDisplaySettings @ 0x1C00658C4
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0065210 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C0065C78 (--0AUTO_TGO@@IEAA@XZ.c)
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C0065CBC (--1AUTO_TGO@@MEAA@XZ.c)
 *     LogDiagCDS @ 0x1C0065CE8 (LogDiagCDS.c)
 *     DrvSetDisplayConfig @ 0x1C0065F30 (DrvSetDisplayConfig.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x1C0067580 (DrvChangeDisplaySettingsPreValidate.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0072BC8 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00760D4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C00BFF14 (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 */

__int64 __fastcall DrvChangeDisplaySettings(
        PCUNICODE_STRING String1,
        __int64 a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        struct _MDEV *a8,
        _QWORD *a9,
        int a10,
        int a11,
        int a12,
        unsigned int a13,
        __int64 a14,
        __int64 a15)
{
  __int64 v17; // rbx
  void *v18; // r13
  ULONG TimeIncrement; // eax
  unsigned int v20; // edi
  int v21; // ebx
  int v22; // r14d
  struct tagGRAPHICS_DEVICE *v23; // rsi
  int PruneFlag; // eax
  int v25; // r15d
  int v26; // r9d
  int v27; // r8d
  int v28; // eax
  unsigned int v30; // eax
  _BYTE v31[4]; // [rsp+88h] [rbp-80h] BYREF
  int v32; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v33; // [rsp+90h] [rbp-78h] BYREF
  struct tagGRAPHICS_DEVICE *v34; // [rsp+98h] [rbp-70h] BYREF
  void *v35; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v36; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v37; // [rsp+B8h] [rbp-50h]
  void *v38[2]; // [rsp+C8h] [rbp-40h]
  __int64 v39; // [rsp+D8h] [rbp-30h]
  __int64 v40; // [rsp+E0h] [rbp-28h]
  _QWORD v41[12]; // [rsp+E8h] [rbp-20h] BYREF
  void *retaddr; // [rsp+150h] [rbp+48h]
  int v45; // [rsp+198h] [rbp+90h]

  v32 = 0;
  v34 = 0LL;
  v17 = MEMORY[0xFFFFF78000000320];
  v18 = 0LL;
  v33 = 0LL;
  TimeIncrement = KeQueryTimeIncrement();
  *a9 = 0LL;
  v40 = v17 * TimeIncrement;
  v35 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v35, 2LL);
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v41);
  v41[0] = off_1C0243A78;
  v20 = DrvChangeDisplaySettingsPreValidate(String1, a6, (__int64)&v34, (__int64)&v33);
  if ( v20 )
    goto LABEL_19;
  v21 = 1;
  if ( !(_DWORD)v33 )
  {
    if ( gOldModeChange )
      WdLogSingleEntry0(1LL);
    v25 = a12;
    v22 = a7;
    v23 = v34;
    gOldModeChange = 1;
    v30 = DrvChangeDisplaySettingsInternal(v34, a3, 0LL, a4, a6, a7, a8, a9, a10, a11, a12, 0, 0);
    gOldModeChange = 0;
    v20 = v30;
    v32 = 1;
    goto LABEL_17;
  }
  v22 = a7;
  v23 = v34;
  v31[0] = 0;
  v39 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  *(_OWORD *)v38 = 0LL;
  if ( a3 )
  {
    if ( (((unsigned __int64)v34 + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*((_DWORD *)v34 + 40) & 0x800000) == 0 )
      WdLogSingleEntry0(1LL);
    DWORD2(v36) = a11;
    *(_QWORD *)&v37 = __PAIR64__(a6, a13);
    *(_QWORD *)&v36 = v23;
    v38[0] = a3;
    DWORD2(v37) = a7;
    if ( a10 == -1 )
      PruneFlag = DrvGetPruneFlag(v23);
    else
      PruneFlag = a10 != 0;
    HIDWORD(v36) = PruneFlag;
  }
  v25 = a12;
  v26 = 32;
  v27 = (a7 != 0 ? 143 : 79) | (a12 != 0 ? 0x100 : 0);
  if ( !a3 && a7 )
  {
    v27 |= 0x800u;
    v26 = 34;
  }
  v28 = DrvSetDisplayConfig(
          0,
          0,
          v27,
          v26,
          a4,
          a5 != 0,
          0LL,
          (__int64)&v36,
          a8,
          (__int64)a9,
          (__int64)&v32,
          0LL,
          (__int64)v31,
          a14,
          a15,
          0LL);
  v20 = v39;
  v18 = v38[1];
  HIDWORD(v33) = v28;
  v45 = HIDWORD(v39);
  if ( v28 >= 0 )
  {
    if ( (int)v39 < 0 )
      WdLogSingleEntry0(1LL);
    if ( v31[0] )
    {
      if ( a12 )
        WdLogSingleEntry0(1LL);
      v20 = 2;
    }
    goto LABEL_16;
  }
  if ( (int)v39 >= 0 )
  {
    WdLogSingleEntry0(1LL);
LABEL_16:
    v21 = v45;
    goto LABEL_17;
  }
  v21 = HIDWORD(v39);
LABEL_17:
  LogDiagCDS(String1, a3, v23, a5, a6, v22, a11, v25, v40, v20, HIDWORD(v33), v21, v32, v18);
  if ( v18 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v18);
LABEL_19:
  AUTO_TGO::~AUTO_TGO((AUTO_TGO *)v41);
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v35, 3LL);
  return v20;
}
