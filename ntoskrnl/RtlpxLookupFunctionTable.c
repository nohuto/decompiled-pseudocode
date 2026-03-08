/*
 * XREFs of RtlpxLookupFunctionTable @ 0x1402CB3A0
 * Callers:
 *     RtlLookupFunctionEntry @ 0x140281130 (RtlLookupFunctionEntry.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140281490 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlPcToFileHeader @ 0x1403BE120 (RtlPcToFileHeader.c)
 *     RtlLookupFunctionTableEx @ 0x1403D0B70 (RtlLookupFunctionTableEx.c)
 *     RtlLookupFunctionTable @ 0x14040C148 (RtlLookupFunctionTable.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x140973330 (KiTpBuildExcludedKernelTracepointBitmap.c)
 *     KiVerifyPdata @ 0x140B5D77C (KiVerifyPdata.c)
 *     MiInitializeLoadedModuleList @ 0x140B5D84C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MmLockLoadedModuleListShared @ 0x1402280EC (MmLockLoadedModuleListShared.c)
 *     MmUnlockLoadedModuleListShared @ 0x1402824A4 (MmUnlockLoadedModuleListShared.c)
 */

PVOID __fastcall RtlpxLookupFunctionTable(unsigned __int64 a1, __int64 a2)
{
  PVOID v2; // r15
  int *v5; // rdi
  int v6; // r12d
  unsigned int v7; // esi
  int v8; // r13d
  int v9; // r8d
  int v10; // r9d
  int v11; // eax
  unsigned __int64 v12; // r11
  int *v13; // r10
  unsigned __int64 v14; // rdx
  PVOID result; // rax
  char v16; // si
  unsigned int v17; // edx
  int v18; // r8d
  int v19; // r9d
  unsigned __int64 v20; // rdi
  int *v21; // r10
  unsigned __int64 v22; // rcx
  int v23; // r9d
  unsigned int v24; // r8d
  PVOID *v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int8 v28; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  v5 = RtlpInvertedFunctionTable;
  v6 = RtlpInvertedFunctionTable[2];
  if ( (v6 & 1) != 0 )
  {
    v8 = 1;
    goto LABEL_29;
  }
  if ( *RtlpInvertedFunctionTable == 1 )
  {
    v8 = 1;
  }
  else
  {
    if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
      v7 = dword_140C65500 << 12;
    else
      v7 = 0;
    v8 = 1;
    v9 = *RtlpInvertedFunctionTable - 1;
    v10 = 1;
    while ( v9 >= v10 )
    {
      v11 = (v10 + v9) >> 1;
      v12 = *(_QWORD *)&RtlpInvertedFunctionTable[6 * v11 + 6];
      v13 = &RtlpInvertedFunctionTable[6 * v11];
      v14 = v12 + (unsigned int)v13[8];
      if ( a1 < v12 )
      {
        if ( !v11 )
          break;
        v9 = v11 - 1;
        continue;
      }
      if ( a1 > 0x7FFFFFFEFFFFLL && v7 )
      {
        if ( a1 < v14 )
        {
LABEL_15:
          *(_OWORD *)a2 = *((_OWORD *)v13 + 1);
          *(_QWORD *)(a2 + 16) = *((_QWORD *)v13 + 4);
          goto LABEL_16;
        }
        if ( a1 >= v14 + v7 || v12 == PsNtosImageBase )
          goto LABEL_14;
        if ( v12 != PsHalImageBase )
        {
          *(_QWORD *)(a2 + 8) = v14;
          *(_QWORD *)a2 = &RtlRetpolineStubsFunctionTable;
          *(_DWORD *)(a2 + 20) = RtlRetpolineStubsFunctionTableSize;
          *(_DWORD *)(a2 + 16) = v7;
LABEL_16:
          result = *(PVOID *)a2;
LABEL_17:
          if ( v5[2] == v6 )
            return result;
          goto LABEL_29;
        }
      }
      if ( a1 < v14 )
        goto LABEL_15;
LABEL_14:
      v10 = v11 + 1;
    }
  }
  if ( !*((_BYTE *)RtlpInvertedFunctionTable + 12) )
  {
    result = 0LL;
    goto LABEL_17;
  }
LABEL_29:
  v28 = 0;
  if ( (KiBugCheckActive & 3) != 0 )
  {
    v16 = 1;
  }
  else
  {
    v16 = 0;
    MmLockLoadedModuleListShared(&v28);
  }
  if ( *RtlpInvertedFunctionTable == 1
    || ((KiSpeculationFeatures & 0x20000000000LL) == 0 ? (v17 = 0) : (v17 = dword_140C65500 << 12),
        v18 = *RtlpInvertedFunctionTable - 1,
        v18 < 1) )
  {
LABEL_50:
    if ( *((_BYTE *)RtlpInvertedFunctionTable + 12) )
    {
      v23 = dword_140C694FC;
      v24 = (KiSpeculationFeatures & 0x20000000000LL) != 0 ? dword_140C65500 << 12 : 0;
      v25 = (PVOID *)PsLoadedModuleList;
      if ( PsLoadedModuleList )
      {
        if ( PsLoadedModuleList != &PsLoadedModuleList )
        {
          while ( 1 )
          {
            v26 = (unsigned __int64)v25[6];
            v27 = v26 + (unsigned int)dword_140C694FC + (unsigned __int64)*((unsigned int *)v25 + 16);
            if ( a1 >= v26 && a1 < v27 )
            {
              v2 = v25[2];
              *(_QWORD *)a2 = v2;
              *(_QWORD *)(a2 + 8) = v26;
              *(_DWORD *)(a2 + 16) = v23 + *((_DWORD *)v25 + 16);
              *(_DWORD *)(a2 + 20) = *((_DWORD *)v25 + 6);
              goto LABEL_66;
            }
            if ( v24 && a1 >= v27 && a1 < v27 + v24 )
              break;
            v25 = (PVOID *)*v25;
            if ( v25 == &PsLoadedModuleList )
              goto LABEL_66;
          }
          *(_QWORD *)(a2 + 8) = v27;
          v2 = &RtlRetpolineStubsFunctionTable;
          *(_DWORD *)(a2 + 20) = RtlRetpolineStubsFunctionTableSize;
          *(_QWORD *)a2 = &RtlRetpolineStubsFunctionTable;
          *(_DWORD *)(a2 + 16) = v24;
        }
      }
    }
    goto LABEL_66;
  }
  while ( 1 )
  {
    v19 = (v18 + v8) >> 1;
    v20 = *(_QWORD *)&RtlpInvertedFunctionTable[6 * v19 + 6];
    v21 = &RtlpInvertedFunctionTable[6 * v19];
    v22 = v20 + (unsigned int)v21[8];
    if ( a1 < v20 )
    {
      if ( !v19 )
        goto LABEL_50;
      v18 = v19 - 1;
      goto LABEL_49;
    }
    if ( a1 > 0x7FFFFFFEFFFFLL && v17 )
    {
      if ( a1 < v22 )
        break;
      if ( a1 >= v22 + v17 || v20 == PsNtosImageBase )
        goto LABEL_48;
      if ( v20 != PsHalImageBase )
      {
        *(_DWORD *)(a2 + 20) = RtlRetpolineStubsFunctionTableSize;
        *(_QWORD *)a2 = &RtlRetpolineStubsFunctionTable;
        *(_QWORD *)(a2 + 8) = v22;
        *(_DWORD *)(a2 + 16) = v17;
        goto LABEL_54;
      }
    }
    if ( a1 < v22 )
      break;
LABEL_48:
    v8 = v19 + 1;
LABEL_49:
    if ( v18 < v8 )
      goto LABEL_50;
  }
  *(_OWORD *)a2 = *((_OWORD *)v21 + 1);
  *(_QWORD *)(a2 + 16) = *((_QWORD *)v21 + 4);
LABEL_54:
  v2 = *(PVOID *)a2;
LABEL_66:
  if ( !v16 )
    MmUnlockLoadedModuleListShared(v28);
  return v2;
}
