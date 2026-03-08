/*
 * XREFs of EtwpSendTraceEvent @ 0x14039D2E8
 * Callers:
 *     EtwpTraceMessageVa @ 0x140205450 (EtwpTraceMessageVa.c)
 *     EtwpEventWriteFull @ 0x1402319C0 (EtwpEventWriteFull.c)
 *     EtwpLogKernelEvent @ 0x1403149F0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x14036F9F8 (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceEvent @ 0x14045FE22 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405FCF28 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x1406AA640 (EtwpWriteUserEvent.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140205E10 (ObGetCurrentIrql.c)
 *     EtwpGetNextEventOffsetType @ 0x14039D3D8 (EtwpGetNextEventOffsetType.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwpSendDbgId @ 0x1409E9094 (EtwpSendDbgId.c)
 *     KdSendTraceData @ 0x140AAE9F8 (KdSendTraceData.c)
 */

unsigned __int64 __fastcall EtwpSendTraceEvent(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int128 *v5; // r9
  __int64 v6; // r10
  __int128 v7; // xmm0
  _OWORD *v8; // [rsp+20h] [rbp-19h] BYREF
  int v9; // [rsp+28h] [rbp-11h]
  __int64 v10; // [rsp+30h] [rbp-9h]
  unsigned int v11; // [rsp+38h] [rbp-1h]
  _OWORD v12[5]; // [rsp+40h] [rbp+7h] BYREF
  unsigned int v13; // [rsp+A0h] [rbp+67h] BYREF

  memset(v12, 0, 0x48uLL);
  v13 = 0;
  if ( (*(_DWORD *)(a1 + 824) & 0x800) != 0 && ObGetCurrentIrql() < 2u )
    EtwpSendDbgId(a1);
  result = EtwpGetNextEventOffsetType(*(_QWORD *)a2, *(unsigned int *)(a2 + 16), &v13);
  if ( (_DWORD)result )
  {
    result = v13 + 72LL;
    if ( result <= (unsigned int)(KdTransportMaxPacketSize - 64) )
    {
      v7 = *v5;
      v9 = 72;
      v11 = v13;
      v12[0] = v7;
      v12[1] = v5[1];
      v12[2] = v5[2];
      v12[3] = v5[3];
      *(_QWORD *)&v7 = *((_QWORD *)v5 + 8);
      LODWORD(v12[0]) = v13 + 72;
      LODWORD(v12[3]) = v13 + 72;
      v8 = v12;
      v10 = (__int64)v5 + v6;
      *(_QWORD *)&v12[4] = v7;
      return KdSendTraceData(&v8, 2LL);
    }
  }
  return result;
}
