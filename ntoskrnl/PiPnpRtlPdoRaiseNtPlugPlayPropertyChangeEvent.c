/*
 * XREFs of PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14086CE8C
 * Callers:
 *     PnpDeviceActionWorker @ 0x140203020 (PnpDeviceActionWorker.c)
 *     PiQueryPowerRelations @ 0x14086CB24 (PiQueryPowerRelations.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140687320 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent(ULONG_PTR MaxDataSize, int a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  _WORD *v6; // rcx
  __int64 v7; // rcx
  unsigned __int16 *v8; // rdi
  _WORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx

  if ( !MaxDataSize )
    goto LABEL_18;
  result = *(_QWORD *)(MaxDataSize + 312);
  v4 = *(_QWORD *)(result + 40);
  if ( !v4 || (*(_DWORD *)(v4 + 396) & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)*(unsigned __int16 *)(MaxDataSize + 2));
    v5 = *(_QWORD *)(MaxDataSize + 8);
    if ( v5 )
    {
      IoAddTriageDumpDataBlock(v5, (PVOID)(unsigned int)*(__int16 *)(v5 + 2));
      v6 = (_WORD *)(*(_QWORD *)(MaxDataSize + 8) + 56LL);
      if ( *v6 )
      {
        IoAddTriageDumpDataBlock((ULONG)v6, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(MaxDataSize + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 8) + 56LL));
      }
    }
    v7 = *(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL);
    if ( v7 )
    {
      v8 = (unsigned __int16 *)(v7 + 40);
      IoAddTriageDumpDataBlock(v7, (PVOID)0x388);
      if ( *v8 )
      {
        IoAddTriageDumpDataBlock((ULONG)v8, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v8 + 1), (PVOID)*v8);
      }
      v9 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 56LL);
      if ( *v9 )
      {
        IoAddTriageDumpDataBlock((ULONG)v9, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 56LL));
      }
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 16LL);
      if ( v10 && *(_WORD *)(v10 + 56) )
      {
        IoAddTriageDumpDataBlock(v10 + 56, (PVOID)2);
        v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 16LL);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v11 + 64), (PVOID)*(unsigned __int16 *)(v11 + 56));
      }
    }
LABEL_18:
    KeBugCheckEx(0xCAu, 2uLL, MaxDataSize, 0LL, 0LL);
  }
  if ( v4 != -40 )
    return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v4, *(_QWORD *)(v4 + 48), a2);
  return result;
}
