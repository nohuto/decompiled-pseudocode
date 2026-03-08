/*
 * XREFs of MiMakeTransitionHeatBatch @ 0x140651CD4
 * Callers:
 *     MmCopyToCachedPage @ 0x14021DBE0 (MmCopyToCachedPage.c)
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 *     MiHandleTransitionFault @ 0x1402720E0 (MiHandleTransitionFault.c)
 * Callees:
 *     MiSetNonResidentPteHeat @ 0x140287A90 (MiSetNonResidentPteHeat.c)
 *     MiTryLockLeafPage @ 0x1402A29B8 (MiTryLockLeafPage.c)
 *     MiLockTransitionLeafPageEx @ 0x1402DD4C8 (MiLockTransitionLeafPageEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MiAddPageToHeatRanges @ 0x140651704 (MiAddPageToHeatRanges.c)
 *     MiGetTransitionPageHeatList @ 0x1406518EC (MiGetTransitionPageHeatList.c)
 *     MiSetActivePfnHeat @ 0x1406522D8 (MiSetActivePfnHeat.c)
 *     MiGetPrototypePteBoundaries @ 0x140667104 (MiGetPrototypePteBoundaries.c)
 */

__int64 __fastcall MiMakeTransitionHeatBatch(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // r11
  unsigned __int64 v6; // rbp
  __int64 v7; // r14
  int v8; // r13d
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  unsigned __int64 PrototypePteBoundaries; // rax
  unsigned __int64 v18; // rdx
  PSLIST_ENTRY TransitionPageHeatList; // rax
  unsigned __int64 v20; // rax
  unsigned int v21; // edx
  unsigned __int64 v22; // rcx
  __int64 *v23; // rbx
  __int64 v24; // r10
  __int64 v25; // r8
  __int64 v26; // r10
  __int64 v27; // rdx
  _QWORD *v29; // [rsp+60h] [rbp+8h] BYREF
  __int64 v30; // [rsp+78h] [rbp+20h] BYREF

  v30 = 0LL;
  v29 = 0LL;
  MiSetNonResidentPteHeat(a1 + 2, 0);
  if ( (HvlEnlightenments & 0x200000) != 0 )
  {
    v6 = a1[1] | 0x8000000000000000uLL;
    v7 = 0LL;
    if ( (__int64)a1[5] < 0 )
    {
      v8 = 1;
      PrototypePteBoundaries = MiGetPrototypePteBoundaries(v6, &v30);
      if ( PrototypePteBoundaries )
      {
        v12 = v6 & 0xFFFFFFFFFFFFF000uLL;
        v18 = PrototypePteBoundaries + 8 * v30;
        v16 = (v6 & 0xFFFFFFFFFFFFF000uLL) + 4088;
        if ( (v6 & 0xFFFFFFFFFFFFF000uLL) < PrototypePteBoundaries )
          v12 = PrototypePteBoundaries;
        if ( v16 >= v18 )
          v16 = v18 - 8;
LABEL_19:
        TransitionPageHeatList = MiGetTransitionPageHeatList();
        v7 = (__int64)TransitionPageHeatList;
        if ( TransitionPageHeatList )
        {
          if ( TransitionPageHeatList == (PSLIST_ENTRY)-1LL )
          {
            MiSetActivePfnHeat(a1, 1LL);
          }
          else
          {
            v20 = *((unsigned int *)&TransitionPageHeatList->Next + 2);
            v21 = -1;
            v22 = a3;
            if ( a3 >= 0xFFFFFFFF )
              v22 = 0xFFFFFFFFLL;
            if ( v20 <= v22 )
            {
              if ( a3 < 0xFFFFFFFF )
                v21 = a3;
            }
            else
            {
              v21 = v20;
            }
            v23 = (__int64 *)v6;
            if ( a3 <= v20 )
              v23 = (__int64 *)v12;
            if ( (unsigned int)((__int64)(v16 - v6) >> 3) + 1 < v21 )
            {
              if ( (unsigned int)((__int64)(v16 - (_QWORD)v23) >> 3) + 1 > v21 )
                v23 = (__int64 *)(v16 - 8LL * v21 + 8);
            }
            else
            {
              v23 = (__int64 *)v6;
              v16 = v6 - 8 + 8LL * v21;
            }
            for ( ; (unsigned __int64)v23 <= v16; ++v23 )
            {
              if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)v23) & 0xC01) == 0x800 )
              {
                if ( v23 == (__int64 *)v6 )
                {
                  v29 = a1;
                  v27 = (__int64)a1;
LABEL_46:
                  if ( (unsigned int)MiAddPageToHeatRanges(
                                       v7,
                                       0xAAAAAAAAAAAAAAABuLL * ((v27 + 0x220000000000LL) >> 4),
                                       3) )
                    return v7;
                  continue;
                }
                if ( v8 )
                {
                  MiTryLockLeafPage(v23, 3, (__int64 *)&v29);
                  v24 = (__int64)v29;
                }
                else
                {
                  v24 = MiLockTransitionLeafPageEx((ULONG_PTR)v23, (_BYTE *)1, 1);
                  v29 = (_QWORD *)v24;
                }
                if ( v24 )
                {
                  v25 = *(_QWORD *)(v24 + 16) >> 3;
                  if ( (*(_QWORD *)(v24 + 16) & 0x400LL) != 0 )
                    LOBYTE(v25) = *(_QWORD *)(v24 + 16) >> 11;
                  if ( (v25 & 1) != 0 )
                  {
                    MiSetNonResidentPteHeat((unsigned __int64 *)(v24 + 16), 0);
                    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    v27 = (__int64)v29;
                    goto LABEL_46;
                  }
                  _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v8 = 0;
      v9 = (__int64)(v6 << 25) >> 16;
      if ( v9 > 0x7FFFFFFEFFFFLL )
      {
        if ( (unsigned int)MiGetSystemRegionType(v9) == 6 )
        {
          v12 = v6 & 0xFFFFFFFFFFFFF000uLL;
          v16 = (v6 & 0xFFFFFFFFFFFFF000uLL) + 4088;
          goto LABEL_19;
        }
      }
      else if ( v5 )
      {
        v10 = v9 & 0x7FFFFFE00000LL;
        if ( v10 >= (*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) << 12 )
          v11 = (v10 >> 9) & 0x7FFFFFFFF8LL;
        else
          v11 = 8
              * ((*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) & 0xFFFFFFFFFLL);
        v12 = v11 - 0x98000000000LL;
        v13 = v10 + 2093056;
        v14 = *(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32);
        if ( v13 <= v14 << 12 )
          v15 = (v13 >> 9) & 0x7FFFFFFFF8LL;
        else
          v15 = 8 * (v14 & 0xFFFFFFFFFLL);
        v16 = v15 - 0x98000000000LL;
        goto LABEL_19;
      }
    }
    return v7;
  }
  return 0LL;
}
