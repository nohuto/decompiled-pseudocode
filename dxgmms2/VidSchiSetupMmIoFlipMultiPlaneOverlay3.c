/*
 * XREFs of VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C000C820
 * Callers:
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@K@Z @ 0x1C000C470 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_V.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C0010D10 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ?ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAXII@Z @ 0x1C00117E4 (-ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAXII@Z.c)
 *     ?VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x1C0017488 (-VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001BF00 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x1C004A448 (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
unsigned __int64 __fastcall VidSchiSetupMmIoFlipMultiPlaneOverlay3(
        struct _VIDSCH_GLOBAL *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int64 a8)
{
  __int64 *v11; // r10
  __int64 v13; // r11
  int v14; // r9d
  int v15; // ecx
  unsigned int v16; // ebp
  unsigned int v17; // r14d
  char v18; // di
  unsigned int v19; // r12d
  int v20; // edx
  int v21; // r8d
  __int64 v22; // rcx
  unsigned __int64 v23; // r13
  __int64 v24; // rax
  bool v25; // zf
  int v26; // eax
  unsigned int v27; // r9d
  unsigned int v28; // r12d
  __int64 v29; // r8
  unsigned __int64 result; // rax
  __int64 v31; // rax
  unsigned int *v32; // rdi
  __int64 v33; // rcx
  unsigned int v34; // ecx
  char v35; // dl
  unsigned int v36; // ecx
  int v37; // eax
  unsigned int v38; // ecx
  __int64 v39; // r11
  __int64 v40; // r10
  unsigned __int64 v41; // rdx
  __int64 v42; // r9
  unsigned int v43; // eax
  int v44; // ecx
  __int64 v45; // rdx
  int v46; // ecx
  __int64 v47; // rcx
  int v48; // eax
  __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  int v51; // eax
  unsigned int v52; // eax
  char v53; // dl
  int v54; // ecx
  int v55; // r9d
  unsigned int CurrentVSyncPeriodQpc; // eax
  int v57; // edx
  int v58; // ecx
  unsigned int v59; // eax
  unsigned int v60; // eax
  char v61; // dl
  int v62; // eax
  __int64 v63; // rax
  void *v64; // rcx
  unsigned __int64 v65; // rdi
  unsigned __int64 v66; // r9
  __int128 v67; // xmm0
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // rax
  unsigned int v70; // [rsp+28h] [rbp-D0h]
  __int64 *v71; // [rsp+30h] [rbp-C8h]
  __int64 v72; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v73; // [rsp+60h] [rbp-98h]
  __int64 v74; // [rsp+68h] [rbp-90h]
  __int64 v75; // [rsp+70h] [rbp-88h]
  _DWORD v76[4]; // [rsp+78h] [rbp-80h] BYREF
  __int64 v77; // [rsp+88h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-68h] BYREF
  char v79; // [rsp+100h] [rbp+8h]
  unsigned int v80; // [rsp+108h] [rbp+10h]
  unsigned int v82; // [rsp+118h] [rbp+20h]

  v11 = (__int64 *)(a2 + 1176);
  v71 = (__int64 *)(a2 + 1176);
  v13 = *((_QWORD *)a1 + a3 + 400);
  *(_QWORD *)a4 = a1;
  *(_DWORD *)(a4 + 8) = a3;
  v72 = v13;
  v14 = *(_DWORD *)(a4 + 12) ^ (*(_DWORD *)(a2 + 1136) ^ *(_DWORD *)(a4 + 12)) & 1;
  *(_DWORD *)(a4 + 12) = v14;
  v15 = v14 ^ (*(_DWORD *)(a2 + 1136) ^ v14) & 2;
  *(_DWORD *)(a4 + 12) = v15;
  *(_DWORD *)(a4 + 12) = v15 ^ (*(_DWORD *)(a2 + 1136) ^ v15) & 4;
  if ( (*(_DWORD *)(a2 + 1136) & 0x10) != 0 )
  {
    v16 = *(_DWORD *)*v11 & 0x3FF;
    v17 = (*(_DWORD *)*v11 >> 10) & 0x3FF;
  }
  else
  {
    v16 = 1;
    v71 = (__int64 *)(a2 + 1176);
    v17 = ((1 << *((_DWORD *)a1 + 38)) - 1) & 0xFFFFFFFE;
  }
  v18 = 0;
  v19 = 0;
  *(_DWORD *)(a4 + 40) = *(_DWORD *)(a2 + 1140);
  if ( *((_BYTE *)a1 + 6633) )
  {
    v20 = *(_DWORD *)(a2 + 1140);
    if ( !v20 || v20 == *(_DWORD *)(v13 + 82936) )
    {
      v21 = *(_DWORD *)(v13 + 3032);
      if ( v21 )
      {
        if ( (*(_DWORD *)(a2 + 1136) & 0x10) != 0 )
          v55 = ((unsigned __int16)*(_DWORD *)*v11 | (unsigned __int16)(*(_DWORD *)*v11 >> 10)) & 0x3FF;
        else
          v55 = (1 << *((_DWORD *)a1 + 38)) - 1;
        if ( _bittest(&v55, *(_DWORD *)(v13 + 3036)) )
        {
          if ( v21 != v20 )
          {
            v18 = 1;
            CurrentVSyncPeriodQpc = VidSchiGetCurrentVSyncPeriodQpc(a1, a3, 0);
            v11 = v71;
            v19 = CurrentVSyncPeriodQpc;
            v13 = v72;
          }
          *(_DWORD *)(v13 + 3032) = *(_DWORD *)(a2 + 1140);
          goto LABEL_82;
        }
        *(_DWORD *)(a4 + 40) = v21;
      }
    }
    else if ( v16 )
    {
      if ( *(_DWORD *)(v13 + 3032) != v20 )
      {
        v18 = 1;
        v52 = VidSchiGetCurrentVSyncPeriodQpc(a1, a3, 0);
        v11 = v71;
        v19 = v52;
        v13 = v72;
      }
      v53 = -1;
      *(_DWORD *)(v13 + 3032) = *(_DWORD *)(a2 + 1140);
      v25 = !_BitScanForward((unsigned int *)&v54, v16);
      if ( !v25 )
        v53 = v54;
      *(_DWORD *)(v13 + 3036) = v53;
LABEL_82:
      if ( v18 && *((_BYTE *)a1 + 6634) )
      {
        v60 = VidSchiGetCurrentVSyncPeriodQpc(a1, a3, 0);
        VIDSCH_VSYNC_SMOOTHER::ResetSmoother(*(VIDSCH_VSYNC_SMOOTHER **)(v72 + 44248), v19, v60);
        v11 = v71;
        v13 = v72;
      }
    }
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 1136) & 0x10) != 0 )
      v57 = ((unsigned __int16)*(_DWORD *)*v11 | (unsigned __int16)(*(_DWORD *)*v11 >> 10)) & 0x3FF;
    else
      v57 = (1 << *((_DWORD *)a1 + 38)) - 1;
    v58 = *(_DWORD *)(v13 + 3032);
    if ( _bittest(&v57, *(_DWORD *)(v13 + 3036)) )
    {
      if ( v58 != *(_DWORD *)(a2 + 1140) )
      {
        v18 = 1;
        v59 = VidSchiGetCurrentVSyncPeriodQpc(a1, a3, 0);
        v11 = v71;
        v19 = v59;
        v13 = v72;
      }
      *(_DWORD *)(v13 + 3032) = *(_DWORD *)(a2 + 1140);
      *(_DWORD *)(a4 + 40) = *(_DWORD *)(a2 + 1140);
      goto LABEL_82;
    }
    *(_DWORD *)(a4 + 40) = v58;
  }
  v22 = *((_QWORD *)a1 + 2);
  if ( *(_BYTE *)(v22 + 4736) && *(_DWORD *)(v22 + 288) == 1 && v16 )
  {
    v76[0] = a3;
    v76[3] = 0;
    v61 = -1;
    v76[1] = *(_DWORD *)(a4 + 40);
    v25 = !_BitScanForward((unsigned int *)&v62, v16);
    if ( !v25 )
      v61 = v62;
    v76[2] = v61;
    v77 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 1040) + 40LL) + 2648LL);
    ((void (__fastcall *)(__int64, __int64, _DWORD *))DxgCoreInterface[84])(v22, 2LL, v76);
    v11 = v71;
    v13 = v72;
  }
  *(_DWORD *)(a4 + 2120) = -1073741823;
  *(_QWORD *)(a4 + 32) = 0LL;
  v23 = 0LL;
  *(_QWORD *)(a4 + 48) = 0LL;
  *(_DWORD *)(a4 + 20) = 0;
  v24 = *(_QWORD *)(a2 + 1168);
  v73 = 0LL;
  if ( v24 )
  {
    v23 = v24 + 24;
    v73 = v24 + 24 + 16LL * *(unsigned int *)(v24 + 16) - 16;
  }
  v25 = !_BitScanForward((unsigned int *)&v26, v16);
  v79 = 0;
  v27 = 0;
  v80 = 0;
  if ( v25 )
    LOBYTE(v26) = -1;
  v28 = (char)v26;
  v25 = !_BitScanForward((unsigned int *)&v26, v17);
  if ( v25 )
    LOBYTE(v26) = -1;
  v29 = a6;
  result = (unsigned int)(char)v26;
  v82 = result;
  while ( v16 || v17 )
  {
    v31 = v27 * ((8 * *(_DWORD *)(*v11 + 8) + 231) & 0xFFFFFFF8);
    v32 = (unsigned int *)(v31 + *v11 + 16);
    v33 = *(_QWORD *)(v31 + *v11 + 200);
    v75 = v33;
    if ( v33 )
    {
      v32[10] = *(_DWORD *)(v33 + 8);
      *((_QWORD *)v32 + 6) = v33 + 16;
    }
    v34 = v82;
    v35 = 1;
    if ( v28 < v82 || *((_BYTE *)a1 + 59) )
    {
      if ( a5 )
      {
        v32[4] = v32[4] & 0xFFFFFFFD | (2 * a5);
      }
      else if ( *((_BYTE *)a1 + 6632) && (*(_DWORD *)(a2 + 1136) & 0x80u) != 0 )
      {
        v32[4] |= 2u;
      }
      else if ( (*(_DWORD *)(a2 + 1136) & 0x200) != 0 )
      {
        v32[4] |= 0x20u;
      }
      v36 = v32[4];
      v37 = 0;
      if ( (v36 & 0x22) == 0 )
        v37 = 4;
      v32[4] = v37 | v36 & 0xFFFFFFFB;
      v34 = v82;
    }
    if ( v28 >= v34 )
    {
      if ( (*(unsigned __int16 *)(v13 + 44136) & (1 << v34)) != 0 )
      {
        *v32 = v34;
        *((_QWORD *)v32 + 4) = 0LL;
        *((_QWORD *)v32 + 3) = 0LL;
        v32[10] = 0;
        *((_QWORD *)v32 + 6) = 0LL;
      }
      else
      {
        v35 = 0;
        *((_QWORD *)v32 + 1) = 0LL;
      }
      v17 &= ~(1 << v34);
      v25 = !_BitScanForward((unsigned int *)&v51, v17);
      if ( v25 )
        LOBYTE(v51) = -1;
      v11 = v71;
      result = (unsigned int)(char)v51;
      v82 = result;
      if ( !v35 )
        goto LABEL_50;
    }
    else
    {
      v38 = *(_DWORD *)(a2 + 1096);
      v39 = 0LL;
      v32[7] = v38;
      *((_QWORD *)v32 + 4) = v32 + 56;
      if ( v38 )
      {
        do
        {
          v40 = *v11;
          v41 = ((unsigned __int64)(v27 + (_DWORD)v39 * *(_DWORD *)(v40 + 4)) << 6)
              + v40
              + *(_DWORD *)(v40 + 4) * ((8 * *(_DWORD *)(v40 + 8) + 231) & 0xFFFFFFF8);
          v42 = *(_QWORD *)(v41 + 48);
          *(_QWORD *)(v41 + 40) = *(_QWORD *)(*(_QWORD *)(v42 + 96) + 32LL);
          *(_WORD *)(((unsigned __int64)(v80 + (_DWORD)v39 * *(_DWORD *)(v40 + 4)) << 6)
                   + v40
                   + *(_DWORD *)(v40 + 4) * ((8 * *(_DWORD *)(v40 + 8) + 231) & 0xFFFFFFF8)
                   + 32) = *(_WORD *)(*(_QWORD *)(v42 + 96) + 6LL);
          if ( !*(_DWORD *)(*(_QWORD *)(v42 + 96) + 12LL) )
          {
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 281LL, 0x4000LL, v80, (unsigned int)v39, 0LL);
            __debugbreak();
            JUMPOUT(0x1C0026A1DLL);
          }
          v11 = v71;
          v27 = v80;
          *(_QWORD *)(*((_QWORD *)v32 + 4) + 8 * v39) = ((unsigned __int64)(v80 + (_DWORD)v39 * *(_DWORD *)(*v71 + 4)) << 6)
                                                      + *v71
                                                      + *(_DWORD *)(*v71 + 4)
                                                      * ((8 * *(_DWORD *)(*v71 + 8) + 231) & 0xFFFFFFF8)
                                                      + 16LL;
          v39 = (unsigned int)(v39 + 1);
        }
        while ( (unsigned int)v39 < v32[7] );
        v29 = a6;
      }
      v32[4] |= 1u;
      v43 = v32[4];
      *v32 = v28;
      v44 = v43 ^ (*(_DWORD *)(a2 + 1136) ^ v43) & 8;
      v32[4] = v44;
      v32[4] = v44 ^ ((unsigned __int8)v44 ^ (unsigned __int8)(*(_DWORD *)(a2 + 1136) >> 1)) & 0x10;
      v45 = v27 * ((8 * *(_DWORD *)(*v11 + 8) + 231) & 0xFFFFFFF8) + *v11 + 160;
      v46 = v32[14] ^ (*(_DWORD *)(v45 + 28) ^ v32[14]) & 1;
      v32[14] = v46;
      v32[14] = v46 ^ (*(_DWORD *)(v45 + 28) ^ v46) & 2;
      v32[15] = (unsigned __int16)*(_DWORD *)v45;
      v32[16] = (unsigned __int16)*(_DWORD *)(v45 + 4);
      v32[17] = *(unsigned __int16 *)(v45 + 2);
      v32[18] = *(unsigned __int16 *)(v45 + 6);
      v32[19] = *(__int16 *)(v45 + 8);
      v32[20] = *(__int16 *)(v45 + 12);
      v32[21] = *(unsigned __int16 *)(v45 + 10);
      v32[22] = *(unsigned __int16 *)(v45 + 14);
      v32[23] = (unsigned __int16)*(_DWORD *)(v45 + 16);
      v32[24] = (unsigned __int16)*(_DWORD *)(v45 + 20);
      v32[25] = *(unsigned __int16 *)(v45 + 18);
      v32[26] = *(unsigned __int16 *)(v45 + 22);
      if ( v23 && *(_DWORD *)v23 == v28 )
      {
        v32[32] = *(_DWORD *)(v23 + 4);
        *((_QWORD *)v32 + 17) = *(_QWORD *)(v23 + 8);
        if ( v23 < v73 )
          v23 += 16LL;
        else
          v23 = 0LL;
      }
      else
      {
        v32[32] = 1;
        *((_QWORD *)v32 + 17) = v32 + 15;
      }
      v32[27] = ((*(_DWORD *)(v45 + 28) >> 3) & 3) + 1;
      v32[28] ^= (v32[28] ^ (*(_DWORD *)(v45 + 28) >> 2)) & 1;
      v32[29] = *(_DWORD *)(v45 + 24);
      v32[31] = *(_DWORD *)(v45 + 32);
      v47 = *(_QWORD *)(a2 + 1160);
      v74 = v47;
      if ( v47 && (unsigned int)(*(_DWORD *)(a2 + 1052) - 13) > 1 && !v79 )
      {
        v79 = 1;
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v47 + 16), &LockHandle);
        if ( v75 )
          _InterlockedIncrement((volatile signed __int32 *)(v75 + 12));
        v63 = v74;
        v64 = *(void **)(v74 + 8);
        if ( v64 )
        {
          CRefCountedBuffer::RefCountedBufferRelease(v64);
          v63 = v74;
        }
        *(_QWORD *)(v63 + 8) = v75;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v27 = v80;
        v11 = v71;
        v29 = a6;
      }
      v16 &= ~(1 << v28);
      v25 = !_BitScanForward((unsigned int *)&v48, v16);
      if ( v25 )
        LOBYTE(v48) = -1;
      v13 = v72;
      v28 = (char)v48;
    }
    result = *(unsigned int *)(a4 + 20);
    *(_QWORD *)(v29 + 8 * result) = v32;
    ++*(_DWORD *)(a4 + 20);
    if ( (*(_DWORD *)(a2 + 1136) & 0x1000) != 0 )
    {
      if ( !*((_BYTE *)a1 + 59) )
        goto LABEL_50;
      result = VidSchiSetInterruptTargetPresentId(a1, a3, *v32, 0LL, 0, 0);
    }
    else
    {
      ++*(_QWORD *)(v13 + 8LL * *v32 + 3096);
      v49 = *v32;
      v50 = *(_QWORD *)(v13 + 8 * v49 + 3096);
      result = 288 * v49;
      *((_QWORD *)v32 + 1) = v50;
      if ( !*((_BYTE *)a1 + 59) )
        goto LABEL_50;
      v65 = *(_QWORD *)(result + v13 + 424);
      if ( (*(_DWORD *)(a2 + 1136) & 0x80000) != 0 )
      {
        if ( v50 != v65 )
          goto LABEL_50;
        v66 = v50 + 1;
        v70 = 1;
      }
      else
      {
        if ( v50 >= v65 )
          goto LABEL_50;
        v70 = 0;
        v66 = v50;
      }
      result = VidSchiSetInterruptTargetPresentId(a1, a3, v49, v66, 0, v70);
    }
    v27 = v80;
    v11 = v71;
    v13 = v72;
    v29 = a6;
LABEL_50:
    v80 = ++v27;
  }
  if ( (*(_DWORD *)(a2 + 1136) & 0x400) != 0 )
  {
    result = *(unsigned int *)(a2 + 1184);
    *(_DWORD *)a7 = result;
    switch ( (_DWORD)result )
    {
      case 0:
        *(_DWORD *)(a7 + 4) = 0;
        goto LABEL_19;
      case 1:
        result = a2 + 1188;
        *(_DWORD *)(a7 + 4) = 28;
        *(_QWORD *)(a7 + 8) = a2 + 1188;
        break;
      case 2:
        result = a2 + 1188;
        *(_DWORD *)(a7 + 4) = 72;
        *(_QWORD *)(a7 + 8) = a2 + 1188;
        break;
      case 0x8000001:
        *(_QWORD *)a7 = 1LL;
LABEL_19:
        *(_QWORD *)(a7 + 8) = 0LL;
        break;
      case 0x80000002:
        *(_QWORD *)a7 = 2LL;
        goto LABEL_19;
    }
    *(_QWORD *)(a4 + 48) = a7;
  }
  if ( (*(_DWORD *)(a2 + 1136) & 0x800) != 0 )
  {
    result = a8;
    *(_DWORD *)a8 = 0;
    *(_OWORD *)(a8 + 4) = *(_OWORD *)(a2 + 1260);
    v67 = *(_OWORD *)(a2 + 1276);
    *(_DWORD *)(a8 + 36) = 1;
    *(_OWORD *)(a8 + 20) = v67;
    *(_QWORD *)(a4 + 32) = a8;
  }
  if ( *((_BYTE *)a1 + 59) )
  {
    if ( *(_DWORD *)(v13 + 3032) == -1 )
    {
      v68 = *(_QWORD *)(a2 + 1296);
    }
    else
    {
      v69 = VidSchiGetCurrentVSyncPeriodQpc(a1, a3, 1);
      v29 = a6;
      result = v69 >> 1;
      v68 = *(_QWORD *)(a2 + 1296) - result;
    }
    *(_QWORD *)(a4 + 56) = v68;
    *(_QWORD *)(a2 + 1104) = v68;
  }
  *(_QWORD *)(a4 + 24) = v29;
  return result;
}
