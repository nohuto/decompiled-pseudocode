/*
 * XREFs of PopIdleWakeSourceAccountingToDiagnostic @ 0x1408F4740
 * Callers:
 *     PopIdleWakeNotifyModernStandbyExit @ 0x14057BC50 (PopIdleWakeNotifyModernStandbyExit.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     PpmConvertTimeTo @ 0x1405771D8 (PpmConvertTimeTo.c)
 *     PopIdleWakeConvertIntervalBucketsTo @ 0x1408F42A4 (PopIdleWakeConvertIntervalBucketsTo.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x1408F4300 (PopIdleWakeGenerateDescriptionString.c)
 */

signed int __fastcall PopIdleWakeSourceAccountingToDiagnostic(__int64 a1, _DWORD *a2)
{
  unsigned __int16 v4; // cx
  __int64 v5; // rax
  __int64 v6; // rdx
  signed int result; // eax

  memset(a2, 0, 0x2A0uLL);
  *a2 = *(_DWORD *)a1;
  a2[1] = *(_DWORD *)(a1 + 316);
  a2[2] = *(_DWORD *)(a1 + 312);
  *((_QWORD *)a2 + 2) = PpmConvertTimeTo(*(_QWORD *)(a1 + 320), 0xF4240uLL);
  *((_QWORD *)a2 + 3) = PpmConvertTimeTo(*(_QWORD *)(a1 + 328), 0xF4240uLL);
  *((_QWORD *)a2 + 4) = PpmConvertTimeTo(*(_QWORD *)(a1 + 336), 0xF4240uLL);
  v4 = 0;
  *(_OWORD *)(a2 + 10) = *(_OWORD *)(a1 + 344);
  *(_OWORD *)(a2 + 14) = *(_OWORD *)(a1 + 360);
  a2[18] = *(_DWORD *)(a1 + 376);
  *(_OWORD *)(a2 + 19) = *(_OWORD *)(a1 + 380);
  *(_OWORD *)(a2 + 23) = *(_OWORD *)(a1 + 396);
  *(_QWORD *)(a2 + 27) = *(_QWORD *)(a1 + 412);
  a2[29] = *(_DWORD *)(a1 + 420);
  do
  {
    v5 = *((unsigned __int16 *)a2 + 232);
    *((_WORD *)a2 + 5 * v5 + 233) = v4;
    if ( v4 >= *(_WORD *)(a1 + 144) )
      v6 = 0LL;
    else
      v6 = *(_QWORD *)(a1 + 8LL * v4 + 152);
    *(_QWORD *)((char *)a2 + 10 * v5 + 468) = v6;
    if ( v6 )
      ++*((_WORD *)a2 + 232);
    ++v4;
  }
  while ( v4 < 0x14u );
  *((_QWORD *)a2 + 15) = PpmConvertTimeTo(*(_QWORD *)(a1 + 432), 0xF4240uLL);
  *((_OWORD *)a2 + 8) = *(_OWORD *)(a1 + 440);
  a2[36] = *(_DWORD *)(a1 + 456);
  PopIdleWakeConvertIntervalBucketsTo(5u, a1 + 464, (ULONGLONG *)a2 + 19, 0xF4240uLL);
  *((_QWORD *)a2 + 24) = PpmConvertTimeTo(*(_QWORD *)(a1 + 504), 0xF4240uLL);
  *(_OWORD *)(a2 + 50) = *(_OWORD *)(a1 + 512);
  a2[54] = *(_DWORD *)(a1 + 528);
  PopIdleWakeConvertIntervalBucketsTo(5u, a1 + 536, (ULONGLONG *)a2 + 28, 0xF4240uLL);
  *((_QWORD *)a2 + 33) = PpmConvertTimeTo(*(_QWORD *)(a1 + 576), 0xF4240uLL);
  *((_OWORD *)a2 + 17) = *(_OWORD *)(a1 + 584);
  a2[72] = *(_DWORD *)(a1 + 600);
  PopIdleWakeConvertIntervalBucketsTo(5u, a1 + 608, (ULONGLONG *)a2 + 37, 0xF4240uLL);
  *((_QWORD *)a2 + 42) = PpmConvertTimeTo(*(_QWORD *)(a1 + 648), 0xF4240uLL);
  *((_QWORD *)a2 + 43) = *(_QWORD *)(a1 + 656);
  a2[88] = *(_DWORD *)(a1 + 664);
  PopIdleWakeConvertIntervalBucketsTo(3u, a1 + 672, (ULONGLONG *)a2 + 45, 0xF4240uLL);
  result = PopIdleWakeGenerateDescriptionString((int *)a1, (__int64)a2);
  if ( result >= 0 )
    return 0;
  return result;
}
