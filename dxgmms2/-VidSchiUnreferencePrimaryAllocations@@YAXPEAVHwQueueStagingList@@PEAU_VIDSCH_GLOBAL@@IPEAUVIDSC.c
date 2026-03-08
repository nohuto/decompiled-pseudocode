/*
 * XREFs of ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x1C003754C
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00055E0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1C00168B8 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C0041854 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C001124C (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ?UnreferencePrimaryAllocationInternal@VIDMM_GLOBAL@@QEAAXPEAVHwQueueStagingList@@PEAUVIDMM_ALLOC@@_N2_K3@Z @ 0x1C002E330 (-UnreferencePrimaryAllocationInternal@VIDMM_GLOBAL@@QEAAXPEAVHwQueueStagingList@@PEAUVIDMM_ALLOC.c)
 */

void __fastcall VidSchiUnreferencePrimaryAllocations(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a4,
        unsigned int a5,
        unsigned int a6,
        char a7,
        bool a8)
{
  unsigned int v8; // r14d
  int v9; // r10d
  struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *v10; // r11
  unsigned int v11; // r15d
  struct _VIDSCH_GLOBAL *v12; // rdi
  unsigned int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // r8d
  bool v16; // zf
  unsigned int v17; // edx
  int v18; // r9d
  char v19; // cl
  int v20; // eax
  unsigned int v21; // esi
  unsigned __int64 v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // eax
  int v25; // edx
  bool v26; // r13
  char *v27; // rax
  unsigned __int64 v28; // rdx
  struct VIDMM_ALLOC *v29; // r8
  unsigned __int64 v30; // rbx
  __int64 v31; // r10
  int v32; // eax
  unsigned int v33; // r12d
  __int64 v34; // r9
  unsigned int v35; // r11d
  __int64 v36; // r15
  int v37; // eax
  unsigned int v38; // edx
  unsigned int v39; // r8d
  unsigned int v40; // edx
  char v41; // cl
  int v42; // eax
  unsigned int v43; // edi
  char v44; // cl
  int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // edi
  int v48; // r8d
  __int64 v49; // rdx
  int v50; // r13d
  __int64 v51; // rdx
  unsigned int v52; // [rsp+48h] [rbp-81h]
  struct VIDMM_ALLOC *v53; // [rsp+58h] [rbp-71h]
  struct _VIDSCH_GLOBAL *v54; // [rsp+60h] [rbp-69h] BYREF
  unsigned int *v55; // [rsp+68h] [rbp-61h]
  unsigned int v56; // [rsp+70h] [rbp-59h]
  unsigned int v57; // [rsp+74h] [rbp-55h]
  int v58; // [rsp+78h] [rbp-51h]
  unsigned int v59; // [rsp+7Ch] [rbp-4Dh]
  unsigned int v60; // [rsp+80h] [rbp-49h]
  _QWORD v61[2]; // [rsp+88h] [rbp-41h] BYREF
  unsigned int v62; // [rsp+98h] [rbp-31h]
  unsigned int v63; // [rsp+9Ch] [rbp-2Dh]
  int v64; // [rsp+A0h] [rbp-29h]
  unsigned int v65; // [rsp+A4h] [rbp-25h]
  unsigned int v66; // [rsp+A8h] [rbp-21h]
  __int64 v67; // [rsp+B0h] [rbp-19h]
  unsigned __int64 v68; // [rsp+B8h] [rbp-11h]

  v8 = a5;
  v9 = 0;
  v52 = 0;
  v10 = a4;
  v11 = a3;
  v12 = a2;
  if ( !a5 )
    return;
  v13 = a6;
  do
  {
    if ( (v8 & 1) == 0 )
      goto LABEL_58;
    if ( (v13 & 1) == 0 )
      goto LABEL_57;
    v14 = *(_DWORD *)v10;
    v15 = *(_DWORD *)v10 & 0x3FF;
    v61[0] = v12;
    v16 = *((_BYTE *)v12 + 156) == 0;
    v61[1] = v10;
    v62 = v15;
    if ( v16 )
      v17 = 0;
    else
      v17 = (v14 >> 10) & 0x3FF;
    v18 = 0;
    v63 = v17;
    v19 = -1;
    v16 = !_BitScanForward((unsigned int *)&v20, v15);
    v64 = 0;
    if ( !v16 )
      v19 = v20;
    v21 = v19;
    v22 = 0xFFFFFFFFLL;
    v16 = !_BitScanForward(&v23, v17);
    v65 = v21;
    if ( !v16 )
      v22 = v23;
    v24 = (char)v22;
    v66 = (char)v22;
    while ( v15 || v17 )
    {
      if ( v21 >= v24 )
        goto LABEL_53;
      v25 = *((_DWORD *)v10 + 1);
      v26 = a8;
      v27 = (char *)v10 + v25 * ((8 * *((_DWORD *)v10 + 2) + 231) & 0xFFFFFFF8);
      v28 = (unsigned __int64)(unsigned int)(v18 + v9 * v25) << 6;
      v29 = *(struct VIDMM_ALLOC **)&v27[v28 + 48];
      v30 = *(_QWORD *)&v27[v28 + 72];
      v68 = *(_QWORD *)&v27[v28 + 64];
      v53 = v29;
      if ( a8 )
      {
        if ( v30 )
        {
          if ( v11 != -1 )
          {
            v31 = *((_QWORD *)v12 + v11 + 400);
            if ( v31 )
            {
              v32 = *(_DWORD *)(v31 + 3088);
              if ( _bittest(&v32, v21) )
              {
                v33 = 0;
                while ( 1 )
                {
                  v34 = v33 ? *(_QWORD *)(v31 + 8LL * v21 + 40) : *(_QWORD *)(v31 + 32);
                  v35 = *(_DWORD *)(v34 + 72);
                  ++v33;
LABEL_45:
                  if ( v35 != (((unsigned __int8)*(_DWORD *)(v34 + 68) - 1) & 0x3F) )
                  {
                    v36 = 1384LL * v35;
                    v37 = *(_DWORD *)(v36 + v34 + 1172);
                    if ( v37 == 5 || v37 == 15 )
                      break;
                  }
                  if ( v33 >= 2 )
                  {
                    v26 = a8;
                    v29 = v53;
                    goto LABEL_48;
                  }
                }
                v55 = *(unsigned int **)(v36 + v34 + 1296);
                v54 = v12;
                v38 = *v55;
                v39 = *v55 & 0x3FF;
                v16 = *((_BYTE *)v12 + 156) == 0;
                v56 = v39;
                if ( v16 )
                  v40 = 0;
                else
                  v40 = (v38 >> 10) & 0x3FF;
                v58 = 0;
                v41 = -1;
                v16 = !_BitScanForward((unsigned int *)&v42, v39);
                v57 = v40;
                if ( !v16 )
                  v41 = v42;
                v43 = v41;
                v44 = -1;
                v16 = !_BitScanForward((unsigned int *)&v45, v40);
                v59 = v43;
                if ( !v16 )
                  v44 = v45;
                v46 = v44;
                v60 = v44;
                while ( 1 )
                {
                  if ( !v39 && !v40 )
                  {
                    v12 = a2;
                    v35 = ((_BYTE)v35 - 1) & 0x3F;
                    goto LABEL_45;
                  }
                  if ( v43 < v46 )
                  {
                    v47 = *(_DWORD *)(v36 + v34 + 1216);
                    v48 = 0;
                    if ( v47 )
                      break;
                  }
LABEL_43:
                  VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v54);
                  v46 = v60;
                  v40 = v57;
                  v39 = v56;
                  v43 = v59;
                }
                v49 = *(_QWORD *)(v36 + v34 + 1296);
                v50 = *(_DWORD *)(v49 + 4);
                v67 = *((_QWORD *)v53 + 12);
                while ( 1 )
                {
                  v22 = v50 * ((8 * *(_DWORD *)(v49 + 8) + 231) & 0xFFFFFFF8)
                      + ((unsigned __int64)(unsigned int)(v58 + v48 * v50) << 6);
                  v8 = a5;
                  if ( v67 == *(_QWORD *)(*(_QWORD *)(v22 + v49 + 48) + 96LL) )
                    break;
                  if ( ++v48 >= v47 )
                    goto LABEL_43;
                }
                v29 = v53;
                v26 = 0;
                if ( v30 < *(_QWORD *)(v22 + v49 + 72) )
                  goto LABEL_52;
                *(_QWORD *)(v22 + v49 + 72) = v30;
                v51 = *(_QWORD *)(*((_QWORD *)v53 + 12) + 24LL);
                v22 = 2LL * *(unsigned int *)(v51 + 32);
                *(_OWORD *)(v51 + 8 * v22 + 40) = 0LL;
                *(_DWORD *)(v51 + 32) = ((unsigned __int8)*(_DWORD *)(v51 + 32) + 1) & 7;
                *(_DWORD *)(v51 + 8 * v22 + 40) = 4;
              }
              else
              {
LABEL_48:
                v22 = (v52 + ((unsigned __int64)v21 << 6)) << 6;
                if ( *(_QWORD *)(v22 + v31 + 3184) != *((_QWORD *)v29 + 12) )
                  goto LABEL_52;
                v26 = 0;
                if ( v30 < *(_QWORD *)(v22 + v31 + 3216) )
                  goto LABEL_52;
                *(_QWORD *)(v22 + v31 + 3216) = v30;
                v51 = *(_QWORD *)(*((_QWORD *)v29 + 12) + 24LL);
                v22 = 2LL * *(unsigned int *)(v51 + 32);
                *(_OWORD *)(v51 + 8 * v22 + 40) = 0LL;
                *(_DWORD *)(v51 + 32) = ((unsigned __int8)*(_DWORD *)(v51 + 32) + 1) & 7;
                *(_DWORD *)(v51 + 8 * v22 + 40) = 3;
              }
              *(_QWORD *)(v51 + 8 * v22 + 48) = v30;
            }
          }
        }
      }
LABEL_52:
      VIDMM_GLOBAL::UnreferencePrimaryAllocationInternal((VIDMM_GLOBAL *)v22, a1, v29, a7, v26, v68, v30);
      v12 = a2;
      v11 = a3;
LABEL_53:
      VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)v61);
      v24 = v66;
      v17 = v63;
      v15 = v62;
      v21 = v65;
      v18 = v64;
    }
    v13 = a6;
LABEL_57:
    v52 = ++v9;
LABEL_58:
    v8 >>= 1;
    v13 >>= 1;
    a5 = v8;
    a6 = v13;
  }
  while ( v8 );
}
