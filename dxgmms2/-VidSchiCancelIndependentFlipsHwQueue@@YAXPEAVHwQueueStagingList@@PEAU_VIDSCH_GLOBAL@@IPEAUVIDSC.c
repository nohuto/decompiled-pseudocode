/*
 * XREFs of ?VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEA_NPEAIII@Z @ 0x1C00489D8
 * Callers:
 *     ?VidSchiCancelQueuedIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@_KAEAI444@Z @ 0x1C00352C8 (-VidSchiCancelQueuedIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLI.c)
 *     VidSchExitIndependentFlipInternal @ 0x1C003FABC (VidSchExitIndependentFlipInternal.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C000D060 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiCancelQueuedFlips@@YAJPEAU_VIDSCH_GLOBAL@@II_KPEA_KI@Z @ 0x1C0048C34 (-VidSchiCancelQueuedFlips@@YAJPEAU_VIDSCH_GLOBAL@@II_KPEA_KI@Z.c)
 *     ?VidSchiRecalculateInterruptTargetForFlipQueue@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE@@IPEA_K@Z @ 0x1C0049F00 (-VidSchiRecalculateInterruptTargetForFlipQueue@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE@@IP.c)
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x1C004A448 (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 */

void __fastcall VidSchiCancelIndependentFlipsHwQueue(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        struct VIDSCH_FLIP_QUEUE *a4,
        bool *a5,
        unsigned int *a6,
        char a7,
        unsigned int a8)
{
  __int64 v8; // r12
  unsigned int *v10; // rbp
  int v11; // ebx
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // rdi
  int v18; // eax
  unsigned int v19; // eax
  int v20; // ecx
  int v21; // edi
  int v22; // ebp
  bool *v23; // r14
  unsigned int v24; // r12d
  __int64 v25; // r9
  __int64 v26; // [rsp+48h] [rbp-50h]
  unsigned __int64 v28; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v29; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v30; // [rsp+B8h] [rbp+20h] BYREF

  v29 = a3;
  v10 = a6;
  v11 = -1;
  LODWORD(v28) = *((_DWORD *)a4 + 21);
  v8 = (unsigned int)v28;
  v13 = 288LL * (unsigned int)v28;
  v26 = *((_QWORD *)a2 + a3 + 400);
  v14 = *a6;
  v15 = 1384 * v14;
  v16 = *((_DWORD *)a4 + 346 * v14 + 293);
  if ( v16 != 5 && v16 != 15 || (*(_DWORD *)((_BYTE *)a4 + v15 + 1256) & 0x2000) == 0 )
  {
LABEL_19:
    v11 = v14;
LABEL_20:
    if ( v11 != -1 )
    {
      v21 = v11;
      v22 = (a7 + 1) & 0x3F;
      if ( v11 != v22 )
      {
        v23 = a5;
        v24 = v29;
        do
        {
          VidSchiCompleteFlipEntry((__int64)a1, (__int64)a2, v24, (__int64)a4, v21, v21, 0xCu, v23);
          v21 = ((_BYTE)v21 + 1) & 0x3F;
        }
        while ( v21 != v22 );
        LODWORD(v8) = v28;
      }
      v25 = *(_QWORD *)(v26 + v13 + 392) + 1LL;
      v28 = v25;
      if ( *(_DWORD *)(v26 + v13 + 196) )
      {
        VidSchiRecalculateInterruptTargetForFlipQueue(a2, a4, v8, &v28);
        v25 = v28;
      }
      VidSchiSetInterruptTargetPresentId(a2, v29, v8, v25, 0, 0);
      v10 = a6;
    }
    goto LABEL_28;
  }
  v17 = *(_QWORD *)((char *)a4 + v15 + 1296);
  v30 = 0LL;
  v18 = VidSchiCancelQueuedFlips(a2, a3, v28, *(_QWORD *)(v17 + 24), &v30, a8);
  if ( v18 < 0 || v30 < *(_QWORD *)(v17 + 24) )
  {
    WdLogSingleEntry3(3LL, v18, v8, *(_QWORD *)(v17 + 24));
    LODWORD(v14) = *((_DWORD *)a4 + 16);
    while ( (_DWORD)v14 != *((_DWORD *)a4 + 14) )
    {
      v19 = *((_DWORD *)a4 + 346 * (unsigned int)v14 + 293);
      if ( v19 > 0xD )
        goto LABEL_19;
      v20 = 12865;
      if ( !_bittest(&v20, v19) )
        goto LABEL_19;
      LODWORD(v14) = ((_BYTE)v14 + 1) & 0x3F;
    }
  }
  else
  {
    if ( v30 == *(_QWORD *)(v17 + 24) )
    {
      v11 = *v10;
      goto LABEL_20;
    }
    LODWORD(v14) = ((unsigned __int8)*v10 + 1) & 0x3F;
    while ( (_DWORD)v14 != (((unsigned __int8)*((_DWORD *)a4 + 18) + 1) & 0x3F) )
    {
      if ( *(_QWORD *)(*((_QWORD *)a4 + 173 * (unsigned int)v14 + 162) + 24LL) == v30 )
        goto LABEL_19;
      LODWORD(v14) = ((_BYTE)v14 + 1) & 0x3F;
    }
  }
LABEL_28:
  *v10 = v11;
}
