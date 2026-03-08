/*
 * XREFs of ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C000C340
 * Callers:
 *     VidSchUnwaitFlipQueue @ 0x1C0003B80 (VidSchUnwaitFlipQueue.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000BE30 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000EAF0 (VidSchiSubmitMmIoFlipCommand.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C0017F40 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C0036748 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUE.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00430EC (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiIsPendingFlipReadyToBeSubmitted@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C0049730 (-VidSchiIsPendingFlipReadyToBeSubmitted@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAUV.c)
 *     ?VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C004A820 (-VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAU.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C001124C (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ?VidSchiFlipEntryChangesHwDuration@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C00493DC (-VidSchiFlipEntryChangesHwDuration@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSC.c)
 *     ?VidSchiFlipOverwriteEligible@@YA_NPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C0049470 (-VidSchiFlipOverwriteEligible@@YA_NPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z.c)
 *     ?VidSchiStallingFlipEntryUnblocked@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAI@Z @ 0x1C004A7BC (-VidSchiStallingFlipEntryUnblocked@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSC.c)
 *     McTemplateK0qqqqqqqqq_EtwWriteTransfer @ 0x1C004B584 (McTemplateK0qqqqqqqqq_EtwWriteTransfer.c)
 */

char __fastcall VidSchiCheckPendingFlipsForThisEntry(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        unsigned __int64 a3,
        struct VIDSCH_FLIP_QUEUE *a4)
{
  unsigned int v6; // edx
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v8; // r14
  __int64 v9; // rcx
  int v10; // r11d
  unsigned int *v11; // r12
  int v12; // r10d
  char v13; // r15
  char v14; // si
  int v15; // ebp
  int v17; // eax
  unsigned int v18; // r9d
  unsigned int v19; // edx
  int v20; // r10d
  __int16 v21; // r9
  unsigned int v22; // r9d
  unsigned int v23; // edx
  bool v24; // zf
  int v25; // eax
  char v26; // cl
  int v27; // eax
  unsigned int v28; // r11d
  char v29; // [rsp+30h] [rbp-88h]
  char v30; // [rsp+30h] [rbp-88h]
  int v31; // [rsp+38h] [rbp-80h]
  char v32; // [rsp+38h] [rbp-80h]
  int v33; // [rsp+40h] [rbp-78h]
  int v34; // [rsp+40h] [rbp-78h]
  char v35; // [rsp+48h] [rbp-70h]
  int v36; // [rsp+48h] [rbp-70h]
  char v37; // [rsp+50h] [rbp-68h]
  char v38; // [rsp+58h] [rbp-60h]
  unsigned int v39; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v40[2]; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v41; // [rsp+78h] [rbp-40h]
  unsigned int v42; // [rsp+7Ch] [rbp-3Ch]
  int v43; // [rsp+80h] [rbp-38h]
  unsigned int v44; // [rsp+84h] [rbp-34h]
  unsigned int v45; // [rsp+88h] [rbp-30h]
  unsigned int v46; // [rsp+C8h] [rbp+10h]

  v6 = *((_DWORD *)a2 + 6);
  v8 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)a3;
  v46 = v6;
  v9 = *((_QWORD *)a2 + 15);
  if ( v9 && v9 != a3 || (v9 = *((_QWORD *)a1 + 444)) != 0 && v9 != a3 )
  {
    if ( Microsoft_Windows_DxgKrnlEnableBits >= 0 )
      return 1;
    v35 = 0;
    v33 = *((_DWORD *)a2 + 772);
    v31 = *(_DWORD *)(v9 + 1048);
    v29 = 0;
LABEL_18:
    McTemplateK0qqqqqqqqq_EtwWriteTransfer(
      v9,
      v6,
      a3,
      v6,
      *((_DWORD *)a4 + 21),
      *(_DWORD *)(a3 + 1048),
      v29,
      v31,
      v33,
      v35,
      0,
      -1);
    return 1;
  }
  v10 = *(_DWORD *)(a3 + 1136);
  v11 = *(unsigned int **)(a3 + 1176);
  if ( (v10 & 0x10) != 0 )
  {
    v12 = ((unsigned __int16)*v11 | (unsigned __int16)(*v11 >> 10)) & 0x3FF;
  }
  else
  {
    LODWORD(v9) = *((_DWORD *)a1 + 38);
    v12 = (1 << v9) - 1;
  }
  v13 = *((_BYTE *)a1 + 156);
  if ( !v13 )
    goto LABEL_11;
  LODWORD(v9) = *((_DWORD *)a2 + 773);
  if ( ((unsigned int)v9 & v12) != 0 )
  {
    if ( Microsoft_Windows_DxgKrnlEnableBits >= 0 )
      return 1;
    v35 = *((_DWORD *)a2 + 773);
    v33 = *((_DWORD *)a2 + 772);
    LOBYTE(v31) = 0;
    v29 = 1;
    goto LABEL_18;
  }
  if ( !*((_BYTE *)a1 + 59)
    && *((_DWORD *)a1 + 40) > 1u
    && *((_DWORD *)a2 + 1) != 3
    && (*(_DWORD *)(a3 + 1136) & 0x180) == 0x80 )
  {
    return 0;
  }
