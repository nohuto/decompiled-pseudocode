/*
 * XREFs of MiAgePteWorker @ 0x140326530
 * Callers:
 *     MiAgePte @ 0x1403260A0 (MiAgePte.c)
 *     MiAgeWorkingSetEPTCallback @ 0x1404636A0 (MiAgeWorkingSetEPTCallback.c)
 *     MiSimpleAgePte @ 0x140632C70 (MiSimpleAgePte.c)
 *     MiSimpleAgeWorkingSetEPTCallback @ 0x140632DC0 (MiSimpleAgeWorkingSetEPTCallback.c)
 * Callees:
 *     MiSetVaAgeList @ 0x14031AB40 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiClearPteAccessed @ 0x140326910 (MiClearPteAccessed.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x14032B2B0 (MiFreeWsleList.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

void __fastcall MiAgePteWorker(__int64 a1, int a2, unsigned __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned __int8 v10; // al
  char v11; // si
  __int64 v12; // rbx
  char v13; // al
  BOOL v14; // eax
  unsigned __int64 v15; // rdx
  char v16; // cl
  unsigned int v17; // esi
  __int64 v18; // rcx
  unsigned __int8 v19; // r15
  unsigned __int8 v20; // al
  unsigned __int8 v21; // al

  if ( a3 < 0xFFFFF68000000000uLL || a3 > 0xFFFFF6FFFFFFFFFFuLL )
    v10 = HIBYTE(*(_QWORD *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)) & 0xF;
  else
    v10 = (*(_BYTE *)(48
                    * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                    - 0x220000000000LL) >> 1) & 7;
  v11 = a6;
  if ( (a6 & 1) != 0 )
  {
    v12 = 0LL;
    if ( (unsigned __int8)(v10 - 1) <= 5u )
    {
      MiSetVaAgeList(a1, a3, 1u, 0LL);
    }
    else if ( v10 == 7 )
    {
LABEL_8:
      v14 = 0;
      if ( (v11 & 2) != 0 )
        v12 = *(_QWORD *)(a5 + 56);
      else
        v14 = (v11 & 4) != 0;
      if ( (unsigned int)MiClearPteAccessed(a1, a4, a2, v12, dword_140C67C68, v14) )
        ++*(_QWORD *)(a5 + 24);
      if ( v12 )
      {
        v15 = qword_140C65810;
        if ( (*(_BYTE *)(v12 + 4) & 2) == 0
          && *(_DWORD *)v12 == 1
          && KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[5] )
        {
          v15 = -1LL;
        }
        if ( (*(_DWORD *)(v12 + 12) >= *(_DWORD *)(v12 + 8) || *(_BYTE *)(v12 + 5) || *(_QWORD *)(v12 + 16) > v15)
          && v15 >= 0x400
          && !*(_BYTE *)(v12 + 5) )
        {
          MiFlushTbList((int *)v12);
        }
      }
      return;
    }
    v13 = *(_BYTE *)(a4 + 35);
    if ( (v13 & 8) == 0 && (v13 & 7u) < 5 )
    {
      a6 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&a6);
        while ( *(__int64 *)(a4 + 24) < 0 );
      }
      *(_BYTE *)(a4 + 35) = *(_BYTE *)(a4 + 35) & 0xF8 | 5;
      _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    goto LABEL_8;
  }
  v16 = *(_BYTE *)(a4 + 35);
  if ( (v16 & 8) != 0 )
    v17 = 5;
  else
    v17 = v16 & 7;
  if ( v10 < 6u )
  {
    if ( v17 < 5 )
    {
      v21 = 6;
    }
    else
    {
      if ( (*(_DWORD *)a5 & 1) == 0 )
        goto LABEL_27;
      v21 = v10 + 1;
    }
    MiSetVaAgeList(a1, a3, 1u, v21);
    ++*(_QWORD *)(a5 + 16);
  }
LABEL_27:
  v18 = *(_QWORD *)(a4 + 40);
  if ( v18 >= 0 )
    v19 = *(_BYTE *)(a5 + 4);
  else
    v19 = *(_BYTE *)(a5 + 5);
  if ( !v19 )
    v19 = 7;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 3
    && (((unsigned __int64)v18 >> 60) & 7) == 4
    && (*(_QWORD *)(a4 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
    && *(_WORD *)(a4 + 32) == 1
    || (*(_DWORD *)a5 & 3) != 0
    && (a3 < 0xFFFFF68000000000uLL || a3 > 0xFFFFF6FFFFFFFFFFuLL
      ? (v20 = HIBYTE(*(_QWORD *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)) & 0xF)
      : (v20 = (*(_BYTE *)(48
                         * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                         - 0x220000000000LL) >> 1) & 7),
        v20 >= v19 || v17 < *(_DWORD *)(a5 + 8)) )
  {
    ++*(_QWORD *)(a5 + 32);
    MiInsertTbFlushEntry(a5 + 64, a3, 1LL);
    if ( *(_DWORD *)(a5 + 76) == *(_DWORD *)(a5 + 72) )
      MiFreeWsleList(a1, a5 + 64, 0LL);
  }
}
