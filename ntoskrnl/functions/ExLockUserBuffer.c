__int64 __fastcall ExLockUserBuffer(
        unsigned __int64 a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        LOCK_OPERATION a4,
        _QWORD *P,
        struct _MDL **a6)
{
  __int64 v8; // r13
  SIZE_T v10; // rax
  struct _MDL *Pool2; // rax
  struct _MDL *v12; // rbx
  PVOID MappedSystemVa; // rax

  v8 = a2;
  *P = 0LL;
  *a6 = 0LL;
  v10 = MmSizeOfMdl((PVOID)a1, a2);
  Pool2 = (struct _MDL *)ExAllocatePool2(65LL, v10, 1868983881LL);
  v12 = Pool2;
  if ( Pool2 )
  {
    Pool2->Next = 0LL;
    Pool2->Size = 8 * ((((a1 & 0xFFF) + v8 + 4095) >> 12) + 6);
    Pool2->MdlFlags = 0;
    Pool2->StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
    Pool2->ByteOffset = a1 & 0xFFF;
    Pool2->ByteCount = v8;
    MmProbeAndLockPages(Pool2, a3, a4);
    v12->MdlFlags |= 0x2000u;
    if ( (v12->MdlFlags & 5) != 0 )
      MappedSystemVa = v12->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(v12, 0, MmCached, 0LL, 0, 0x40000020u);
    *P = MappedSystemVa;
    if ( MappedSystemVa )
    {
      *a6 = v12;
      return 0LL;
    }
    ExUnlockUserBuffer(v12);
  }
  return 3221225626LL;
}
