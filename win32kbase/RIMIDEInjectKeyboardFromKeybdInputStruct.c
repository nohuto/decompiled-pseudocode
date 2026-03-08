/*
 * XREFs of RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C0003708
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C00031D0 (NtUserInjectKeyboardInput.c)
 * Callees:
 *     RIMIDEInjectKeyboardInput @ 0x1C0003934 (RIMIDEInjectKeyboardInput.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C0004188 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00052A0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C000F0BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMIsRunningOnDesktop @ 0x1C007B004 (RIMIsRunningOnDesktop.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     WPP_RECORDER_AND_TRACE_SF_i @ 0x1C00EF71A (WPP_RECORDER_AND_TRACE_SF_i.c)
 */

__int64 __fastcall RIMIDEInjectKeyboardFromKeybdInputStruct(__int64 a1, __int64 a2, unsigned int a3)
{
  __int16 *v6; // r8
  unsigned int v7; // r15d
  _BYTE *v8; // rbx
  int *v9; // rsi
  int v10; // edx
  int v11; // r9d
  unsigned __int64 v12; // rcx
  unsigned __int16 v13; // r9
  __int64 v14; // r9
  bool v15; // zf
  char v16; // al
  unsigned int v17; // r9d
  int v18; // r10d
  __int16 v19; // ax
  __int16 v20; // ax
  __int16 v21; // dx
  __int16 v22; // dx
  __int16 v23; // ax
  __int16 v24; // ax
  unsigned __int64 v25; // rcx
  int v26; // edx
  int v27; // esi
  int v28; // r8d
  __int16 v30; // ax
  _BYTE v31[192]; // [rsp+60h] [rbp-108h] BYREF

  memset(v31, 0, sizeof(v31));
  if ( a3 > 0x10 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1462LL);
  InputTraceLogging::RIM::InjectInput(-(__int64)(a1 != 0) & (a1 + 72), 2LL, a3);
  v7 = 0;
  if ( a3 )
  {
    v8 = &v31[4];
    v9 = (int *)(a2 + 4);
    v10 = 4;
    while ( 1 )
    {
      v11 = *v9;
      v12 = 0xFFFFF78000000320uLL;
      if ( (*v9 & 4) != 0 && (*((_WORD *)v9 - 2) || (v11 & 0xFFFF7FC9) != 0) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v10) = 0;
        }
        if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            v10,
            (_DWORD)v6,
            (_DWORD)gRimLog,
            2,
            1,
            28,
            (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
            v11);
        }
        goto LABEL_53;
      }
      if ( (v11 & 8) == 0 )
      {
        v13 = *((_WORD *)v9 - 2);
        if ( v13 > 0xFEu )
          break;
      }
      if ( v9[1] )
      {
        v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( v9[1] > (unsigned int)v12 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(v10) = 0;
          }
          if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_dd(
              WPP_GLOBAL_Control->AttachedDevice,
              v10,
              (_DWORD)v6,
              (_DWORD)gRimLog,
              2,
              1,
              30,
              (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
              v9[1],
              (unsigned int)(MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004]) >> 24);
          }
          goto LABEL_53;
        }
      }
      v14 = *(_QWORD *)(v9 + 3);
      if ( v14 && (*v9 & 0x8000) == 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v10) = 0;
        }
        if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_i(WPP_GLOBAL_Control->AttachedDevice, v10, (_DWORD)v6, v14, 2);
        }
        goto LABEL_53;
      }
      if ( *(_DWORD *)(a1 + 472)
        || (v15 = (unsigned int)RIMIsRunningOnDesktop(v12, 0xFFFFF78000000004uLL) == 0, v16 = 0, v15) )
      {
        v16 = 1;
      }
      v17 = *v9;
      v18 = *v9 & 0x8000;
      if ( !v18 || (v15 = v16 == 0, v19 = -3, v15) )
        v19 = -2;
      *((_WORD *)v8 - 2) = v19;
      v20 = 8 * (v17 & 0x10);
      if ( (v17 & 4) != 0 )
      {
        v6 = (__int16 *)(v9 - 1);
        v21 = v20 | 0x20;
      }
      else
      {
        v21 = 8 * (v17 & 0x10);
        v6 = (__int16 *)(v9 - 1);
        if ( *((_WORD *)v9 - 2) && (v17 & 8) == 0 )
          v21 = v20 | 0x40;
      }
      v22 = (2 * (v17 & 1)) | (v17 >> 1) & 1 | v21;
      if ( v18 )
      {
        v30 = *((_WORD *)v9 + 6);
        if ( v30 == 256 )
        {
          v22 |= 0x100u;
        }
        else if ( v30 == 512 )
        {
          v22 |= 0x200u;
        }
      }
      *(_WORD *)v8 = v22;
      if ( (v22 & 0x40) != 0 )
        v23 = *v6;
      else
        v23 = *((_WORD *)v9 - 1);
      *((_WORD *)v8 - 1) = v23;
      if ( (v17 & 0x20) != 0 )
        v24 = *((_WORD *)v9 + 7);
      else
        v24 = 0;
      *((_WORD *)v8 + 1) = v24;
      v10 = 4;
      LODWORD(v25) = v9[1];
      if ( !(_DWORD)v25 )
        v25 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *((_DWORD *)v8 + 1) = v25;
      ++v7;
      v8 += 12;
      v9 += 6;
      if ( v7 >= a3 )
        goto LABEL_26;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        (_DWORD)v6,
        (_DWORD)gRimLog,
        2,
        1,
        29,
        (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
        v13);
    }
LABEL_53:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        (_DWORD)v6,
        (_DWORD)gRimLog,
        2,
        1,
        32,
        (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids);
    }
    return (unsigned int)-1073741811;
  }
  else
  {
LABEL_26:
    v27 = RIMIDEInjectKeyboardInput(a1, v31, a3);
    if ( v27 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v26) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v26) = 0;
      }
      if ( (_BYTE)v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v28) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v26,
          v28,
          (_DWORD)gRimLog,
          2,
          1,
          33,
          (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
          v27);
      }
    }
  }
  return (unsigned int)v27;
}
