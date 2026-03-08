/*
 * XREFs of rimOnPnpRemoveCompleteInUserCrit @ 0x1C01C89B8
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C00872A8 (RIMDoOnPnpNotification.c)
 *     rimDoRimDevChangeAsyncWorkItem @ 0x1C00BC0DC (rimDoRimDevChangeAsyncWorkItem.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     rimEndAllActiveContactsWorker @ 0x1C01BC12C (rimEndAllActiveContactsWorker.c)
 */

__int64 __fastcall rimOnPnpRemoveCompleteInUserCrit(struct RawInputManagerObject *a1, __int64 a2)
{
  char *v2; // rbp
  unsigned int v5; // edi
  int v6; // edx
  int v7; // r8d
  int v8; // eax
  int v9; // eax

  v2 = (char *)a1 + 760;
  v5 = 1;
  RIMLockExclusive((__int64)a1 + 760);
  if ( (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
    rimEndAllActiveContactsWorker(a1, *(_QWORD *)(a2 + 472), 0LL);
  v8 = *(_DWORD *)(a2 + 184);
  if ( (v8 & 0x2000) == 0 && (v8 & 0x20) == 0 && *(_BYTE *)(a2 + 48) != 3 )
  {
    v9 = *(_DWORD *)(a2 + 188);
    if ( (v9 & 8) != 0 || *(_QWORD *)(a2 + 192) || (v9 & 0x10) != 0 )
    {
      *(_DWORD *)(a2 + 200) |= 1u;
      LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v6,
          v7,
          (_DWORD)gRimLog,
          4,
          1,
          40,
          (__int64)&WPP_89c3e44078983ba1070baf237427a4e9_Traceguids,
          a2);
      }
      v5 = 0;
    }
  }
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return v5;
}
