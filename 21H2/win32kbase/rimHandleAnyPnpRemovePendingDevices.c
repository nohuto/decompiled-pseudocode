/*
 * XREFs of rimHandleAnyPnpRemovePendingDevices @ 0x1C0048DA8
 * Callers:
 *     RIMReadInput @ 0x1C0043300 (RIMReadInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     rimDoRimDevChange @ 0x1C00A1F28 (rimDoRimDevChange.c)
 *     RIMFreeDev @ 0x1C017C8C0 (RIMFreeDev.c)
 */

void __fastcall rimHandleAnyPnpRemovePendingDevices(__int64 a1)
{
  __int64 v2; // rsi
  BOOL v3; // ebp
  int v4; // r14d
  int v5; // edx
  int v6; // r8d
  __int64 i; // rbx
  int v8; // eax
  unsigned int v9; // edx

  v2 = a1 + 792;
  v3 = 0;
  while ( 2 )
  {
    v4 = 0;
    RIMLockExclusive(v2);
    for ( i = *(_QWORD *)(a1 + 424); i; i = *(_QWORD *)(i + 40) )
    {
      if ( (*(_DWORD *)(i + 184) & 0x40) == 0 )
      {
        v8 = *(_DWORD *)(i + 188);
        if ( (v8 & 4) != 0 )
        {
          *(_DWORD *)(i + 188) = v8 & 0xFFFFFFFB;
          LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_q(
              WPP_GLOBAL_Control->AttachedDevice,
              v5,
              v6,
              (_DWORD)gRimLog,
              4,
              1,
              35,
              (__int64)&WPP_3100a0ce65ca3ababb0b99fd70935186_Traceguids,
              i);
          }
        }
        v5 = *(_DWORD *)(i + 200);
        if ( ((v5 & 1) != 0 || (*(_DWORD *)(i + 200) & 2) != 0)
          && (*(_DWORD *)(i + 188) & 8) == 0
          && !*(_QWORD *)(i + 192) )
        {
          v4 = 1;
          v3 = (*(_DWORD *)(i + 200) & 2) != 0;
          v9 = v5 & 0xFFFFFFFC;
          *(_DWORD *)(i + 200) = v9;
          LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_q(
              WPP_GLOBAL_Control->AttachedDevice,
              v9,
              v6,
              (_DWORD)gRimLog,
              4,
              1,
              36,
              (__int64)&WPP_3100a0ce65ca3ababb0b99fd70935186_Traceguids,
              i);
          }
          break;
        }
      }
    }
    *(_QWORD *)(v2 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
    if ( v4 )
    {
      if ( v3 )
      {
        RIMLockExclusive(v2);
        *(_DWORD *)(a1 + 1108) |= 2u;
      }
      rimDoRimDevChange(a1, i, 3LL);
      RIMFreeDev(a1, i);
      if ( v3 )
      {
        *(_DWORD *)(a1 + 1108) &= ~2u;
        *(_QWORD *)(v2 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v2, 0LL);
        KeLeaveCriticalRegion();
      }
      continue;
    }
    break;
  }
}
