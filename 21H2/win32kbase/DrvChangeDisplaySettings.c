/*
 * XREFs of DrvChangeDisplaySettings @ 0x1C00189C0
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C001845C (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0012620 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0015CCC (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C0018D64 (--0AUTO_TGO@@IEAA@XZ.c)
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C0018DA8 (--1AUTO_TGO@@MEAA@XZ.c)
 *     LogDiagCDS @ 0x1C0018DD4 (LogDiagCDS.c)
 *     DrvSetDisplayConfig @ 0x1C0019050 (DrvSetDisplayConfig.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x1C001A714 (DrvChangeDisplaySettingsPreValidate.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C00ADCA8 (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 */

__int64 __fastcall DrvChangeDisplaySettings(
        PCUNICODE_STRING String1,
        __int64 a2,
        struct _devicemodeW *a3,
        struct _ERESOURCE *a4,
        unsigned int a5,
        int a6,
        int a7,
        struct _MDEV *a8,
        struct _MDEV **a9,
        unsigned int a10,
        int a11,
        int a12,
        unsigned int a13,
        __int64 a14,
        __int64 a15)
{
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // ebx
  int v22; // esi
  struct tagGRAPHICS_DEVICE *v23; // rdi
  int v24; // r13d
  int PruneFlag; // eax
  int v26; // r14d
  int v27; // r9d
  int v28; // r8d
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // ecx
  __int64 v34; // rax
  unsigned int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  _BYTE v40[4]; // [rsp+88h] [rbp-80h] BYREF
  int v41; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v42; // [rsp+90h] [rbp-78h] BYREF
  struct tagGRAPHICS_DEVICE *v43; // [rsp+98h] [rbp-70h] BYREF
  void *v44; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v45; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v46; // [rsp+B8h] [rbp-50h]
  __int128 v47; // [rsp+C8h] [rbp-40h]
  __int64 v48; // [rsp+D8h] [rbp-30h]
  __int64 v49; // [rsp+E0h] [rbp-28h]
  __int64 v50; // [rsp+E8h] [rbp-20h]
  _QWORD v51[13]; // [rsp+F0h] [rbp-18h] BYREF
  void *retaddr; // [rsp+160h] [rbp+58h]
  int v55; // [rsp+1A8h] [rbp+A0h]

  v41 = 0;
  v43 = 0LL;
  v17 = 0LL;
  v49 = MEMORY[0xFFFFF78000000320];
  v42 = 0LL;
  v18 = v49 * KeQueryTimeIncrement();
  *a9 = 0LL;
  v50 = v18;
  v44 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v44, 2LL);
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v51);
  v51[0] = off_1C0203660;
  v21 = DrvChangeDisplaySettingsPreValidate(String1, a6, (__int64)&v43, (__int64)&v42);
  if ( v21 )
    goto LABEL_19;
  if ( !(_DWORD)v42 )
  {
    if ( gOldModeChange )
    {
      v34 = WdLogNewEntry5_WdAssertion(v20, v19);
      WdLogEvent5_WdAssertion(v34);
    }
    v26 = a12;
    v24 = a11;
    v22 = a7;
    v23 = v43;
    gOldModeChange = 1;
    v35 = DrvChangeDisplaySettingsInternal((__int64)v43, a3, 0LL, a4, a6, a7, a8, a9, a10, a11, a12, 0, 0);
    gOldModeChange = 0;
    v32 = 1;
    v41 = 1;
    v21 = v35;
    goto LABEL_17;
  }
  v22 = a7;
  v23 = v43;
  v40[0] = 0;
  v24 = a11;
  v48 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  if ( a3 )
  {
    if ( (((unsigned __int64)v43 + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*((_DWORD *)v43 + 40) & 0x800000) == 0 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v20, v19);
      WdLogEvent5_WdAssertion(v36);
    }
    *(_QWORD *)&v46 = __PAIR64__(a6, a13);
    *(_QWORD *)&v45 = v23;
    DWORD2(v45) = a11;
    *(_QWORD *)&v47 = a3;
    DWORD2(v46) = a7;
    if ( a10 == -1 )
      PruneFlag = DrvGetPruneFlag(v23);
    else
      PruneFlag = a10 != 0;
    HIDWORD(v45) = PruneFlag;
  }
  v26 = a12;
  v27 = 32;
  v28 = (a7 != 0 ? 143 : 79) | (a12 != 0 ? 0x100 : 0);
  if ( !a3 && a7 )
  {
    v28 |= 0x800u;
    v27 = 34;
  }
  v29 = DrvSetDisplayConfig(
          0,
          0,
          v28,
          v27,
          (__int64)a4,
          a5 != 0,
          0LL,
          (__int64)&v45,
          a8,
          (__int64)a9,
          (__int64)&v41,
          0LL,
          (__int64)v40,
          a14,
          a15);
  v21 = v48;
  v31 = v29;
  v17 = *((_QWORD *)&v47 + 1);
  HIDWORD(v42) = v29;
  v55 = HIDWORD(v48);
  if ( (v29 & 0x80000000) == 0 )
  {
    if ( (int)v48 < 0 )
    {
      v37 = WdLogNewEntry5_WdAssertion(v29, v30);
      WdLogEvent5_WdAssertion(v37);
    }
    if ( v40[0] )
    {
      if ( a12 )
      {
        v38 = WdLogNewEntry5_WdAssertion(v31, v30);
        WdLogEvent5_WdAssertion(v38);
      }
      v21 = 2;
    }
    goto LABEL_16;
  }
  if ( (int)v48 >= 0 )
  {
    v39 = WdLogNewEntry5_WdAssertion(v29, v30);
    WdLogEvent5_WdAssertion(v39);
LABEL_16:
    v32 = v55;
    goto LABEL_17;
  }
  v32 = HIDWORD(v48);
LABEL_17:
  LogDiagCDS(String1, a3, v23, a5, a6, v22, v24, v26, v50, v21, HIDWORD(v42), v32, v41, v17);
  if ( v17 )
    Win32FreePool(v17);
LABEL_19:
  AUTO_TGO::~AUTO_TGO((AUTO_TGO *)v51);
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v44, 3LL);
  return v21;
}
