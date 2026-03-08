/*
 * XREFs of MiInitializeImageProtos @ 0x140213DD0
 * Callers:
 *     MiCreateImageFileMap @ 0x1407F1C28 (MiCreateImageFileMap.c)
 * Callees:
 *     MiGetPageForHeader @ 0x1402140A4 (MiGetPageForHeader.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140214870 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140214A54 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiInitializeTransitionPfn @ 0x140214B28 (MiInitializeTransitionPfn.c)
 *     MiReferenceControlAreaPfn @ 0x140224DA0 (MiReferenceControlAreaPfn.c)
 *     MiLockProtoPoolPageForce @ 0x14028331C (MiLockProtoPoolPageForce.c)
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140286264 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiGetEffectivePagePriorityThread @ 0x14028A260 (MiGetEffectivePagePriorityThread.c)
 *     MiStartingOffset @ 0x14028C530 (MiStartingOffset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiEndingOffset @ 0x140324248 (MiEndingOffset.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KeCopyPage @ 0x14041BC90 (KeCopyPage.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

unsigned __int64 __fastcall MiInitializeImageProtos(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 result; // rax
  __int64 v4; // r9
  char v5; // si
  __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  __int64 v8; // r12
  ULONG_PTR v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rdx
  unsigned __int64 v12; // r12
  char *v13; // rbx
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rbx
  unsigned __int64 v17; // [rsp+30h] [rbp-78h]
  __int64 v18; // [rsp+38h] [rbp-70h]
  unsigned __int64 v19; // [rsp+40h] [rbp-68h]
  ULONG_PTR v20; // [rsp+48h] [rbp-60h]
  __int64 v21; // [rsp+50h] [rbp-58h]
  int v24; // [rsp+C8h] [rbp+20h] BYREF

  v2 = *(_WORD *)(a1 + 60) & 0x3FF;
  v18 = *(_QWORD *)(qword_140C67048 + 8 * v2);
  v17 = *(unsigned int *)(a2 + 40);
  result = MiGetEffectivePagePriorityThread(KeGetCurrentThread(), a2, v2, a1);
  v5 = result;
  if ( (unsigned int)result > 5 )
  {
    v5 = 5;
  }
  else if ( (_DWORD)result )
  {
    v5 = result - 1;
  }
  v6 = v4 + 128;
  v7 = 0LL;
  if ( v4 != -128 )
  {
    do
    {
      v8 = *(_QWORD *)(v6 + 16);
      v9 = *(_QWORD *)(v6 + 8);
      v21 = v8;
      if ( (*(_BYTE *)(v6 + 34) & 2) == 0 )
      {
        v10 = MiStartingOffset(v6, v9, 0xFFFFFFFFLL);
        v19 = MiEndingOffset(v6);
        result = v9 + 8LL * *(unsigned int *)(v6 + 44);
        v20 = result;
        if ( v9 < result )
        {
          while ( 1 )
          {
            if ( (v9 & 0xFFF) == 0 || !v7 )
            {
              if ( v7 )
              {
                LOBYTE(v11) = 17;
                MiUnlockProtoPoolPage(v7, v11);
              }
              result = MiLockProtoPoolPageForce(v9);
              v7 = result;
            }
            if ( v10 + 4096 > v17 )
              break;
            result = MI_READ_PTE_LOCK_FREE(v9);
            if ( (result & 1) == 0 && (result & 0xC00) != 0x800 && (result & 0x400) != 0 )
            {
              result = MiGetPageForHeader(v18, (*(_DWORD *)(a1 + 56) >> 20) & 0x7F);
              v12 = result;
              if ( result != -1LL )
              {
                if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
                  v13 = *(char **)(a2 + 24);
                else
                  v13 = (char *)MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0xC0000020);
                v14 = MiMapPageInHyperSpaceWorker(v12, 0LL, 0x80000000LL);
                KeCopyPage(v14, &v13[v10]);
                if ( v10 + 4096 > v19 )
                  memset((void *)(v14 - (unsigned int)(v10 - v19 + 4096) + 4096), 0, (unsigned int)(v10 - v19 + 4096));
                LOBYTE(v15) = 17;
                MiUnmapPageInHyperSpaceWorker(v14, v15, 0x80000000LL);
                v16 = 48 * v12 - 0x220000000000LL;
                MiReferenceControlAreaPfn(a1, 0LL, 1LL);
                v24 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v24);
                  while ( *(__int64 *)(v16 + 24) < 0 );
                }
                MiInitializeTransitionPfn(v12, v9, -1LL);
                *(_BYTE *)(v16 + 35) ^= (*(_BYTE *)(v16 + 35) ^ v5) & 7;
                MiRemoveLockedPageChargeAndDecRef(48 * v12 - 0x220000000000LL);
                result = 0x7FFFFFFFFFFFFFFFLL;
                _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
            }
            v9 += 8LL;
            v10 += 4096LL;
            if ( v9 >= v20 )
            {
              v8 = v21;
              goto LABEL_14;
            }
          }
          v8 = 0LL;
        }
LABEL_14:
        if ( v7 )
        {
          LOBYTE(v11) = 17;
          result = MiUnlockProtoPoolPage(v7, v11);
          v7 = 0LL;
        }
      }
      v6 = v8;
    }
    while ( v8 );
  }
  return result;
}
