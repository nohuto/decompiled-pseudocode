/*
 * XREFs of PopHiberInitializeResources @ 0x140777B00
 * Callers:
 *     PopAllocateHiberContext @ 0x140777E04 (PopAllocateHiberContext.c)
 * Callees:
 *     RtlGetCompressionWorkSpaceSize @ 0x140290A50 (RtlGetCompressionWorkSpaceSize.c)
 *     PoSetHiberRange @ 0x1403881B0 (PoSetHiberRange.c)
 *     IoGetDumpStackTransferSizes @ 0x140388454 (IoGetDumpStackTransferSizes.c)
 *     memset @ 0x140414300 (memset.c)
 *     MmMarkHiberRange @ 0x140777DBC (MmMarkHiberRange.c)
 *     PopCalculateHiberFileSize @ 0x14078D9C8 (PopCalculateHiberFileSize.c)
 *     MmAllocateDumpHibernateResources @ 0x14078ED5C (MmAllocateDumpHibernateResources.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char *__fastcall PopHiberInitializeResources(_QWORD *MemoryMap)
{
  unsigned int v1; // esi
  size_t v3; // r14
  unsigned __int64 v4; // r15
  ULONG v5; // ecx
  unsigned __int64 v6; // rdi
  unsigned int v7; // eax
  unsigned int v8; // r12d
  unsigned __int64 v9; // rdi
  SIZE_T v10; // r13
  _QWORD *PoolWithTag; // rdi
  __int64 DumpHibernateResources; // r12
  char *v13; // rcx
  unsigned int v14; // edx
  unsigned __int64 v15; // r9
  _QWORD *v16; // r8
  unsigned __int64 v17; // r10
  char *v18; // rax
  int v19; // r14d
  int v20; // r12d
  int v21; // r15d
  char *result; // rax
  unsigned int v23; // [rsp+30h] [rbp-38h]
  unsigned __int64 v24; // [rsp+38h] [rbp-30h] BYREF
  char *v25; // [rsp+40h] [rbp-28h]
  unsigned __int64 v26; // [rsp+48h] [rbp-20h]
  unsigned __int64 v27; // [rsp+50h] [rbp-18h]
  unsigned __int64 v28; // [rsp+58h] [rbp-10h]
  ULONG CompressBufferWorkSpaceSize; // [rsp+B0h] [rbp+48h] BYREF
  ULONG CompressFragmentWorkSpaceSize; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v31; // [rsp+C0h] [rbp+58h] BYREF
  int v32; // [rsp+C8h] [rbp+60h] BYREF

  v1 = KeNumberProcessors_0;
  CompressBufferWorkSpaceSize = 0;
  v3 = 0LL;
  CompressFragmentWorkSpaceSize = 0;
  v24 = 0LL;
  v31 = 0;
  v32 = 0;
  v25 = 0LL;
  if ( (PopSimulate & 0x10000000) != 0 )
    goto LABEL_23;
  v4 = (unsigned __int64)(unsigned int)KeNumberProcessors_0 << 7;
  if ( RtlGetCompressionWorkSpaceSize(0x104u, &CompressBufferWorkSpaceSize, &CompressFragmentWorkSpaceSize) < 0 )
    goto LABEL_23;
  v5 = CompressBufferWorkSpaceSize;
  v26 = (v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( CompressFragmentWorkSpaceSize > CompressBufferWorkSpaceSize )
    v5 = CompressFragmentWorkSpaceSize;
  CompressBufferWorkSpaceSize = v5;
  v6 = v5 * v1 + ((v4 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  IoGetDumpStackTransferSizes(&v32, &v31);
  v7 = v31 >> 12;
  if ( v31 >> 12 < 0x10 )
    v7 = 16;
  if ( v7 > 0x100 )
    v7 = 256;
  v23 = v7;
  v8 = v7 << 12;
  if ( PopHiberChecksummingEnabledReg )
  {
    v9 = (v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v25 = (char *)v9;
    PopCalculateHiberFileSize(&v24, 0LL);
    v3 = 2 * (v24 >> 9);
    v6 = v3 + v9;
  }
  v27 = (v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  LODWORD(v24) = -v8 & (65668 * v1 - 1 + 17 * v8);
  v28 = (unsigned int)v24 + v27;
  v10 = (v1 << 17) + v28;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72626968u);
  if ( !PoolWithTag )
    goto LABEL_23;
  DumpHibernateResources = MmAllocateDumpHibernateResources(v1 << 16);
  if ( !DumpHibernateResources )
  {
    ExFreePoolWithTag(PoolWithTag, 0x72626968u);
LABEL_23:
    PoolWithTag = qword_140C23F08;
    v1 = 1;
    v20 = 1;
    v19 = 1;
    memset(qword_140C23F08, 0, 0x80uLL);
    v21 = 12288;
    PoolWithTag[1] = qword_140C23E88;
    v25 = (char *)Address;
    goto LABEL_21;
  }
  if ( PopHiberChecksummingEnabledReg )
  {
    v13 = &v25[(_QWORD)PoolWithTag];
    MemoryMap[55] = v3;
    MemoryMap[54] = v13;
    memset(v13, 0, v3);
  }
  v25 = (char *)PoolWithTag + v27;
  memset(PoolWithTag, 0, (unsigned __int64)v1 << 7);
  v14 = 0;
  if ( v1 )
  {
    v15 = v26;
    v16 = PoolWithTag + 1;
    v17 = v28;
    do
    {
      v18 = (char *)&PoolWithTag[0x4000 * v14] + v17;
      *(v16 - 1) = v18;
      v16[2] = v18 + 0x10000;
      *v16 = DumpHibernateResources + (v14 << 16);
      if ( CompressBufferWorkSpaceSize )
        v16[1] = (char *)PoolWithTag + v15 + v14 * CompressBufferWorkSpaceSize;
      ++v14;
      v16 += 16;
    }
    while ( v14 < v1 );
  }
  MmMarkHiberRange(MemoryMap, DumpHibernateResources, (unsigned __int64)(16 * v1) << 12);
  PoSetHiberRange(MemoryMap, 0x8000u, (char *)PoolWithTag + v26, v10 - v26, 0x72626968u);
  MemoryMap[36] = PoolWithTag;
  MemoryMap[37] = v10;
  MemoryMap[38] = DumpHibernateResources;
  v19 = v23;
  v20 = 16;
  v21 = v24;
LABEL_21:
  PoSetHiberRange(MemoryMap, 0x8000u, Address, 0x3000uLL, 0x72626968u);
  result = v25;
  MemoryMap[34] = v25;
  *((_DWORD *)MemoryMap + 64) = v1;
  MemoryMap[33] = PoolWithTag;
  *((_DWORD *)MemoryMap + 70) = v21;
  *((_DWORD *)MemoryMap + 71) = v20;
  *((_DWORD *)MemoryMap + 102) = v19;
  return result;
}
