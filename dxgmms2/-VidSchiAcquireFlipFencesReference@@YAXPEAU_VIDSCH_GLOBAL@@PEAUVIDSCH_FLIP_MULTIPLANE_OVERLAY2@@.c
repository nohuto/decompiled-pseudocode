/*
 * XREFs of ?VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C0003170
 * Callers:
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00430EC (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchSubmitCommandToHwQueue @ 0x1C0044510 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchSubmitCommand @ 0x1C00A4B80 (VidSchSubmitCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiAcquireFlipFencesReference(
        struct _VIDSCH_GLOBAL *a1,
        struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a2)
{
  unsigned int v3; // eax
  int v4; // r8d
  unsigned int v5; // r10d
  char v6; // dl
  bool v7; // zf
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // r8d
  unsigned int v11; // r9d
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ecx
  char v17; // dl
  int v18; // ecx

  v3 = *(_DWORD *)a2 & 0x3FF;
  v4 = (*(_DWORD *)a2 >> 10) & 0x3FF;
  v5 = 0;
  v6 = -1;
  if ( *((_BYTE *)a1 + 156) )
    v5 = v4;
  v7 = !_BitScanForward((unsigned int *)&v8, v3);
  if ( !v7 )
    v6 = v8;
  v7 = !_BitScanForward((unsigned int *)&v9, v5);
  v10 = v6;
  if ( v7 )
    LOBYTE(v9) = -1;
  v11 = (char)v9;
  while ( v3 || v5 )
  {
    v12 = v11;
    if ( v10 < v11 )
      v12 = v10;
    v13 = v12 * ((8 * *((_DWORD *)a2 + 2) + 231) & 0xFFFFFFF8);
    v14 = *(_QWORD *)((char *)a2 + v13 + 208);
    if ( v14 )
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 36));
    v15 = *(_QWORD *)((char *)a2 + v13 + 224);
    if ( v15 )
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 36));
    if ( v10 >= v11 )
    {
      v5 &= ~(1 << v11);
      v17 = -1;
      v7 = !_BitScanForward((unsigned int *)&v18, v5);
      if ( !v7 )
        v17 = v18;
      v11 = v17;
    }
    else
    {
      v3 &= ~(1 << v10);
      v7 = !_BitScanForward((unsigned int *)&v16, v3);
      if ( v7 )
        LOBYTE(v16) = -1;
      v10 = (char)v16;
    }
  }
}
