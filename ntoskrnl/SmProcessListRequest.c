/*
 * XREFs of SmProcessListRequest @ 0x1409D3FBC
 * Callers:
 *     SmQueryStoreInformation @ 0x140840788 (SmQueryStoreInformation.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     SmpGetProcessPartition @ 0x14029622C (SmpGetProcessPartition.c)
 *     SSHSupportAllocateNonPaged @ 0x1402A4AEC (SSHSupportAllocateNonPaged.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PsReferencePartitionByHandle @ 0x14070591C (PsReferencePartitionByHandle.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     SmProcessListRequestExtended @ 0x1409D4208 (SmProcessListRequestExtended.c)
 *     SmKmGetStoreList @ 0x1409D5EB0 (SmKmGetStoreList.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessListRequest(_OWORD *a1, unsigned int a2, unsigned int *a3, KPROCESSOR_MODE a4)
{
  int v8; // ebx
  _OWORD *NonPaged; // rax
  _OWORD *v10; // rdi
  NTSTATUS StoreList; // ebx
  __int64 v12; // rcx
  void *v13; // rcx
  __int64 ProcessPartition; // rsi
  unsigned int Size; // [rsp+30h] [rbp-38h]
  PVOID v17[3]; // [rsp+38h] [rbp-30h] BYREF

  v17[0] = 0LL;
  v8 = 4240;
  NonPaged = (_OWORD *)SSHSupportAllocateNonPaged(4240LL, 0x524C6D73u);
  v10 = NonPaged;
  v17[1] = NonPaged;
  if ( !NonPaged )
  {
    StoreList = -1073740716;
    goto LABEL_28;
  }
  memset(NonPaged, 0, 0x1090uLL);
  if ( a2 < 0x90 )
    goto LABEL_4;
  if ( a4 )
  {
    if ( ((unsigned __int8)a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v12 = (__int64)a1;
    *(_BYTE *)v12 = *(_BYTE *)v12;
    *(_BYTE *)(v12 + 143) = *(_BYTE *)(v12 + 143);
  }
  *v10 = *a1;
  v10[1] = a1[1];
  v10[2] = a1[2];
  v10[3] = a1[3];
  v10[4] = a1[4];
  v10[5] = a1[5];
  v10[6] = a1[6];
  v10[7] = a1[7];
  v10[8] = a1[8];
  if ( (*(_DWORD *)v10 & 0x10000) != 0 )
  {
    if ( a4 )
      ProbeForWrite(a1, 0x1090uLL, 8u);
  }
  else
  {
    v8 = 144;
  }
  Size = v8;
  if ( a2 != v8 )
  {
LABEL_4:
    StoreList = -1073741306;
    goto LABEL_28;
  }
  if ( __PAIR16__(*((_BYTE *)v10 + 1), *(_DWORD *)v10) == 3 && *(_DWORD *)v10 < 0x20000u )
  {
    v13 = (void *)*((_QWORD *)v10 + 1);
    if ( v13 )
    {
      StoreList = PsReferencePartitionByHandle(v13, 1u, a4, 0x4C516D53u, v17);
      if ( StoreList < 0 )
        goto LABEL_28;
      ProcessPartition = *((_QWORD *)v17[0] + 3);
      if ( !ProcessPartition )
      {
        StoreList = -1073741399;
        goto LABEL_28;
      }
    }
    else
    {
      ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
    }
    StoreList = SmKmGetStoreList(ProcessPartition, v10);
    if ( StoreList >= 0 )
    {
      if ( (*(_DWORD *)v10 & 0x10000) == 0
        || (StoreList = SmProcessListRequestExtended(ProcessPartition, v10), StoreList >= 0) )
      {
        memmove(a1, v10, Size);
        *a3 = Size;
      }
    }
  }
  else
  {
    StoreList = -1073741811;
  }
LABEL_28:
  if ( v10 )
    CmSiFreeMemory((PPRIVILEGE_SET)v10);
  if ( v17[0] )
    PsDereferencePartition((__int64)v17[0]);
  return (unsigned int)StoreList;
}
