/*
 * XREFs of PopDirectedDripsDiagNotifySessionStop @ 0x14099B298
 * Callers:
 *     PopDirectedDripsSendSessionData @ 0x140980CA8 (PopDirectedDripsSendSessionData.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopDirectedDripsDiagQueryAndResetPnpAccounting @ 0x14059E120 (PopDirectedDripsDiagQueryAndResetPnpAccounting.c)
 *     PopDirectedDripsDiagRundownBroadcastTrees @ 0x14099B4A4 (PopDirectedDripsDiagRundownBroadcastTrees.c)
 *     PopDirectedDripsDiagRundownDevices @ 0x14099B8B8 (PopDirectedDripsDiagRundownDevices.c)
 */

ULONG __fastcall PopDirectedDripsDiagNotifySessionStop(__int64 a1, int a2, int a3)
{
  int v5; // r14d
  ULONG result; // eax
  ULONG v7; // ett
  __int64 v8; // rbx
  int v9; // [rsp+38h] [rbp-D0h] BYREF
  int v10; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v11; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v17; // [rsp+88h] [rbp-80h]
  int v18; // [rsp+90h] [rbp-78h]
  int v19; // [rsp+94h] [rbp-74h]
  int *v20; // [rsp+98h] [rbp-70h]
  int v21; // [rsp+A0h] [rbp-68h]
  int v22; // [rsp+A4h] [rbp-64h]
  int *v23; // [rsp+A8h] [rbp-60h]
  int v24; // [rsp+B0h] [rbp-58h]
  int v25; // [rsp+B4h] [rbp-54h]
  __int64 *v26; // [rsp+B8h] [rbp-50h]
  int v27; // [rsp+C0h] [rbp-48h]
  int v28; // [rsp+C4h] [rbp-44h]
  __int64 *v29; // [rsp+C8h] [rbp-40h]
  int v30; // [rsp+D0h] [rbp-38h]
  int v31; // [rsp+D4h] [rbp-34h]
  __int128 *v32; // [rsp+D8h] [rbp-30h]
  int v33; // [rsp+E0h] [rbp-28h]
  int v34; // [rsp+E4h] [rbp-24h]
  _OWORD *v35; // [rsp+E8h] [rbp-20h]
  int v36; // [rsp+F0h] [rbp-18h]
  int v37; // [rsp+F4h] [rbp-14h]
  __int64 *v38; // [rsp+F8h] [rbp-10h]
  int v39; // [rsp+100h] [rbp-8h]
  int v40; // [rsp+104h] [rbp-4h]
  __int128 v41[7]; // [rsp+108h] [rbp+0h] BYREF
  _OWORD v42[14]; // [rsp+178h] [rbp+70h] BYREF

  v12 = 0LL;
  v5 = a1;
  _m_prefetchw(&PopDirectedDripsState);
  result = PopDirectedDripsState.HandleAttributes;
  do
  {
    v7 = result;
    result = _InterlockedCompareExchange((volatile signed __int32 *)&PopDirectedDripsState, result, result);
  }
  while ( v7 != result );
  if ( (result & 1) != 0 )
  {
    PopDirectedDripsDiagQueryAndResetPnpAccounting(a1, &v12, v41, v42);
    v8 = PopWnfCsEnterScenarioId;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopDirectedDripsDiagLock, 0LL);
    if ( PopDirectedDripsDiagTraceHandleRegistered
      && (unsigned int)dword_140D53980 > 5
      && tlgKeywordOn((__int64)&dword_140D53980, 0x400000000000LL) )
    {
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v37 = 0;
      v40 = 0;
      v17 = &v13;
      v20 = &v9;
      v23 = &v10;
      v26 = &v11;
      v14 = v12;
      v29 = &v14;
      v32 = v41;
      v35 = v42;
      v38 = &v15;
      v18 = 8;
      v21 = 4;
      v24 = 4;
      v27 = 4;
      v30 = 8;
      v39 = 8;
      v13 = v8;
      v9 = v5;
      v10 = a2;
      LODWORD(v11) = a3;
      v33 = 112;
      v36 = 224;
      v15 = 0x1000000LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140D53980,
        (unsigned __int8 *)&byte_140031C17,
        0LL,
        0LL,
        0xAu,
        &v16);
    }
    PopDirectedDripsDiagRundownBroadcastTrees();
    PopDirectedDripsDiagRundownDevices();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
    return KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
  }
  return result;
}
