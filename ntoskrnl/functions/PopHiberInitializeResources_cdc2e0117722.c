char *__fastcall PopHiberInitializeResources(_QWORD *MemoryMap)
{
  unsigned int v1; // r14d
  size_t v3; // r15
  unsigned __int64 v4; // r13
  ULONG v5; // ecx
  unsigned __int64 v6; // rdi
  unsigned int v7; // esi
  unsigned __int64 v8; // rdi
  __int64 Pool2; // rdi
  ULONG_PTR DumpHibernateResources; // r12
  int v11; // r15d
  int v12; // r12d
  char *result; // rax
  char *v14; // rcx
  unsigned int v15; // edx
  unsigned __int64 v16; // r9
  _QWORD *v17; // r8
  unsigned __int64 v18; // r10
  char *v19; // rax
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // [rsp+30h] [rbp-38h] BYREF
  char *v22; // [rsp+38h] [rbp-30h]
  unsigned __int64 v23; // [rsp+40h] [rbp-28h]
  unsigned __int64 v24; // [rsp+48h] [rbp-20h]
  unsigned __int64 v25; // [rsp+50h] [rbp-18h]
  unsigned __int64 v26; // [rsp+58h] [rbp-10h]
  ULONG CompressBufferWorkSpaceSize; // [rsp+B0h] [rbp+48h] BYREF
  ULONG CompressFragmentWorkSpaceSize; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v29; // [rsp+C0h] [rbp+58h] BYREF
  int v30; // [rsp+C8h] [rbp+60h] BYREF

  v1 = KeNumberProcessors_0;
  CompressBufferWorkSpaceSize = 0;
  v3 = 0LL;
  CompressFragmentWorkSpaceSize = 0;
  v21 = 0LL;
  v29 = 0;
  v30 = 0;
  v22 = 0LL;
  if ( (PopSimulate & 0x10000000) != 0 )
    goto LABEL_14;
  v4 = (unsigned __int64)(unsigned int)KeNumberProcessors_0 << 7;
  if ( RtlGetCompressionWorkSpaceSize(0x104u, &CompressBufferWorkSpaceSize, &CompressFragmentWorkSpaceSize) < 0 )
    goto LABEL_14;
  v5 = CompressBufferWorkSpaceSize;
  v23 = (v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( CompressFragmentWorkSpaceSize > CompressBufferWorkSpaceSize )
    v5 = CompressFragmentWorkSpaceSize;
  CompressBufferWorkSpaceSize = v5;
  v6 = v5 * v1 + ((v4 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  IoGetDumpStackTransferSizes(&v30, &v29);
  v7 = v29 >> 12;
  if ( v29 >> 12 >= 0x10 )
  {
    if ( v7 > 0x100 )
      v7 = 256;
  }
  else
  {
    v7 = 16;
  }
  if ( PopHiberChecksummingEnabledReg )
  {
    v8 = (v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v22 = (char *)v8;
    PopCalculateHiberFileSize(&v21, 0LL);
    v3 = 2 * (v21 >> 9);
    v6 = v3 + v8;
  }
  v24 = (v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  LODWORD(v21) = (-4096 * v7) & (65668 * v1 - 1 + 69632 * v7);
  v25 = (unsigned int)v21 + v24;
  v26 = (v1 << 17) + v25;
  Pool2 = ExAllocatePool2(64LL, v26, 1919052136LL);
  if ( !Pool2 )
    goto LABEL_14;
  DumpHibernateResources = MmAllocateDumpHibernateResources(v1 << 16);
  if ( !DumpHibernateResources )
  {
    ExFreePoolWithTag((PVOID)Pool2, 0x72626968u);
LABEL_14:
    Pool2 = (__int64)qword_140C3CB08;
    v7 = 1;
    v1 = 1;
    v11 = 1;
    memset(qword_140C3CB08, 0, 0x80uLL);
    v12 = 12288;
    *(_QWORD *)(Pool2 + 8) = qword_140C3CA88;
    v22 = (char *)Address;
    goto LABEL_15;
  }
  if ( PopHiberChecksummingEnabledReg )
  {
    v14 = &v22[Pool2];
    MemoryMap[55] = v3;
    MemoryMap[54] = v14;
    memset(v14, 0, v3);
  }
  v22 = (char *)(Pool2 + v24);
  memset((void *)Pool2, 0, (unsigned __int64)v1 << 7);
  v15 = 0;
  if ( v1 )
  {
    v16 = v23;
    v17 = (_QWORD *)(Pool2 + 8);
    v18 = v25;
    do
    {
      v19 = (char *)(Pool2 + v18 + (v15 << 17));
      *(v17 - 1) = v19;
      v17[2] = v19 + 0x10000;
      *v17 = DumpHibernateResources + (v15 << 16);
      if ( CompressBufferWorkSpaceSize )
        v17[1] = Pool2 + v16 + v15 * CompressBufferWorkSpaceSize;
      ++v15;
      v17 += 16;
    }
    while ( v15 < v1 );
  }
  MmMarkHiberRange(MemoryMap, DumpHibernateResources, (unsigned __int64)(16 * v1) << 12);
  v20 = v26;
  PoSetHiberRange(MemoryMap, 0x8000u, (PVOID)(v23 + Pool2), v26 - v23, 0x72626968u);
  MemoryMap[36] = Pool2;
  MemoryMap[37] = v20;
  MemoryMap[38] = DumpHibernateResources;
  v12 = v21;
  v11 = 16;
LABEL_15:
  PoSetHiberRange(MemoryMap, 0x8000u, Address, 0x3000uLL, 0x72626968u);
  result = v22;
  MemoryMap[34] = v22;
  *((_DWORD *)MemoryMap + 64) = v1;
  MemoryMap[33] = Pool2;
  *((_DWORD *)MemoryMap + 70) = v12;
  *((_DWORD *)MemoryMap + 71) = v11;
  *((_DWORD *)MemoryMap + 102) = v7;
  return result;
}
