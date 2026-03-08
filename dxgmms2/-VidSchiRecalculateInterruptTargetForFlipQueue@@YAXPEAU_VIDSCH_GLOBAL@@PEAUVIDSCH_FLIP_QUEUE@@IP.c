/*
 * XREFs of ?VidSchiRecalculateInterruptTargetForFlipQueue@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE@@IPEA_K@Z @ 0x1C0049F00
 * Callers:
 *     ?VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEA_NPEAIII@Z @ 0x1C00489D8 (-VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     ?VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C004B0C0 (-VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiRecalculateInterruptTargetForFlipQueue(
        struct _VIDSCH_GLOBAL *a1,
        struct VIDSCH_FLIP_QUEUE *a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  unsigned int v5; // r10d
  int v6; // r11d
  __int64 v10; // rcx
  unsigned int v11; // eax
  int v12; // edx
  int v13; // r9d
  _DWORD *v14; // r14
  unsigned int v15; // edx
  char v16; // r8
  bool v17; // zf
  int v18; // eax
  char v19; // bp
  unsigned __int64 v20; // rcx
  int v21; // eax

  if ( !a2 )
    return;
  v5 = *((_DWORD *)a2 + 17);
  v6 = ((unsigned __int8)*((_DWORD *)a2 + 18) + 1) & 0x3F;
  while ( 1 )
  {
    if ( v5 == v6 )
      return;
    v10 = 1384LL * v5;
    v11 = *(_DWORD *)((char *)a2 + v10 + 1172);
    if ( v11 > 0xC || (v12 = 4673, !_bittest(&v12, v11)) )
    {
      if ( v11 == 5 || v11 == 15 )
      {
        v13 = *(_DWORD *)((char *)a2 + v10 + 1256);
        if ( (v13 & 0x80000) == 0 )
        {
          v14 = *(_DWORD **)((char *)a2 + v10 + 1296);
          v15 = (v13 & 0x10) != 0
              ? ((unsigned __int16)*v14 | (unsigned __int16)(*v14 >> 10)) & 0x3FF
              : (1 << *((_DWORD *)a1 + 38)) - 1;
          if ( _bittest((const int *)&v15, a3) )
          {
            v16 = -1;
            v17 = !_BitScanForward((unsigned int *)&v18, v15);
            if ( !v17 )
              v16 = v18;
            v19 = 0;
            if ( v15 )
              break;
          }
        }
      }
    }
LABEL_22:
    v5 = ((_BYTE)v5 + 1) & 0x3F;
  }
  while ( 1 )
  {
    v20 = *(_QWORD *)((char *)v14 + ((8 * v14[2] + 231) & 0xFFFFFFF8) * v19 + 24);
    if ( v20 || (v13 & 0x1000) != 0 )
      break;
    LOBYTE(v21) = v16;
LABEL_19:
    v16 = -1;
    v15 &= ~(1 << v21);
    v17 = !_BitScanForward((unsigned int *)&v21, v15);
    if ( !v17 )
      v16 = v21;
    ++v19;
    if ( !v15 )
      goto LABEL_22;
  }
  LOBYTE(v21) = v16;
  if ( v16 != a3 )
    goto LABEL_19;
  if ( v20 < *a4 )
    *a4 = v20;
}