LABEL_11:
  v14 = -1;
  if ( (v10 & 0x60000) != 0 )
  {
    v39 = -1;
    if ( !VidSchiStallingFlipEntryUnblocked(a1, a2, (struct _VIDSCH_FLIP_QUEUE_ENTRY *)a3, &v39) )
    {
      if ( Microsoft_Windows_DxgKrnlEnableBits >= 0 )
        return 1;
      v6 = *((_DWORD *)a2 + 773);
      if ( (v10 & 0x20000) != 0 )
      {
        v17 = *((_DWORD *)a2 + 772);
      }
      else
      {
        v9 = *((_QWORD *)a1 + v39 + 400);
        v17 = *(_DWORD *)(v9 + 3088);
      }
      v38 = -1;
      v37 = 0;
      LOBYTE(v36) = *((_DWORD *)a2 + 773);
      LOBYTE(v34) = v17;
      v32 = 0;
      v30 = ((v10 & 0x20000) == 0) | 2;
      goto LABEL_65;
    }
    v6 = v46;
  }
  v15 = *((_DWORD *)a2 + 772);
  if ( (v15 & v12) == 0 )
    return 0;
  if ( !*((_BYTE *)a1 + 59) )
  {
    if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
    {
      v38 = -1;
      v18 = v6;
      v37 = 0;
      v36 = *((_DWORD *)a2 + 773);
      LOBYTE(v34) = *((_DWORD *)a2 + 772);
      v32 = 0;
      v30 = 4;
LABEL_66:
      McTemplateK0qqqqqqqqq_EtwWriteTransfer(
        v9,
        v6,
        a3,
        v18,
        *((_DWORD *)a4 + 21),
        *((_DWORD *)v8 + 262),
        v30,
        v32,
        v34,
        v36,
        v37,
        v38);
      return 1;
    }
    return 1;
  }
  if ( (v10 & 0x20) == 0 )
    return 1;
  if ( (v10 & 0x2000) == 0 )
  {
    if ( !VidSchiFlipOverwriteEligible(a2, v8) )
      return 1;
    v6 = v46;
  }
  if ( (v10 & 0x100000) != 0 )
    return 1;
  if ( (v10 & 0x1000) == 0 )
  {
    if ( *((_DWORD *)v8 + 263) == 14 )
    {
      if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
      {
        v38 = -1;
        v18 = v6;
        v37 = 0;
        v36 = *((_DWORD *)a2 + 773);
        LOBYTE(v34) = v15;
        v32 = 0;
        v30 = 6;
        goto LABEL_66;
      }
      return 1;
    }
    if ( !VidSchiFlipEntryChangesHwDuration(a1, a2, v8) )
    {
      v19 = *v11;
      v20 = 0;
      v21 = *v11;
      v40[0] = a1;
      v22 = v21 & 0x3FF;
      v40[1] = v11;
      v41 = v22;
      if ( v13 )
        v23 = (v19 >> 10) & 0x3FF;
      else
        v23 = 0;
      v24 = !_BitScanForward((unsigned int *)&v25, v22);
      v26 = -1;
      v42 = v23;
      v43 = 0;
      if ( !v24 )
        v26 = v25;
      v24 = !_BitScanForward((unsigned int *)&v27, v23);
      v28 = v26;
      v44 = v26;
      if ( !v24 )
        v14 = v27;
      a3 = (unsigned int)v14;
      v45 = v14;
      while ( v22 || v23 )
      {
        if ( v28 < (unsigned int)a3 )
          a3 = v28;
        v9 = 288 * a3;
        v6 = *((_DWORD *)a2 + 72 * a3 + 50);
        if ( v6 >= *((_DWORD *)a1 + 15) )
        {
          if ( Microsoft_Windows_DxgKrnlEnableBits >= 0 )
            return 1;
          v38 = a3;
          v37 = *((_DWORD *)a2 + 72 * a3 + 50);
          v36 = *((_DWORD *)a2 + 773);
          v34 = *((_DWORD *)a2 + 772);
          v32 = v20;
          v30 = 8;
          goto LABEL_65;
        }
        if ( (*((_DWORD *)v8 + 284) & 0x20) == 0 && *(_DWORD *)((char *)a2 + v9 + 204) != v20 )
          return 1;
        VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(v40);
        a3 = v45;
        v23 = v42;
        v28 = v44;
        v22 = v41;
      }
      return 0;
    }
    if ( Microsoft_Windows_DxgKrnlEnableBits >= 0 )
      return 1;
    v38 = -1;
    v37 = 0;
    v36 = *((_DWORD *)a2 + 773);
    LOBYTE(v34) = v15;
    v32 = 0;
    v30 = 7;
LABEL_65:
    v18 = v46;
    goto LABEL_66;
  }
  if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
  {
    v38 = -1;
    v18 = v6;
    v37 = 0;
    v36 = *((_DWORD *)a2 + 773);
    LOBYTE(v34) = v15;
    v32 = 0;
    v30 = 5;
    goto LABEL_66;
  }
  return 1;
}
