/*
 * XREFs of ?GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z @ 0x1C020DB48
 * Callers:
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C020EABC (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     IsLegacyTouchPad @ 0x1C009C6AC (IsLegacyTouchPad.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z @ 0x1C019D710 (-GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z.c)
 */

void __fastcall PTPTelemetry::GetDeviceData(
        struct _UNICODE_STRING *a1,
        struct _UNICODE_STRING *a2,
        bool *a3,
        bool *a4,
        unsigned int *a5,
        bool *a6,
        struct tagRECT *a7,
        struct tagRECT *a8)
{
  char v10; // bp
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  _BOOL8 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  int v22; // eax
  int v23; // ecx
  __int64 v24; // rax
  struct tagRECT v25; // xmm1
  int v26; // eax

  *a8 = 0LL;
  *a5 = 0;
  *a6 = 0;
  v10 = 0;
  *a7 = 0LL;
  *a3 = 0;
  *a4 = 0;
  v11 = *(_QWORD *)(*(_QWORD *)(SGDGetUserSessionState(0LL, a2, a3, a4) + 16840) + 1320LL);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v11, 0LL);
  v16 = SGDGetUserSessionState(v13, v12, v14, v15);
  v19 = 0LL;
  v20 = *(_QWORD *)(v16 + 16840);
  v21 = **(_QWORD **)(v20 + 1328);
  if ( !v21 )
    goto LABEL_25;
  do
  {
    if ( (*(_DWORD *)(v21 + 200) & 0x80u) == 0 )
    {
      if ( *(_BYTE *)(v21 + 48) != v19 )
        goto LABEL_21;
      if ( *(_WORD *)(v21 + 880) == v19 )
      {
        *a3 = 1;
        goto LABEL_21;
      }
      LOBYTE(v26) = IsLegacyTouchPad(v21);
      if ( v26 )
      {
        *a6 = 1;
        *(_BYTE *)(SGDGetUserSessionState(v20, v19, v17, v18) + 11810) = 1;
LABEL_20:
        v19 = 0LL;
      }
    }
    else
    {
      v22 = *(_DWORD *)(*(_QWORD *)(v21 + 472) + 24LL);
      if ( v22 == 7 )
      {
        v10 = 1;
        *(_BYTE *)(SGDGetUserSessionState(v20, v19, v17, v18) + 11810) = 1;
        v23 = *(_DWORD *)(*(_QWORD *)(v21 + 472) + 952LL);
        switch ( v23 )
        {
          case 1:
            *a5 = 1;
            break;
          case 2:
            *a5 = 2;
            break;
          case 3:
            *a5 = 3;
            break;
          case 0:
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2024);
            break;
        }
        v24 = *(_QWORD *)(v21 + 472);
        v25 = *(struct tagRECT *)(v24 + 140);
        *a7 = *(struct tagRECT *)(v24 + 124);
        *a8 = v25;
        RimTelemetry::GetHidVidPidStrings((struct RIMDEV *const)v21, a1, a2);
        goto LABEL_20;
      }
      if ( (unsigned int)(v22 - 1) <= 3 )
        *a4 = 1;
    }
LABEL_21:
    v21 = *(_QWORD *)(v21 + 56);
  }
  while ( v21 );
  if ( v10 && *a6 != v19 )
    *a6 = v19;
LABEL_25:
  ExReleasePushLockSharedEx(v11, 0LL);
  KeLeaveCriticalRegion();
}
