/*
 * XREFs of HalpAcpiGetAllTablesWork @ 0x14037A8C8
 * Callers:
 *     HalpAcpiGetAllTables @ 0x14037A3B8 (HalpAcpiGetAllTables.c)
 * Callees:
 *     HalpAcpiCheckAndMapTable @ 0x14029AD4C (HalpAcpiCheckAndMapTable.c)
 *     MmUnmapIoSpace @ 0x14029B230 (MmUnmapIoSpace.c)
 *     HalpAcpiGetTableWork @ 0x14029C5D0 (HalpAcpiGetTableWork.c)
 *     HalpAcpiCopyBiosTable @ 0x14037AA9C (HalpAcpiCopyBiosTable.c)
 *     HalpAcpiAllocateMemory @ 0x14037AB24 (HalpAcpiAllocateMemory.c)
 *     HalpAcpiCacheTable @ 0x14037ABF4 (HalpAcpiCacheTable.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall HalpAcpiGetAllTablesWork(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int *TableWork; // rax
  unsigned int *v4; // rbp
  __int64 v5; // rax
  unsigned int *v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned int *v9; // r14
  __int64 v10; // r12
  __int64 *v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rax
  void *v14; // r13
  __int64 v15; // rbx
  __int64 v16; // rax
  int v17; // esi
  int v18; // ecx
  _DWORD *Memory; // rax
  _DWORD *v20; // rbx
  __int64 i; // rcx
  int v22; // eax
  __int64 v23; // rax
  unsigned int *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  unsigned int NumberOfBytes; // [rsp+70h] [rbp+8h] BYREF
  int NumberOfBytes_4; // [rsp+74h] [rbp+Ch]

  NumberOfBytes_4 = HIDWORD(a1);
  v1 = 0;
  NumberOfBytes = 0;
  if ( !HalpAcpiTablePointers )
  {
    TableWork = (unsigned int *)HalpAcpiGetTableWork(0LL, 0x54445358u, 0LL, 0LL);
    v4 = TableWork;
    if ( TableWork )
    {
      v5 = TableWork[1];
      v6 = 0LL;
      v7 = (unsigned int)v5;
      if ( (unsigned int)v5 >= 0x24 )
        v7 = 36LL;
      v8 = (unsigned __int64)(v5 - v7) >> 3;
    }
    else
    {
      v24 = (unsigned int *)HalpAcpiGetTableWork(0LL, 0x54445352u, 0LL, 0LL);
      v6 = v24;
      if ( !v24 )
        return HalpAcpiTablePointers;
      v25 = v24[1];
      v26 = (unsigned int)v25;
      if ( (unsigned int)v25 >= 0x24 )
        v26 = 36LL;
      v8 = (unsigned __int64)(v25 - v26) >> 2;
    }
    if ( (_DWORD)v8 )
    {
      v9 = v6 + 9;
      v10 = (unsigned int)v8;
      v11 = (__int64 *)(v4 + 9);
      do
      {
        if ( v4 )
          v12 = *v11;
        else
          v12 = *v9;
        v13 = HalpAcpiCheckAndMapTable(0LL, v12, 0x24u, 0, 0LL, 0LL, 1, &NumberOfBytes);
        v14 = (void *)v13;
        if ( v13 )
        {
          v15 = HalpAcpiCopyBiosTable(0LL, v13, v12);
          MmUnmapIoSpace(v14, NumberOfBytes);
          if ( v15 )
            HalpAcpiCacheTable(0LL, v15);
        }
        ++v9;
        ++v11;
        --v10;
      }
      while ( v10 );
    }
    v16 = HalpAcpiTableCacheList;
    v17 = 0;
    while ( (__int64 *)v16 != &HalpAcpiTableCacheList )
    {
      v18 = *(_DWORD *)(v16 + 24);
      if ( v18 != 1413763928 && v18 != 1413763922 && v18 != 1396916550 && v18 != 1413763908 )
        ++v17;
      v16 = *(_QWORD *)v16;
    }
    Memory = (_DWORD *)HalpAcpiAllocateMemory(0LL, (unsigned int)(8 * v17 + 8));
    v20 = Memory;
    if ( Memory )
    {
      memset(Memory, 0, (unsigned int)(8 * v17 + 8));
      *v20 = v17;
      for ( i = HalpAcpiTableCacheList; (__int64 *)i != &HalpAcpiTableCacheList; i = *(_QWORD *)i )
      {
        v22 = *(_DWORD *)(i + 24);
        if ( v22 != 1413763928 && v22 != 1413763922 && v22 != 1396916550 && v22 != 1413763908 )
        {
          v23 = v1++;
          *(_QWORD *)&v20[2 * v23 + 2] = i + 24;
        }
      }
      HalpAcpiTablePointers = (__int64)v20;
    }
  }
  return HalpAcpiTablePointers;
}
