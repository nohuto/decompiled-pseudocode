/*
 * XREFs of MiAgePteWorker @ 0x1402BA020
 * Callers:
 *     MiAgePte @ 0x1402B9AD0 (MiAgePte.c)
 *     MiAgeWorkingSetEPTCallback @ 0x14053AB10 (MiAgeWorkingSetEPTCallback.c)
 *     MiSimpleAgePte @ 0x14053BC00 (MiSimpleAgePte.c)
 *     MiSimpleAgeWorkingSetEPTCallback @ 0x14053BDD0 (MiSimpleAgeWorkingSetEPTCallback.c)
 * Callees:
 *     MiFreeWsleList @ 0x1402A79B0 (MiFreeWsleList.c)
 *     MiSetVaAgeList @ 0x1402ADD40 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiClearPteAccessed @ 0x1402BA490 (MiClearPteAccessed.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiLockSetPfnPriority @ 0x1402E1E0C (MiLockSetPfnPriority.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiAgePteWorker(__int64 a1, int a2, unsigned __int64 a3, __int64 a4, unsigned int *a5, char a6)
{
  int v6; // esi
  unsigned __int64 v10; // rdi
  unsigned __int8 v11; // dl
  __int64 v12; // rdx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v14; // rax
  char v15; // r8^7
  char v16; // al
  __int64 v17; // rbx
  BOOL v18; // eax
  __int64 result; // rax
  unsigned __int64 v20; // rdx
  char v21; // al
  unsigned int v22; // esi
  unsigned __int8 v23; // dl
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int8 v26; // al
  unsigned __int8 v27; // r15
  __int64 v28; // rcx
  unsigned __int8 v29; // dl
  __int64 v30; // rdx
  char v31; // r8^7

  v6 = a2;
  if ( a3 < 0xFFFFF68000000000uLL || a3 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v10 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v12 = *(_QWORD *)v10;
    if ( v10 >= 0xFFFFF6FB7DBED000uLL
      && v10 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(0xFFFFF6FFFFFFFFFFuLL, v12, 0xFFFFF6FB7DBED7F8uLL, 0xFFFFF6FB7DBED000uLL)
      && (v12 & 1) != 0
      && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v14 = *((_QWORD *)&Flink->Flink + ((v10 >> 3) & 0x1FF));
        v15 = HIBYTE(v12);
        if ( (v14 & 0x20) == 0 )
          v15 = HIBYTE(v12);
        HIBYTE(v12) = v15;
        if ( (v14 & 0x42) != 0 )
          HIBYTE(v12) = v15;
      }
    }
    v11 = HIBYTE(v12) & 0xF;
  }
  else
  {
    v10 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v11 = (*(_BYTE *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v10) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) >> 1) & 7;
  }
  if ( (a6 & 1) != 0 )
  {
    if ( (unsigned __int8)(v11 - 1) > 5u )
    {
      if ( v11 == 7 )
      {
LABEL_23:
        v17 = 0LL;
        v18 = 0;
        if ( (a6 & 2) != 0 )
          v17 = *((_QWORD *)a5 + 7);
        else
          v18 = (a6 & 4) != 0;
        result = MiClearPteAccessed(a1, a4, v6, v17, dword_140C4E828, v18);
        if ( (_DWORD)result )
          ++*((_QWORD *)a5 + 3);
        if ( v17 )
        {
          v20 = qword_140C4DF90;
          if ( (*(_BYTE *)(v17 + 4) & 2) == 0
            && *(_DWORD *)v17 == 1
            && KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[5] )
          {
            v20 = -1LL;
          }
          result = *(unsigned int *)(v17 + 8);
          if ( (*(_DWORD *)(v17 + 12) >= (unsigned int)result || *(_BYTE *)(v17 + 5) || *(_QWORD *)(v17 + 16) > v20)
            && v20 >= 0x400
            && !*(_BYTE *)(v17 + 5) )
          {
            return MiFlushTbList(v17);
          }
        }
        return result;
      }
    }
    else
    {
      MiSetVaAgeList(a1, a3, 1u, 0);
    }
    v16 = *(_BYTE *)(a4 + 35);
    if ( (v16 & 8) == 0 && (v16 & 7u) < 5 )
    {
      MiLockSetPfnPriority(a4, 5LL);
      v6 = a2;
    }
    goto LABEL_23;
  }
  v21 = *(_BYTE *)(a4 + 35);
  if ( (v21 & 8) != 0 )
    v22 = 5;
  else
    v22 = v21 & 7;
  if ( v11 < 6u )
  {
    if ( v22 < 5 )
    {
      v23 = 6;
LABEL_47:
      MiSetVaAgeList(a1, a3, 1u, v23);
      ++*((_QWORD *)a5 + 2);
      goto LABEL_48;
    }
    if ( (*a5 & 1) != 0 )
    {
      v23 = v11 + 1;
      goto LABEL_47;
    }
  }
LABEL_48:
  if ( (unsigned int)MI_PFN_IS_PROTO(a4) )
    v26 = *((_BYTE *)a5 + 5);
  else
    v26 = *((_BYTE *)a5 + 4);
  v27 = v26;
  v28 = 7LL;
  if ( !v26 )
    v27 = 7;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 3 && ((*(_QWORD *)(a4 + 40) >> 60) & 7) == 4 )
  {
    v28 = 0x3FFFFFFFFFFFFFFFLL;
    if ( (*(_QWORD *)(a4 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 && *(_WORD *)(a4 + 32) == 1 )
      goto LABEL_75;
  }
  result = *a5;
  if ( (result & 3) != 0 )
  {
    if ( a3 < 0xFFFFF68000000000uLL || a3 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v30 = *(_QWORD *)v10;
      result = 0xFFFFF6FB7DBED000uLL;
      if ( v10 >= 0xFFFFF6FB7DBED000uLL )
      {
        result = 0xFFFFF6FB7DBED7F8uLL;
        if ( v10 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          result = MiPteHasShadow(v28, v30, v24, v25);
          if ( (_DWORD)result )
          {
            if ( (v30 & 1) != 0 && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
            {
              result = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( result )
              {
                v31 = HIBYTE(v30);
                result = *(_QWORD *)(result + 8 * ((v10 >> 3) & 0x1FF));
                if ( (result & 0x20) == 0 )
                  v31 = HIBYTE(v30);
                HIBYTE(v30) = v31;
                if ( (result & 0x42) != 0 )
                  HIBYTE(v30) = v31;
              }
            }
          }
        }
      }
      v29 = HIBYTE(v30) & 0xF;
    }
    else
    {
      result = 6 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v10) >> 12) & 0xFFFFFFFFFLL);
      v29 = (*(_BYTE *)(8 * result - 0x58000000000LL) >> 1) & 7;
    }
    if ( v29 >= v27 || v22 < a5[2] )
    {
LABEL_75:
      ++*((_QWORD *)a5 + 4);
      MiInsertTbFlushEntry((__int64)(a5 + 16), a3, 1LL, 0);
      result = a5[18];
      if ( a5[19] == (_DWORD)result )
        return MiFreeWsleList(a1, (__int64)(a5 + 16), 0);
    }
  }
  return result;
}
