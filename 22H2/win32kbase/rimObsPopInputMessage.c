/*
 * XREFs of rimObsPopInputMessage @ 0x1C017E928
 * Callers:
 *     rimObsObserveNextInput @ 0x1C017E7BC (rimObsObserveNextInput.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C00487D0 (WPP_RECORDER_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013732C (WPP_RECORDER_SF_Dd.c)
 *     rimObsCalculateObserverMessageSize @ 0x1C017DCD0 (rimObsCalculateObserverMessageSize.c)
 *     rimObsCopyMessage @ 0x1C017DF88 (rimObsCopyMessage.c)
 */

__int64 __fastcall rimObsPopInputMessage(__int64 a1, int a2, void **a3, unsigned int a4)
{
  int v6; // r13d
  __int64 v8; // rsi
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rax
  _QWORD *v14; // rcx
  __int64 v16; // [rsp+28h] [rbp-48h]
  __int64 v17; // [rsp+40h] [rbp-30h] BYREF
  int v18; // [rsp+48h] [rbp-28h]
  int v19; // [rsp+4Ch] [rbp-24h]
  __int128 v20; // [rsp+50h] [rbp-20h]
  __int128 v21; // [rsp+60h] [rbp-10h]

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      23,
      15,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
      a1);
  }
  v8 = a1 + 144;
  if ( *(_DWORD *)(v8 + 16) == -1 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 295);
  v9 = *(_DWORD *)(v8 + 20);
  if ( v9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v16) = *(_DWORD *)(v8 + 20);
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        a2,
        23,
        18,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
        v16);
      v9 = *(_DWORD *)(v8 + 20);
    }
    v17 = 1LL;
    v18 = 2;
    v19 = v9;
    v20 = 0LL;
    v21 = 0LL;
    v10 = rimObsCopyMessage((int *)&v17, v6, a3, a4);
    *(_DWORD *)(v8 + 20) = 0;
  }
  else if ( *(_DWORD *)(v8 + 16) )
  {
    v11 = *(_QWORD *)v8;
    if ( *(_QWORD *)v8 == v8 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 306);
      v11 = *(_QWORD *)v8;
    }
    v12 = rimObsCopyMessage((int *)(v11 + 16), v6, a3, a4);
    v10 = v12;
    if ( v12 == -1073741789 )
    {
      v17 = 1LL;
      v18 = 0;
      v20 = 0LL;
      v21 = 0LL;
      v19 = rimObsCalculateObserverMessageSize((_DWORD *)(v11 + 16));
      v10 = rimObsCopyMessage((int *)&v17, v6, a3, a4);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v10;
      LODWORD(v16) = a4;
      WPP_RECORDER_SF_Dd(
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        4u,
        0x17u,
        0x10u,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
        v16,
        v19);
    }
    else if ( v12 >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          a2,
          23,
          17,
          (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
      }
      v13 = *(_QWORD *)v11;
      if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 || (v14 = *(_QWORD **)(v11 + 8), *v14 != v11) )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      Win32FreePool(v11);
      --*(_DWORD *)(v8 + 16);
    }
  }
  else
  {
    v10 = -2147483622;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v16) = v10;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      23,
      19,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
      v16);
  }
  return v10;
}
