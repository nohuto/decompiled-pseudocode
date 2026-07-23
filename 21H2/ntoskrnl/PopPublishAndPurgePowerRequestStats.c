/*
 * XREFs of PopPublishAndPurgePowerRequestStats @ 0x1408F657C
 * Callers:
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F67F0 (PopStatsNotifyPowerRequestCsState.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1402709CC (_tlgCreate1Sz_wchar_t.c)
 *     PoQueryStopWatch @ 0x1402724D0 (PoQueryStopWatch.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlRandomEx @ 0x1402970C0 (RtlRandomEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x1405732B4 (PopDiagTraceSleepStudyBlocker.c)
 *     PoResetStopWatch @ 0x14057FD84 (PoResetStopWatch.c)
 *     PopGetStopWatchByRequestType @ 0x140670B10 (PopGetStopWatchByRequestType.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x140670FF8 (PopAvlDeleteStatsForPowerRequest.c)
 */

__int64 __fastcall PopPublishAndPurgePowerRequestStats(volatile signed __int32 *Buffer, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // edi
  _QWORD *StopWatchByRequestType; // rax
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  const size_t *v10; // rdx
  __int64 result; // rax
  bool v12; // [rsp+30h] [rbp-D0h] BYREF
  char v13; // [rsp+31h] [rbp-CFh] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  BOOL v16; // [rsp+44h] [rbp-BCh] BYREF
  ULONG Seed; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v20; // [rsp+60h] [rbp-A0h]
  __int128 v21; // [rsp+70h] [rbp-90h] BYREF
  __int128 v22; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+90h] [rbp-70h] BYREF
  __int128 *v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  int *v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  __int64 v28; // [rsp+C0h] [rbp-40h]
  int v29; // [rsp+C8h] [rbp-38h]
  int v30; // [rsp+CCh] [rbp-34h]
  __int128 *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  unsigned __int64 *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  __int64 *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+100h] [rbp+0h] BYREF
  const char *v38; // [rsp+120h] [rbp+20h]
  int v39; // [rsp+128h] [rbp+28h]
  int v40; // [rsp+12Ch] [rbp+2Ch]
  _BYTE v41[16]; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int64 *v42; // [rsp+140h] [rbp+40h]
  __int64 v43; // [rsp+148h] [rbp+48h]
  BOOL *v44; // [rsp+150h] [rbp+50h]
  __int64 v45; // [rsp+158h] [rbp+58h]
  __int64 *v46; // [rsp+160h] [rbp+60h]
  __int64 v47; // [rsp+168h] [rbp+68h]
  __int64 v48; // [rsp+1A8h] [rbp+A8h] BYREF

  v48 = a2;
  v14 = 0LL;
  v3 = *((_QWORD *)Buffer + 2);
  v4 = -1LL;
  v21 = 0LL;
  do
    ++v4;
  while ( *(_WORD *)(v3 + 2 * v4) );
  v13 = a2;
  v23.Ptr = (ULONGLONG)&v13;
  v15 = v4;
  v28 = v3;
  v26 = &v15;
  *(_QWORD *)&v23.Size = 1LL;
  v27 = 4LL;
  v29 = 2 * v4;
  v30 = 0;
  *((_QWORD *)&v20 + 1) = 0LL;
  v5 = 0;
  *(_QWORD *)&v20 = RtlRandomEx(&Seed);
  v22 = v20;
  v31 = &v22;
  v32 = 16LL;
  do
  {
    StopWatchByRequestType = (_QWORD *)PopGetStopWatchByRequestType((__int64)Buffer, v5);
    v7 = (__int64)StopWatchByRequestType;
    if ( StopWatchByRequestType )
    {
      v12 = 0;
      v14 = 0LL;
      PoQueryStopWatch(StopWatchByRequestType, (__int64 *)&v14, &v12);
      PoResetStopWatch(v7);
      if ( (unsigned int)dword_140C02228 > 5 )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( aSleepstudyBloc[v9] );
        v10 = (const size_t *)*((_QWORD *)Buffer + 2);
        v38 = "SleepStudy Blocker Event";
        v39 = v9 + 1;
        v40 = 0;
        tlgCreate1Sz_wchar_t((__int64)v41, v10);
        v43 = 8LL;
        v45 = 4LL;
        v47 = 8LL;
        v42 = &v18;
        v16 = v12;
        v44 = &v16;
        v19 = v48;
        v46 = &v19;
        v18 = v14 / 0xA / 0xF4240;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02228,
          (unsigned __int8 *)&dword_140029DCC,
          0LL,
          0LL,
          7u,
          &v37);
      }
      if ( v14 )
      {
        v25 = 16LL;
        v24 = &v21;
        v34 = 8LL;
        v33 = &v14;
        v21 = 0LL;
        LODWORD(v21) = -1428313379;
        v35 = &v48;
        BYTE4(v21) = 6;
        v36 = 8LL;
        PopDiagTraceSleepStudyBlocker(v8, &v23);
      }
    }
    ++v5;
  }
  while ( v5 < 4 );
  result = (unsigned int)_InterlockedExchangeAdd(Buffer, 0);
  if ( (int)result <= 0 )
    return PopAvlDeleteStatsForPowerRequest((char *)Buffer);
  return result;
}
