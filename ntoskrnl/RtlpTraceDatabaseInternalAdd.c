/*
 * XREFs of RtlpTraceDatabaseInternalAdd @ 0x1405AF220
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x1405AEE00 (RtlTraceDatabaseAdd.c)
 * Callees:
 *     DbgPrint @ 0x1402BDD20 (DbgPrint.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlpTraceDatabaseAllocate @ 0x1405AF1F8 (RtlpTraceDatabaseAllocate.c)
 *     RtlpTraceDatabaseInternalFind @ 0x1405AF3E4 (RtlpTraceDatabaseInternalFind.c)
 */

char __fastcall RtlpTraceDatabaseInternalAdd(__int64 a1, unsigned int a2, const void *a3, _QWORD *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r14
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // edx
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF

  v18[0] = 0LL;
  v5 = a2;
  if ( a2 <= 0x100 )
  {
    if ( (unsigned __int8)RtlpTraceDatabaseInternalFind(a1, a2, a3, v18) )
    {
      v8 = v18[0];
      ++*(_DWORD *)(v18[0] + 4LL);
      if ( a4 )
        *a4 = v8;
      ++*(_QWORD *)(a1 + 144);
      return 1;
    }
    v10 = *(_QWORD *)(a1 + 16);
    v11 = 8 * v5 + 56;
    if ( v11 > *(_QWORD *)(v10 + 40) - *(_QWORD *)(v10 + 48) )
    {
      v12 = *(_QWORD *)(a1 + 24);
      if ( v12 && *(_QWORD *)(a1 + 32) > v12
        || (v13 = RtlpTraceDatabaseAllocate(4096LL, *(_DWORD *)(a1 + 4), *(unsigned int *)(a1 + 8)), (v10 = v13) == 0) )
      {
LABEL_11:
        if ( a4 )
          *a4 = 0LL;
        return 0;
      }
      *(_DWORD *)v13 = -1412580421;
      *(_QWORD *)(v13 + 8) = a1;
      *(_QWORD *)(v13 + 24) = 4096LL;
      *(_QWORD *)(v13 + 32) = v13;
      *(_QWORD *)(v13 + 40) = v13 + 4096;
      *(_QWORD *)(v13 + 48) = v13 + 56;
      *(_QWORD *)(v13 + 16) = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 32) += 4096LL;
      *(_QWORD *)(a1 + 16) = v13;
    }
    v14 = *(_QWORD *)(v10 + 48);
    if ( v11 <= *(_QWORD *)(v10 + 40) - v14 )
    {
      *(_QWORD *)(v10 + 48) = v14 + v11;
      *(_DWORD *)v14 = -1412584790;
      *(_DWORD *)(v14 + 8) = v5;
      *(_DWORD *)(v14 + 4) = 1;
      *(_QWORD *)(v14 + 48) = v14 + 56;
      *(_QWORD *)(v14 + 16) = 0LL;
      *(_QWORD *)(v14 + 24) = 0LL;
      memmove((void *)(v14 + 56), a3, 8 * v5);
      v15 = (*(__int64 (__fastcall **)(_QWORD, const void *))(a1 + 128))((unsigned int)v5, a3);
      v16 = *(_DWORD *)(a1 + 112);
      v17 = v15 % v16;
      ++*(_DWORD *)(a1 + 4LL * (v17 / (v16 >> 4)) + 152);
      *(_QWORD *)(v14 + 40) = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (v15 % v16));
      *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * v17) = v14;
      if ( a4 )
        *a4 = v14;
      ++*(_QWORD *)(a1 + 136);
      return 1;
    }
    DbgPrint("Trace database: failing attempt to save biiiiig trace (size %u) \n", v5);
    goto LABEL_11;
  }
  return 0;
}
