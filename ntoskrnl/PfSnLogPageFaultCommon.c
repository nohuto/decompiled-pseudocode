/*
 * XREFs of PfSnLogPageFaultCommon @ 0x140306D88
 * Callers:
 *     PfSnLogFileDataAccess @ 0x14028D408 (PfSnLogFileDataAccess.c)
 *     PfSnLogPageFault @ 0x14028D4BC (PfSnLogPageFault.c)
 * Callees:
 *     PfSnGetFileInformation @ 0x140307D00 (PfSnGetFileInformation.c)
 *     PfSnCheckLogSequenceNumber @ 0x140308120 (PfSnCheckLogSequenceNumber.c)
 *     PfSnTraceGetLogEntry @ 0x14030841C (PfSnTraceGetLogEntry.c)
 */

__int64 __fastcall PfSnLogPageFaultCommon(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, char a5)
{
  unsigned __int64 v8; // rsi
  unsigned int v9; // edi
  __int64 result; // rax
  unsigned __int64 *v11; // rdx
  __int64 *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  PfSnGetFileInformation(a1, a2);
  if ( (*(_BYTE *)(a1 + 484) & 1) == 0 && *(_BYTE *)(*(_QWORD *)(a1 + 352) + 1850LL) == 2 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 1u);
  if ( a4 >= 0x20000000000LL )
    return 3221227780LL;
  v8 = a4 >> 9;
  if ( (a5 & 1) != 0 )
    v9 = 1;
  else
    v9 = (a5 & 2) != 0 ? 3 : 0;
  PfSnCheckLogSequenceNumber(a1);
  if ( v9 || (v12 = *(__int64 **)(a1 + 408), (unsigned __int64)*v12 >> 3 != v8) || v12[1] != a3 )
  {
    result = PfSnTraceGetLogEntry(a1, 1LL, &v12);
    if ( (int)result < 0 )
      return result;
    v11 = (unsigned __int64 *)v12;
    *v12 = (8 * v8) | *(_DWORD *)v12 & 7;
    v11[1] = a3;
    *v11 = v9 | *v11 & 0xFFFFFFFFFFFFFFF8uLL;
    _InterlockedAdd((volatile signed __int32 *)(a1 + 332), 1u);
    if ( !v9 )
      *(_QWORD *)(a1 + 408) = v12;
  }
  return 0LL;
}
