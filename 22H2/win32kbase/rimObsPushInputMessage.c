/*
 * XREFs of rimObsPushInputMessage @ 0x1C017EBD0
 * Callers:
 *     rimObsDeliverInputToObserver @ 0x1C017E118 (rimObsDeliverInputToObserver.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C00298B0 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C00487D0 (WPP_RECORDER_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimObsCopyMessage @ 0x1C017DF88 (rimObsCopyMessage.c)
 */

__int64 __fastcall rimObsPushInputMessage(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rsi
  __int64 v4; // rbp
  int v5; // eax
  unsigned int v6; // esi
  _QWORD *v7; // rdi
  int v8; // eax
  unsigned int v9; // r14d
  void *v10; // rax
  _QWORD *v11; // rax
  int v12; // eax
  __int64 v14; // [rsp+28h] [rbp-30h]

  v2 = a2;
  if ( *a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 214);
  v4 = a1 + 144;
  if ( *(_DWORD *)(a1 + 160) == -1 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 219);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      23,
      10,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
      a1);
  }
  if ( *(_DWORD *)(a1 + 160) >= *(_DWORD *)(a1 + 168) )
  {
    v5 = *(_DWORD *)(a1 + 164);
    if ( v5 != -1 )
      *(_DWORD *)(a1 + 164) = ++v5;
    v6 = -1073741756;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v14) = v5;
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)a2,
        23,
        11,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
        v14);
    }
    return v6;
  }
  v7 = 0LL;
  if ( *((_QWORD *)v2 + 3) > 0xFFFFFFBFuLL )
  {
    v6 = -1073741675;
    goto LABEL_24;
  }
  v8 = v2[6];
  v9 = v8 + 48;
  v10 = Win32AllocPoolZInit((unsigned int)(v8 + 64), 1902989138LL);
  v7 = v10;
  if ( !v10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)a2,
        23,
        12,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
    }
    v6 = -1073741670;
    goto LABEL_24;
  }
  v6 = rimObsCopyMessage(v2, 0, (void **)v10 + 2, v9);
  if ( (v6 & 0x80000000) != 0 )
  {
LABEL_24:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)a2,
        23,
        14,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
    }
    if ( v7 )
      Win32FreePool((__int64)v7);
    return v6;
  }
  v11 = *(_QWORD **)(a1 + 152);
  if ( *v11 != v4 )
    __fastfail(3u);
  v7[1] = v11;
  *v7 = v4;
  *v11 = v7;
  *(_QWORD *)(a1 + 152) = v7;
  v12 = *(_DWORD *)(a1 + 160) + 1;
  *(_DWORD *)(a1 + 160) = v12;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v14) = v12;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      23,
      13,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
      v14);
  }
  return v6;
}
