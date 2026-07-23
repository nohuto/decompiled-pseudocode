/*
 * XREFs of RtlpxLookupFunctionTable @ 0x14021EB70
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x14021DF20 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlPcToFileHeader @ 0x14031AE00 (RtlPcToFileHeader.c)
 *     RtlLookupFunctionEntry @ 0x14033F110 (RtlLookupFunctionEntry.c)
 *     RtlLookupFunctionTableEx @ 0x14037F120 (RtlLookupFunctionTableEx.c)
 *     RtlLookupFunctionTable @ 0x1403C572C (RtlLookupFunctionTable.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x140A56360 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     KiVerifyPdata @ 0x140A66914 (KiVerifyPdata.c)
 * Callees:
 *     MmUnlockLoadedModuleListShared @ 0x14029CDE4 (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x14029CF18 (MmLockLoadedModuleListShared.c)
 */

PVOID __fastcall RtlpxLookupFunctionTable(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  PVOID v4; // r12
  unsigned __int64 v5; // r15
  int *v7; // rsi
  int v8; // ebp
  int v9; // r14d
  int v10; // eax
  char *v11; // rbx
  int *v12; // r11
  char *v13; // r10
  int v14; // r14d
  PVOID result; // rax
  int v16; // ebp
  unsigned int v17; // ebx
  int v18; // r11d
  int v19; // r8d
  int v20; // r9d
  char *v21; // rbp
  int *v22; // r10
  char *v23; // rdx
  unsigned int v24; // r9d
  PVOID *v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r8
  unsigned __int8 v28; // [rsp+68h] [rbp+10h] BYREF
  int v29; // [rsp+70h] [rbp+18h]
  unsigned int v30; // [rsp+78h] [rbp+20h]

  v4 = 0LL;
  v28 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  v5 = a2;
  *(_DWORD *)(a2 + 16) = 0;
  v7 = RtlpInvertedFunctionTable[0];
  v8 = RtlpInvertedFunctionTable[0][2];
  if ( (v8 & 1) != 0 )
  {
    v16 = 1;
    v14 = 4096;
    v29 = 1;
LABEL_29:
    MmLockLoadedModuleListShared(&v28, a2, a3, a4);
    if ( *RtlpInvertedFunctionTable[0] != 1 )
    {
      if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
      {
        v17 = dword_140C4CCB0;
        v18 = 4096;
      }
      else
      {
        v17 = 0;
        v18 = 0;
      }
      v19 = *RtlpInvertedFunctionTable[0] - 1;
      if ( v19 >= 1 )
      {
        do
        {
          v20 = (v19 + v16) >> 1;
          v21 = *(char **)&RtlpInvertedFunctionTable[0][6 * v20 + 6];
          v22 = &RtlpInvertedFunctionTable[0][6 * v20];
          v23 = &v21[v22[8]];
          if ( a1 >= (unsigned __int64)v21 )
          {
            if ( a1 > 0x7FFFFFFEFFFFLL
              && v18
              && a1 >= (unsigned __int64)&v23[v17]
              && a1 < (unsigned __int64)&v23[v18 + v17]
              && v21 != PsNtosImageBase
              && v21 != PsHalImageBase )
            {
              *(_QWORD *)v5 = &RtlRetpolineStubsFunctionTable;
              *(_QWORD *)(v5 + 8) = &v23[v17];
              v4 = &RtlRetpolineStubsFunctionTable;
              *(_DWORD *)(v5 + 20) = RtlRetpolineStubsFunctionTableSize;
              *(_DWORD *)(v5 + 16) = v18;
              goto LABEL_62;
            }
            if ( a1 < (unsigned __int64)v23 )
            {
              *(_OWORD *)v5 = *((_OWORD *)v22 + 1);
              *(_QWORD *)(v5 + 16) = *((_QWORD *)v22 + 4);
              v4 = *(PVOID *)v5;
              goto LABEL_62;
            }
            v16 = v20 + 1;
            v29 = v20 + 1;
          }
          else
          {
            if ( !v20 )
              break;
            v16 = v29;
            v19 = v20 - 1;
          }
        }
        while ( v19 >= v16 );
      }
    }
    if ( *((_BYTE *)RtlpInvertedFunctionTable[0] + 12) )
    {
      if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
      {
        v24 = dword_140C4CCB0;
      }
      else
      {
        v24 = 0;
        v14 = 0;
      }
      v25 = (PVOID *)PsLoadedModuleList;
      if ( PsLoadedModuleList )
      {
        if ( PsLoadedModuleList != &PsLoadedModuleList )
        {
          while ( 1 )
          {
            v26 = (unsigned __int64)v25[6];
            v27 = v26 + *((unsigned int *)v25 + 16);
            if ( a1 >= v26 && a1 < v27 )
            {
              v4 = v25[2];
              *(_QWORD *)v5 = v4;
              *(_QWORD *)(v5 + 8) = v26;
              *(_DWORD *)(v5 + 16) = *((_DWORD *)v25 + 16);
              *(_DWORD *)(v5 + 20) = *((_DWORD *)v25 + 6);
              goto LABEL_62;
            }
            if ( v14 && a1 >= v27 + v24 && a1 < v27 + v14 + v24 )
              break;
            v25 = (PVOID *)*v25;
            if ( v25 == &PsLoadedModuleList )
              goto LABEL_62;
          }
          *(_QWORD *)v5 = &RtlRetpolineStubsFunctionTable;
          *(_QWORD *)(v5 + 8) = v27 + v24;
          v4 = &RtlRetpolineStubsFunctionTable;
          *(_DWORD *)(v5 + 20) = RtlRetpolineStubsFunctionTableSize;
          *(_DWORD *)(v5 + 16) = v14;
        }
      }
    }
LABEL_62:
    MmUnlockLoadedModuleListShared(v28);
    return v4;
  }
  if ( *RtlpInvertedFunctionTable[0] == 1 )
  {
    v29 = 1;
    goto LABEL_10;
  }
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
  {
    v9 = 4096;
    v30 = dword_140C4CCB0;
  }
  else
  {
    v30 = 0;
    v9 = 0;
  }
  a3 = (unsigned int)(*RtlpInvertedFunctionTable[0] - 1);
  v29 = 1;
  a4 = 1LL;
  if ( (int)a3 < 1 )
  {
LABEL_10:
    v14 = 4096;
    if ( !*((_BYTE *)RtlpInvertedFunctionTable[0] + 12) )
    {
      result = 0LL;
      goto LABEL_18;
    }
LABEL_21:
    v16 = 1;
    goto LABEL_29;
  }
  while ( 1 )
  {
    v10 = ((int)a4 + (int)a3) >> 1;
    a2 = 3LL * v10;
    v11 = *(char **)&RtlpInvertedFunctionTable[0][6 * v10 + 6];
    v12 = &RtlpInvertedFunctionTable[0][6 * v10];
    v13 = &v11[v12[8]];
    if ( a1 < (unsigned __int64)v11 )
    {
      if ( !v10 )
        goto LABEL_10;
      a3 = (unsigned int)(v10 - 1);
      goto LABEL_9;
    }
    if ( a1 > 0x7FFFFFFEFFFFLL )
    {
      if ( v9 )
      {
        a4 = v30;
        if ( a1 >= (unsigned __int64)&v13[v30] )
        {
          a2 = (unsigned __int64)&v13[v9 + v30];
          if ( a1 < a2 && v11 != PsNtosImageBase && v11 != PsHalImageBase )
            break;
        }
      }
    }
    if ( a1 < (unsigned __int64)v13 )
    {
      *(_OWORD *)v5 = *((_OWORD *)v12 + 1);
      *(_QWORD *)(v5 + 16) = *((_QWORD *)v12 + 4);
      result = *(PVOID *)v5;
      goto LABEL_17;
    }
    a4 = (unsigned int)(v10 + 1);
LABEL_9:
    if ( (int)a3 < (int)a4 )
      goto LABEL_10;
  }
  *(_DWORD *)(v5 + 16) = v9;
  *(_QWORD *)(v5 + 8) = &v13[a4];
  *(_DWORD *)(v5 + 20) = RtlRetpolineStubsFunctionTableSize;
  result = &RtlRetpolineStubsFunctionTable;
  *(_QWORD *)v5 = &RtlRetpolineStubsFunctionTable;
LABEL_17:
  v14 = 4096;
LABEL_18:
  if ( v7[2] != v8 )
    goto LABEL_21;
  return result;
}
