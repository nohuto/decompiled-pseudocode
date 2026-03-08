/*
 * XREFs of KiSendHeteroRescheduleIntRequest @ 0x140459B66
 * Callers:
 *     KiIdleSchedule @ 0x140228140 (KiIdleSchedule.c)
 *     KiSwapThread @ 0x14025F500 (KiSwapThread.c)
 *     KiUnparkCurrentProcessor @ 0x14057C38C (KiUnparkCurrentProcessor.c)
 * Callees:
 *     KeIsMultiCoreClassesEnabled @ 0x14038E410 (KeIsMultiCoreClassesEnabled.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140459C44 (KiSendHeteroRescheduleIntRequestHelper.c)
 */

__int64 __fastcall KiSendHeteroRescheduleIntRequest(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  int v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = a1[24];
  result = *(_QWORD *)(v2 + 24);
  if ( (result & a1[4364]) != 0 )
  {
    v8 = 0LL;
    v7 = -1;
    v5 = a1[25];
    KeIsMultiCoreClassesEnabled((__int64)a1, a2);
    v6 = *(_QWORD *)(*(_QWORD *)(v2 + 192) + 24LL * *(unsigned __int8 *)(v2 + 185) + 8);
    result = *(_QWORD *)(v2 + 8);
    if ( (v5 & result) != 0 && (v6 & v5) != 0 )
    {
      result = KiSendHeteroRescheduleIntRequestHelper(
                 ~*(_QWORD *)(v2 + 16) & (*(_QWORD *)(v2 + 80) | *(_QWORD *)(v2 + 96)) & (*(_QWORD *)(v2 + 128) ^ v6),
                 &v8,
                 &v7,
                 a1);
      if ( (_BYTE)result )
      {
        result = KiSendHeteroRescheduleIntRequestHelper(1LL << v7, 0LL, 0LL, a1);
        if ( !(_BYTE)result )
          return KiSendHeteroRescheduleIntRequestHelper(v8 ^ (1LL << v7), 0LL, 0LL, a1);
      }
    }
  }
  return result;
}
