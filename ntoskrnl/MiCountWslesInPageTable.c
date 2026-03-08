/*
 * XREFs of MiCountWslesInPageTable @ 0x1402B4D30
 * Callers:
 *     MiAddWorkingSetEntries @ 0x14026D700 (MiAddWorkingSetEntries.c)
 *     MiSetVaAgeList @ 0x14031AB40 (MiSetVaAgeList.c)
 *     MiTerminateWsleCluster @ 0x1403234E0 (MiTerminateWsleCluster.c)
 *     MiDeleteVa @ 0x140324900 (MiDeleteVa.c)
 *     MiRebuildPageTableLeafAges @ 0x14032AD30 (MiRebuildPageTableLeafAges.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiCountWslesInPageTable(__int64 a1, unsigned __int64 a2, _OWORD *a3)
{
  unsigned __int64 v4; // rdx
  ULONG_PTR v5; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rcx
  unsigned __int8 v9; // r8
  int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // r8
  struct _LIST_ENTRY *Flink; // rax
  __int64 v14; // rax
  __int64 v15; // r10

  *a3 = 0LL;
  v4 = (((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL;
  a3[1] = 0LL;
  do
  {
    v5 = *(_QWORD *)v4;
    result = 0xFFFFF6FB7DBED000uLL;
    if ( v4 >= 0xFFFFF6FB7DBED000uLL )
    {
      result = 0xFFFFF6FB7DBED7F8uLL;
      if ( v4 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x600000) != 0 )
      {
        result = (unsigned __int64)KeGetCurrentThread();
        if ( *(_BYTE *)(*(_QWORD *)(result + 184) + 912LL) != 1 )
        {
          if ( (v5 & 1) == 0 )
            goto LABEL_4;
          if ( (v5 & 0x20) == 0 || (v5 & 0x42) == 0 )
          {
            result = (unsigned __int64)KeGetCurrentThread();
            v11 = *(_QWORD *)(*(_QWORD *)(result + 184) + 1928LL);
            if ( v11 )
            {
              result = *(_QWORD *)(v11 + 8 * ((v4 >> 3) & 0x1FF));
              v12 = v5 | 0x20;
              if ( (result & 0x20) == 0 )
                v12 = *(_QWORD *)v4;
              v5 = v12;
              if ( (result & 0x42) != 0 )
                v5 = v12 | 0x42;
            }
          }
        }
      }
    }
    if ( (v5 & 1) != 0 )
    {
      v7 = (((unsigned __int64)((__int64)(v4 << 25) >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v8 = *(_QWORD *)v7;
      if ( v7 >= 0xFFFFF6FB7DBED000uLL
        && v7 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v8 & 1) != 0
        && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v14 = *((_QWORD *)&Flink->Flink + ((v7 >> 3) & 0x1FF));
          v15 = v8 | 0x20;
          if ( (v14 & 0x20) == 0 )
            v15 = v8;
          v8 = v15;
          if ( (v14 & 0x42) != 0 )
            v8 = v15 | 0x42;
        }
      }
      v9 = HIBYTE(v8) & 0xF | (16 * ((v8 >> 60) & 7));
      v10 = HIBYTE(v8) & 0xF;
      result = (unsigned int)(v10 - 8);
      if ( (unsigned __int8)(v10 - 8) > 2u )
      {
        if ( (unsigned __int8)v10 >= 8u )
          KeBugCheckEx(0x1Au, 0x41280uLL, (__int64)(v4 << 25) >> 16, v5, v9);
        result = (unsigned __int8)v10;
        ++*((_DWORD *)a3 + (unsigned __int8)v10);
      }
    }
LABEL_4:
    v4 += 8LL;
  }
  while ( (v4 & 0xFFF) != 0 );
  return result;
}
