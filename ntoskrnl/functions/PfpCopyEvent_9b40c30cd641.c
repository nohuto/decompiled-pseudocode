__int64 __fastcall PfpCopyEvent(__int64 *Src)
{
  unsigned __int64 v1; // rax
  int v2; // edx
  __int64 v4; // rdx
  unsigned __int8 v5; // r8
  __int64 v6; // r9
  bool v7; // sf
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  __int64 v14; // rdi
  __int64 v15; // rax
  PEPROCESS v16; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  unsigned __int64 v18; // r8
  __int128 v19; // [rsp+30h] [rbp-18h] BYREF
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF
  PEPROCESS Process; // [rsp+58h] [rbp+10h] BYREF

  v1 = *Src;
  v2 = *Src;
  Process = 0LL;
  LODWORD(v20) = 0;
  if ( (v2 & 0x1F000) != 0xA000LL )
  {
    v14 = (v1 >> 2) & 0x3FF;
    v15 = PfTAcquireLogEntry(&unk_140C64DD8, &v20, v14);
    if ( !v15 )
      return 3221225626LL;
    memmove((void *)(((v15 + 31) & 0xFFFFFFFFFFFFFFF8uLL) + 16LL * (unsigned int)v20), Src, (unsigned int)(16 * v14));
    return 0LL;
  }
  v4 = Src[4];
  v5 = -1;
  v6 = 2LL;
  v19 = 0LL;
  if ( (v4 & 0x7FFFFFFFFFFFFFFFuLL) < 0xFF )
    v5 = v4;
  v7 = v4 < 0;
  v8 = *((unsigned int *)Src + 12);
  if ( !v7 )
    v6 = 4098LL;
  DWORD2(v19) = v5 | ((_DWORD)v8 << 8);
  v9 = Src[5];
  v10 = Src[3] << 12;
  LODWORD(v10) = v10 | 1;
  *(_QWORD *)&v19 = v6 & 0xFFFFFFFF00FFFFFFuLL | v8 & 0xFFFFFFFFFF000000uLL;
  v20 = v10;
  v11 = PfpLogPageAccess(v9, (unsigned int)&v20, (unsigned int)&v19, (int)Src + 24, 1);
  if ( !v11 )
    return 3221225864LL;
  v12 = ((qword_140C64E18 + 47) & 0xFFFFFFFFFFFFFFF8uLL)
      + 40LL * (*(unsigned __int16 *)(v11 + 10) - (unsigned int)*(unsigned __int16 *)(qword_140C64E18 + 36));
  if ( (*(_BYTE *)(v12 + 8) & 4) == 0 || PsLookupProcessByProcessId((HANDLE)*((unsigned int *)Src + 13), &Process) < 0 )
    return 0LL;
  v16 = Process;
  Flink = Process[1].ThreadListHead.Flink;
  if ( (((unsigned __int64)Flink ^ (unsigned __int64)Process[1].Header.WaitListHead.Flink) & 0x1FFFFFFFFFFFFFFFLL) == Src[5]
    && Process[1].Header.WaitListHead.Flink )
  {
    if ( Flink )
    {
      v18 = *(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF8uLL | 1;
      *(_QWORD *)(v12 + 8) = v18;
      *(_QWORD *)(v12 + 8) = v18 & 7 | (8
                                      * ((__int64)v16[1].ThreadListHead.Flink ^ (__int64)v16[1].Header.WaitListHead.Flink));
      *(_DWORD *)(v12 + 20) = HIDWORD(v16[1].ActiveProcessors.StaticBitmap[8]);
      *(_DWORD *)(v12 + 16) = v16[1].Header.WaitListHead.Flink;
    }
  }
  ObfDereferenceObjectWithTag(v16, 0x746C6644u);
  return 0LL;
}
