/*
 * XREFs of ?GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z @ 0x1C01A5D44
 * Callers:
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C01A6B68 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     IsLegacyTouchPad @ 0x1C000B3D8 (IsLegacyTouchPad.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z @ 0x1C014F5B0 (-GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z.c)
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
  struct DEVICEINFO *v11; // rbx
  __int16 v12; // dx
  unsigned int v13; // r8d
  __int64 v14; // rax
  int v15; // ecx
  int v16; // ecx
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
  v11 = CBaseInput::_spDevList;
  v12 = 0;
  if ( CBaseInput::_spDevList )
  {
    v13 = 2;
    do
    {
      if ( (*((_DWORD *)v11 + 50) & 0x80u) == 0 )
      {
        if ( *((_BYTE *)v11 + 48) == (_BYTE)v12 )
        {
          if ( *((_WORD *)v11 + 444) == v12 )
          {
            *a3 = 1;
          }
          else if ( (unsigned int)IsLegacyTouchPad((__int64)v11) )
          {
            *a6 = 1;
            PTPTelemetry::s_HasTpDevice = 1;
          }
        }
      }
      else
      {
        v14 = *((_QWORD *)v11 + 60);
        v15 = *(_DWORD *)(v14 + 24);
        if ( v15 == 7 )
        {
          v16 = *(_DWORD *)(v14 + 904);
          v10 = 1;
          PTPTelemetry::s_HasTpDevice = 1;
          if ( v16 == 1 )
          {
            *a5 = 1;
          }
          else if ( v16 == v13 )
          {
            *a5 = v13;
          }
          else if ( v16 == 3 )
          {
            *a5 = 3;
          }
          else if ( !v16 )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1561);
            v14 = *((_QWORD *)v11 + 60);
          }
          v17 = *(struct tagRECT *)(v14 + 140);
          *a7 = *(struct tagRECT *)(v14 + 124);
          *a8 = v17;
          RimTelemetry::GetHidVidPidStrings(v11, a1, a2);
          v12 = 0;
          v13 = 2;
        }
        else if ( (unsigned int)(v15 - 1) <= 3 )
        {
          *a4 = 1;
        }
      }
      v11 = (struct DEVICEINFO *)*((_QWORD *)v11 + 7);
    }
    while ( v11 );
    if ( v10 && *a6 != (_BYTE)v12 )
      *a6 = v12;
  }
  ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
}
