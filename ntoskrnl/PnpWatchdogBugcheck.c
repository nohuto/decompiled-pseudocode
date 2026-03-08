/*
 * XREFs of PnpWatchdogBugcheck @ 0x14055E314
 * Callers:
 *     PnpWatchdogSecondChanceCallback @ 0x14055EAB0 (PnpWatchdogSecondChanceCallback.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PnpInitializeTriageBlock @ 0x14055E240 (PnpInitializeTriageBlock.c)
 *     PnpWatchdogExtractTriageInformation @ 0x14055E99C (PnpWatchdogExtractTriageInformation.c)
 */

void __fastcall __noreturn PnpWatchdogBugcheck(__int64 a1)
{
  unsigned __int128 v2; // rax
  __int64 v3; // rsi
  ULONG_PTR v4; // rbx
  _WORD *v5; // rdi
  __int64 v6; // rax
  ULONG_PTR v7; // rdx
  __int64 v8; // rcx
  _WORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  ULONG_PTR v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  const void *v22; // rdx
  size_t v23; // r8
  ULONG_PTR BugCheckParameter2[16]; // [rsp+30h] [rbp-29h] BYREF
  ULONG_PTR MaxDataSize; // [rsp+C0h] [rbp+67h] BYREF
  unsigned __int16 *v26; // [rsp+C8h] [rbp+6Fh] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+D0h] [rbp+77h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+D8h] [rbp+7Fh] BYREF

  memset(BugCheckParameter2, 0, 0x50uLL);
  v2 = (unsigned __int64)(MEMORY[0xFFFFF78000000008] - *(_QWORD *)a1) * (unsigned __int128)0x346DC5D63886594BuLL;
  MaxDataSize = 0LL;
  BugCheckParameter1 = 0LL;
  v3 = *((_QWORD *)&v2 + 1) >> 11;
  v26 = 0LL;
  BugCheckParameter3 = 0LL;
  PnpInitializeTriageBlock(BugCheckParameter2);
  LODWORD(BugCheckParameter2[1]) = *(_DWORD *)(a1 + 16);
  PnpWatchdogExtractTriageInformation(
    a1,
    (unsigned int)&MaxDataSize,
    (unsigned int)&BugCheckParameter3,
    (unsigned int)&v26,
    (__int64)&BugCheckParameter2[8],
    (__int64)&BugCheckParameter2[9]);
  v4 = MaxDataSize;
  if ( MaxDataSize )
  {
    v5 = (_WORD *)(MaxDataSize + 40);
    IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0x388);
    if ( *v5 )
    {
      IoAddTriageDumpDataBlock(v4 + 40, (PVOID)2);
      IoAddTriageDumpDataBlock(*(_QWORD *)(v4 + 48), (PVOID)(unsigned __int16)*v5);
    }
    if ( *(_WORD *)(v4 + 56) )
    {
      IoAddTriageDumpDataBlock(v4 + 56, (PVOID)2);
      IoAddTriageDumpDataBlock(*(_QWORD *)(v4 + 64), (PVOID)*(unsigned __int16 *)(v4 + 56));
    }
    v6 = *(_QWORD *)(v4 + 16);
    if ( v6 && *(_WORD *)(v6 + 56) )
    {
      IoAddTriageDumpDataBlock(v6 + 56, (PVOID)2);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(v4 + 16) + 64LL),
        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v4 + 16) + 56LL));
    }
  }
  BugCheckParameter2[7] = v4;
  if ( BugCheckParameter2[8] )
  {
    IoAddTriageDumpDataBlock(BugCheckParameter2[8], (PVOID)*(unsigned __int16 *)(BugCheckParameter2[8] + 2));
    v7 = BugCheckParameter2[8];
    v8 = *(_QWORD *)(BugCheckParameter2[8] + 8);
    if ( v8 )
    {
      IoAddTriageDumpDataBlock(v8, (PVOID)(unsigned int)*(__int16 *)(v8 + 2));
      v7 = BugCheckParameter2[8];
      v9 = (_WORD *)(*(_QWORD *)(BugCheckParameter2[8] + 8) + 56LL);
      if ( *v9 )
      {
        IoAddTriageDumpDataBlock((ULONG)v9, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(BugCheckParameter2[8] + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2[8] + 8) + 56LL));
        v7 = BugCheckParameter2[8];
      }
    }
    if ( v7 )
    {
      v10 = *(_QWORD *)(v7 + 312);
      if ( *(_QWORD *)(v10 + 40) )
      {
        v11 = *(_QWORD *)(v10 + 40);
        IoAddTriageDumpDataBlock(v11, (PVOID)0x388);
        if ( *(_WORD *)(v11 + 40) )
        {
          IoAddTriageDumpDataBlock(v11 + 40, (PVOID)2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v11 + 48), (PVOID)*(unsigned __int16 *)(v11 + 40));
        }
        v12 = BugCheckParameter2[8];
        if ( BugCheckParameter2[8] )
          v13 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2[8] + 312) + 40LL);
        else
          v13 = 0LL;
        if ( *(_WORD *)(v13 + 56) )
        {
          if ( BugCheckParameter2[8] )
            v14 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2[8] + 312) + 40LL);
          else
            LODWORD(v14) = 0;
          IoAddTriageDumpDataBlock(v14 + 56, (PVOID)2);
          if ( BugCheckParameter2[8] )
            v15 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2[8] + 312) + 40LL);
          else
            v15 = 0LL;
          if ( BugCheckParameter2[8] )
            v16 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2[8] + 312) + 40LL);
          else
            v16 = 0LL;
          IoAddTriageDumpDataBlock(*(_QWORD *)(v16 + 64), (PVOID)*(unsigned __int16 *)(v15 + 56));
          v12 = BugCheckParameter2[8];
        }
        if ( v12 )
          v17 = *(_QWORD *)(*(_QWORD *)(v12 + 312) + 40LL);
        else
          v17 = 0LL;
        if ( *(_QWORD *)(v17 + 16) )
        {
          v18 = v12 ? *(_QWORD *)(*(_QWORD *)(v12 + 312) + 40LL) : 0LL;
          if ( *(_WORD *)(*(_QWORD *)(v18 + 16) + 56LL) )
          {
            if ( v12 )
              v19 = *(_QWORD *)(*(_QWORD *)(v12 + 312) + 40LL);
            else
              v19 = 0LL;
            IoAddTriageDumpDataBlock(*(_QWORD *)(v19 + 16) + 56, (PVOID)2);
            if ( BugCheckParameter2[8] )
              v20 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2[8] + 312) + 40LL);
            else
              v20 = 0LL;
            if ( BugCheckParameter2[8] )
              v21 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2[8] + 312) + 40LL);
            else
              v21 = 0LL;
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(v21 + 16) + 64LL),
              (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v20 + 16) + 56LL));
          }
        }
      }
    }
  }
  if ( v26 )
  {
    v22 = (const void *)*((_QWORD *)v26 + 1);
    if ( v22 )
    {
      if ( *v26 )
      {
        v23 = 8LL;
        if ( *v26 < 8u )
          v23 = *v26;
        memmove(&BugCheckParameter1, v22, v23);
      }
    }
  }
  KeBugCheckEx(0x1D5u, BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, (unsigned int)v3);
}
