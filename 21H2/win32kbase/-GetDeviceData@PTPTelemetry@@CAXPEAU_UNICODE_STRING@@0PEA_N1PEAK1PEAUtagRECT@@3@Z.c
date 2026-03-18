/*
 * XREFs of ?GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z @ 0x1C01DE154
 * Callers:
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C01DEE38 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     IsLegacyTouchPad @ 0x1C00C48A8 (IsLegacyTouchPad.c)
 *     ?GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z @ 0x1C017C210 (-GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v11; // r8
  struct DEVICEINFO *v12; // rbx
  _BOOL8 v13; // rdx
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rcx
  struct tagRECT v17; // xmm1

  *a5 = 0;
  *a6 = 0;
  v10 = 0;
  *a7 = 0LL;
  *a3 = 0;
  *a8 = 0LL;
  *a4 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  v12 = CBaseInput::_spDevList;
  v13 = 0LL;
  if ( CBaseInput::_spDevList )
  {
    do
    {
      if ( (*((_DWORD *)v12 + 50) & 0x80u) == 0 )
      {
        if ( *((_BYTE *)v12 + 48) == v13 )
        {
          if ( *((_WORD *)v12 + 440) == v13 )
          {
            *a3 = 1;
          }
          else if ( (unsigned int)IsLegacyTouchPad((__int64)v12) )
          {
            *a6 = 1;
            PTPTelemetry::s_HasTpDevice = 1;
          }
        }
      }
      else
      {
        v14 = *((_QWORD *)v12 + 59);
        v15 = *(_DWORD *)(v14 + 24);
        if ( v15 == 7 )
        {
          v16 = *(unsigned int *)(v14 + 952);
          v10 = 1;
          PTPTelemetry::s_HasTpDevice = 1;
          switch ( (_DWORD)v16 )
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
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v13, v11);
              v14 = *((_QWORD *)v12 + 59);
              break;
          }
          v17 = *(struct tagRECT *)(v14 + 140);
          *a7 = *(struct tagRECT *)(v14 + 124);
          *a8 = v17;
          RimTelemetry::GetHidVidPidStrings(v12, a1, a2);
          v13 = 0LL;
        }
        else if ( (unsigned int)(v15 - 1) <= 3 )
        {
          *a4 = 1;
        }
      }
      v12 = (struct DEVICEINFO *)*((_QWORD *)v12 + 7);
    }
    while ( v12 );
    if ( v10 && *a6 != v13 )
      *a6 = v13;
  }
  ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
}
