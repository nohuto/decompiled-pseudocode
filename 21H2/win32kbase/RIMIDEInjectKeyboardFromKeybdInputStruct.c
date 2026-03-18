/*
 * XREFs of RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C00037A4
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C0003160 (NtUserInjectKeyboardInput.c)
 * Callees:
 *     RIMIDEInjectKeyboardInput @ 0x1C00039D0 (RIMIDEInjectKeyboardInput.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C00043A4 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     WPP_RECORDER_AND_TRACE_SF_i @ 0x1C00E626A (WPP_RECORDER_AND_TRACE_SF_i.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEInjectKeyboardFromKeybdInputStruct(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // r14d
  __int64 *v10; // r8
  int v11; // edx
  _BYTE *v12; // r11
  int v13; // r9d
  unsigned __int16 v14; // r9
  __int64 v15; // r9
  char v16; // al
  unsigned int v17; // r9d
  __int16 v18; // ax
  __int16 v19; // ax
  __int16 v20; // dx
  __int16 v21; // dx
  __int16 v22; // ax
  __int16 v23; // ax
  unsigned __int64 v24; // rcx
  int v25; // edx
  int v26; // esi
  int v27; // r8d
  int v29; // eax
  bool v30; // zf
  _BYTE v31[192]; // [rsp+50h] [rbp-F8h] BYREF

  memset(v31, 0, sizeof(v31));
  if ( a3 > 0x10 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  InputTraceLogging::RIM::InjectInput(-(__int64)(a1 != 0) & (a1 + 88), 2LL, a3);
  v9 = 0;
  if ( a3 )
  {
    v10 = (__int64 *)(a2 + 16);
    v11 = 4;
    v12 = &v31[4];
    while ( 1 )
    {
      v13 = *((_DWORD *)v10 - 3);
      if ( (v13 & 4) != 0 && (*((_WORD *)v10 - 8) || (v13 & 0xFFFF7FC9) != 0) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v11) = 0;
        }
        if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            v11,
            (_DWORD)v10,
            (_DWORD)gRimLog,
            2,
            1,
            28,
            (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids,
            v13);
        }
        goto LABEL_53;
      }
      if ( (v13 & 8) == 0 )
      {
        v14 = *((_WORD *)v10 - 8);
        if ( v14 > 0xFEu )
          break;
      }
      if ( *((_DWORD *)v10 - 2)
        && *((_DWORD *)v10 - 2) > (unsigned int)((MEMORY[0xFFFFF78000000320]
                                                * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v11) = 0;
        }
        if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v29 = *((_DWORD *)v10 - 2);
          LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_dd(
            WPP_GLOBAL_Control->AttachedDevice,
            v11,
            (_DWORD)v10,
            (_DWORD)gRimLog,
            2,
            1,
            30,
            (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids,
            v29,
            (unsigned int)(MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004]) >> 24);
        }
        goto LABEL_53;
      }
      v15 = *v10;
      if ( *v10 && (*((_DWORD *)v10 - 3) & 0x8000) == 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v11) = 0;
        }
        if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_i(WPP_GLOBAL_Control->AttachedDevice, v11, (_DWORD)v10, v15, 2);
        }
        goto LABEL_53;
      }
      if ( *(_DWORD *)(a1 + 488) || (v16 = 0, dword_1C028F6FC != 3) )
        v16 = 1;
      v17 = *((_DWORD *)v10 - 3);
      if ( (v17 & 0x8000) == 0 || (v30 = v16 == 0, v18 = -3, v30) )
        v18 = -2;
      *((_WORD *)v12 - 2) = v18;
      v19 = 8 * (v17 & 0x10);
      if ( (v17 & 4) != 0 )
      {
        v20 = v19 | 0x20;
      }
      else
      {
        v20 = 8 * (v17 & 0x10);
        if ( *((_WORD *)v10 - 8) && (v17 & 8) == 0 )
          v20 = v19 | 0x40;
      }
      v21 = (2 * (v17 & 1)) | (v17 >> 1) & 1 | v20;
      if ( (v17 & 0x8000) != 0 )
      {
        if ( *(_WORD *)v10 == 256 )
        {
          v21 |= 0x100u;
        }
        else if ( *(_WORD *)v10 == 512 )
        {
          v21 |= 0x200u;
        }
      }
      *(_WORD *)v12 = v21;
      if ( (v21 & 0x40) != 0 )
        v22 = *((_WORD *)v10 - 8);
      else
        v22 = *((_WORD *)v10 - 7);
      *((_WORD *)v12 - 1) = v22;
      if ( (v17 & 0x20) != 0 )
        v23 = *((_WORD *)v10 + 1);
      else
        v23 = 0;
      *((_WORD *)v12 + 1) = v23;
      v11 = 4;
      LODWORD(v24) = *((_DWORD *)v10 - 2);
      if ( !(_DWORD)v24 )
        v24 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *((_DWORD *)v12 + 1) = v24;
      ++v9;
      v12 += 12;
      v10 += 3;
      if ( v9 >= a3 )
        goto LABEL_26;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        (_DWORD)v10,
        (_DWORD)gRimLog,
        2,
        1,
        29,
        (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids,
        v14);
    }
LABEL_53:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        (_DWORD)v10,
        (_DWORD)gRimLog,
        2,
        1,
        32,
        (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids);
    }
    return (unsigned int)-1073741811;
  }
  else
  {
LABEL_26:
    v26 = RIMIDEInjectKeyboardInput(a1, v31, a3);
    if ( v26 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v25) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v25) = 0;
      }
      if ( (_BYTE)v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v25,
          v27,
          (_DWORD)gRimLog,
          2,
          1,
          33,
          (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids,
          v26);
      }
    }
  }
  return (unsigned int)v26;
}
