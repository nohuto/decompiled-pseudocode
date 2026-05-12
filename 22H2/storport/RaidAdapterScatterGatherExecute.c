/*
 * XREFs of RaidAdapterScatterGatherExecute @ 0x1C00036C4
 * Callers:
 *     RaidAdapterExecuteXrb @ 0x1C0003890 (RaidAdapterExecuteXrb.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x1C0033060 (RaidpAdapterContinueDataBufferScatterGather.c)
 * Callees:
 *     RaidDmaBuildScatterGatherList @ 0x1C00037AC (RaidDmaBuildScatterGatherList.c)
 *     RaidDmaGetScatterGatherList @ 0x1C0033FC4 (RaidDmaGetScatterGatherList.c)
 */

__int64 __fastcall RaidAdapterScatterGatherExecute(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdi
  int v5; // esi
  int v6; // r14d
  unsigned int v7; // ebx
  char v8; // cl
  char v9; // si
  int v10; // ecx
  bool v11; // zf
  __int64 v12; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 168);
  v4 = a2;
  if ( *(_BYTE *)(v2 + 2) == 40 )
  {
    v5 = *(_DWORD *)(v2 + 24);
    v7 = *(_DWORD *)(v2 + 60);
    v6 = *(_DWORD *)(v2 + 20);
  }
  else
  {
    v5 = *(_DWORD *)(v2 + 12);
    v6 = *(unsigned __int8 *)(v2 + 2);
    v7 = *(_DWORD *)(v2 + 16);
  }
  v8 = v5;
  v9 = (v5 & 0x80) != 0;
  v10 = v8 & 0x40;
  if ( (*(_DWORD *)(a1 + 548) & 8) == 0 && (*(_BYTE *)(a1 + 109) & 2) == 0 )
  {
    v11 = v10 == 0;
    v12 = *(_QWORD *)(a2 + 104);
    LOBYTE(a2) = !v11;
    KeFlushIoBuffers(v12, a2);
  }
  if ( v6 == 23 && *(_DWORD *)(*(_QWORD *)(v4 + 104) + 40LL) > v7 )
    v7 = *(_DWORD *)(*(_QWORD *)(v4 + 104) + 40LL);
  result = RaidDmaBuildScatterGatherList(
             (int)a1 + 728,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(v4 + 104),
             *(_QWORD *)(v4 + 184),
             v7,
             (__int64)RaidpAdapterContinueScatterGather,
             v4,
             v9,
             v4 + 232);
  if ( (_DWORD)result == -1073741789 )
    return RaidDmaGetScatterGatherList(
             (int)a1 + 728,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(v4 + 104),
             *(_QWORD *)(v4 + 184),
             v7,
             (__int64)RaidpAdapterContinueScatterGather,
             v4,
             v9);
  return result;
}
