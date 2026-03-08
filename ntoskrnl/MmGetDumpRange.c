/*
 * XREFs of MmGetDumpRange @ 0x14062DF70
 * Callers:
 *     IoWriteCrashDump @ 0x14054EF00 (IoWriteCrashDump.c)
 *     IopAddKernelSpacePagesToPartialDump @ 0x14055A3F4 (IopAddKernelSpacePagesToPartialDump.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     MiRemovePendingBadPagesFromDump @ 0x1406285EC (MiRemovePendingBadPagesFromDump.c)
 *     MiAddNonSecuredPagesToDump @ 0x14062CF18 (MiAddNonSecuredPagesToDump.c)
 *     MiAddPhysicalPagesToCrashDump @ 0x14062D30C (MiAddPhysicalPagesToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x14062DD30 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x14062E2CC (MmRemoveSystemCacheFromDump.c)
 *     MiRemoveEnclavePagesFromDump @ 0x140646304 (MiRemoveEnclavePagesFromDump.c)
 */

void __fastcall MmGetDumpRange(__int64 a1, int a2, char a3)
{
  __int64 *v5; // rdi
  __int64 v6; // rsi
  signed __int64 v7; // rax
  _QWORD *v8; // rcx
  unsigned int i; // edi
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // esi
  unsigned int v13; // r9d
  unsigned int v14; // edx
  int v15; // r10d
  char *v16; // r11
  unsigned int v17; // edi
  unsigned int v18; // edx
  char *v19; // rdx
  __int64 j; // r8
  unsigned __int64 v21; // rax
  unsigned int SizeOfBitMap; // edx
  __int64 v23; // rdi
  __int64 k; // rdi

  if ( a2 )
  {
    v8 = MmPhysicalMemoryBlock;
    for ( i = 0; i < *(_DWORD *)MmPhysicalMemoryBlock; ++i )
    {
      v10 = v8[2 * i + 3];
      v11 = v8[2 * i + 2];
      if ( (MiFlags & 0x4000) != 0 )
        MiAddNonSecuredPagesToDump((__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))a1, v11, v10);
      else
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64))a1)(a1, v11, v10, 2LL);
      v8 = MmPhysicalMemoryBlock;
    }
  }
  else
  {
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v5 = KiProcessorBlock;
      v6 = (unsigned int)KeNumberProcessors_0;
      do
      {
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))a1)(
          a1,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v5++ + 8) + 184LL) + 40LL) >> 12,
          1LL,
          2LL);
        --v6;
      }
      while ( v6 );
    }
    MmAddRangeToCrashDump(a1, 0xFFFF800000000000uLL, 0x800000000000LL);
    if ( (a3 & 1) != 0 && (KiBugCheckActive & 3) != 0 )
      MmAddRangeToCrashDump(a1, 0LL, 0x7FFFFFFF0000LL);
    v7 = __readcr3();
    (*(void (__fastcall **)(__int64, signed __int64, __int64, __int64))a1)(a1, v7 / 4096, 1LL, 2LL);
    if ( (a3 & 2) != 0 )
    {
      MiAddPhysicalPagesToCrashDump((void (__fastcall **)(_QWORD, __int64, __int64, __int64))a1);
      MmRemoveSystemCacheFromDump(a1);
    }
  }
  v12 = 0;
  while ( 2 )
  {
    v13 = v12 < qword_140C67028->SizeOfBitMap ? v12 : 0;
    v14 = qword_140C67028->SizeOfBitMap - 1;
    v15 = ((__int64)qword_140C67028->Buffer & 4) != 0LL ? 0x20 : 0;
    v16 = (char *)qword_140C67028->Buffer - (((__int64)qword_140C67028->Buffer & 4) != 0 ? 4 : 0);
    while ( 1 )
    {
      v17 = v15 + v14;
      if ( v14 - v13 == -1 )
        goto LABEL_18;
      v19 = &v16[8 * ((unsigned __int64)(v15 + v13) >> 6)];
      for ( j = ~*(_QWORD *)v19 | ((1LL << ((v15 + v13) & 0x3F)) - 1); j == -1; j = ~*(_QWORD *)v19 )
      {
        v19 += 8;
        if ( v19 > &v16[8 * ((unsigned __int64)v17 >> 6)] )
          goto LABEL_18;
      }
      _BitScanForward64(&v21, ~j);
      v18 = v21 + ((unsigned int)((v19 - v16) >> 3) << 6);
      if ( v18 > v17 )
      {
LABEL_18:
        v18 = -1;
        goto LABEL_25;
      }
      if ( v18 != -1 )
        break;
LABEL_25:
      if ( !v13 )
        goto LABEL_30;
      SizeOfBitMap = v12 + 1;
      if ( v12 + 1 > qword_140C67028->SizeOfBitMap )
        SizeOfBitMap = qword_140C67028->SizeOfBitMap;
      v14 = SizeOfBitMap - 1;
      v13 = 0;
    }
    v18 -= v15;
LABEL_30:
    if ( v18 >= v12 && v18 != -1 )
    {
      v12 = v18 + 1;
      v23 = *(_QWORD *)(qword_140C67048 + 8LL * v18);
      if ( (*(_DWORD *)(v23 + 4) & 2) != 0 )
      {
        for ( k = *(_QWORD *)(v23 + 6736); k != 0x3FFFFFFFFFLL; k = *(_QWORD *)(48 * k - 0x220000000000LL) & 0xFFFFFFFFFFLL )
          (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(a1 + 8))(a1, k, 1LL, 2LL);
      }
      continue;
    }
    break;
  }
  MiRemovePendingBadPagesFromDump(a1);
  if ( qword_140C69508 )
    MiRemoveEnclavePagesFromDump(a1);
}
