/*
 * XREFs of VidSchiSubmitMmIoFlipCommand @ 0x1C000EAF0
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C00BA0C0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C0106CD8 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C0002D40 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00055E0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0006790 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiUpdateContextStatus @ 0x1C0008230 (VidSchiUpdateContextStatus.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000BE30 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C000C340 (-VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VI.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C000F7FC (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     VidSchiRewindPacket @ 0x1C0010730 (VidSchiRewindPacket.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C00183F4 (VidSchiCompletePendingFlipOnPlane.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001A980 (memmove.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001BF00 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001C63A (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x1C0039A94 (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C0039B2C (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     VidSchiRestartQueuedFlip @ 0x1C003C2A4 (VidSchiRestartQueuedFlip.c)
 *     VidSchIsVSyncEnabled @ 0x1C00A5F00 (VidSchIsVSyncEnabled.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiSubmitMmIoFlipCommand(struct _VIDSCH_QUEUE_PACKET *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // rdi
  unsigned int v11; // edi
  unsigned __int64 v12; // rdx
  _BYTE *v13; // r9
  struct _VIDSCH_PRESENT_INFO *v14; // rdi
  int v15; // r11d
  __int64 v16; // r13
  unsigned int v17; // r8d
  bool v18; // zf
  int v19; // eax
  char v20; // cl
  __int64 v21; // r10
  __int64 v22; // r9
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // r10
  int v26; // ecx
  int pHDRMetaData; // edx
  char v28; // al
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rax
  unsigned __int16 v33; // r8
  unsigned int v34; // r8d
  int v35; // eax
  char v36; // cl
  _QWORD *v37; // r9
  int v38; // eax
  _DWORD *v39; // rdi
  bool v40; // al
  int v41; // ecx
  int v42; // ecx
  int v43; // edx
  struct _DXGK_SETVIDPNSOURCEADDRESS_OUTPUT_FLAGS::$D93AAC7AE2348A9430C8E574DBC3F9BA::$C2B83B887FD1D971DFEF2C72BE4CC9E5 Value; // ecx
  int v45; // ecx
  DXGK_MULTIPLANE_OVERLAY_PLANE3 **ppPlanes; // rax
  unsigned int v47; // eax
  __int64 v48; // rdx
  unsigned int i; // ecx
  __int64 v50; // r8
  unsigned int v51; // edi
  _DWORD *v52; // r11
  unsigned int v53; // r9d
  unsigned int v54; // edx
  int v55; // eax
  unsigned int v56; // r8d
  int v57; // eax
  unsigned int v58; // r10d
  _DWORD *v59; // r8
  int v60; // ecx
  int v61; // ecx
  int v62; // ecx
  DXGK_MULTIPLANE_OVERLAY_PLANE3 **v63; // rax
  int pPostComposition_high; // eax
  UINT PlaneCount; // eax
  __int64 v66; // rdx
  unsigned int v67; // r9d
  __int64 v68; // rcx
  bool v69; // dl
  int Duration; // eax
  _DWORD *v71; // rax
  unsigned int v72; // r10d
  int v73; // r8d
  unsigned int v74; // r9d
  unsigned int v75; // eax
  unsigned int v76; // r11d
  int v77; // eax
  unsigned int v78; // r15d
  unsigned __int64 v79; // r8
  unsigned __int64 v80; // rdi
  unsigned int v81; // r9d
  unsigned int v82; // edx
  __int64 v83; // r15
  __int64 v84; // rax
  unsigned int v85; // r10d
  unsigned int v86; // r11d
  bool v87; // cc
  _QWORD *v88; // rax
  _DWORD *v89; // r15
  __int64 v90; // rdx
  __int64 v91; // rdi
  void *v92; // rcx
  unsigned int v93; // ebx
  _QWORD *v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // r8
  unsigned int v98; // ecx
  __int64 v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rcx
  int v102; // eax
  int v103; // ecx
  unsigned int v104; // edx
  int v105; // eax
  unsigned int v106; // r15d
  __int64 v107; // rdx
  int v108; // ecx
  __int64 v109; // rax
  __int64 v110; // r15
  unsigned __int64 v111; // r8
  __int64 v112; // rcx
  __int64 v113; // rax
  __int64 v114; // r15
  __int64 v115; // rdx
  __int64 v116; // rax
  int v117; // eax
  struct _VIDSCH_PRESENT_INFO *v118; // rdx
  char v119; // bl
  int v120; // eax
  unsigned int v121; // edi
  char *v122; // rax
  void (__fastcall *v123)(_QWORD, _QWORD); // rax
  __int64 v124; // rdx
  __int64 v125; // r8
  void (__fastcall *v126)(_QWORD, _QWORD); // rax
  void (__fastcall *v127)(_QWORD, _QWORD); // rax
  char v128; // cl
  __int64 v129; // rax
  int v130; // ecx
  char v131; // cl
  int v132; // eax
  int v133; // eax
  int v134; // ecx
  unsigned int v135; // edx
  unsigned int v136; // r11d
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // r8
  __int64 v140; // rdx
  char v141; // cl
  int v142; // eax
  unsigned int v143; // ecx
  __int64 v144; // rdx
  unsigned __int64 v145; // r9
  unsigned __int64 *v146; // rax
  __int64 v147; // rcx
  __int64 v148; // r9
  __int64 v149; // [rsp+20h] [rbp-E0h]
  unsigned int v150; // [rsp+40h] [rbp-C0h]
  int v151; // [rsp+44h] [rbp-BCh]
  int v152; // [rsp+44h] [rbp-BCh]
  unsigned int v153; // [rsp+48h] [rbp-B8h]
  unsigned int v154; // [rsp+4Ch] [rbp-B4h]
  _QWORD v155[2]; // [rsp+50h] [rbp-B0h] BYREF
  char v156; // [rsp+60h] [rbp-A0h]
  int v157; // [rsp+68h] [rbp-98h]
  __int64 v158; // [rsp+70h] [rbp-90h]
  _DWORD *v159; // [rsp+78h] [rbp-88h]
  struct _VIDSCH_PRESENT_INFO *v160; // [rsp+80h] [rbp-80h]
  unsigned int v161; // [rsp+88h] [rbp-78h]
  int v162; // [rsp+8Ch] [rbp-74h]
  unsigned int v163; // [rsp+90h] [rbp-70h]
  int v164; // [rsp+94h] [rbp-6Ch]
  unsigned __int64 v165; // [rsp+98h] [rbp-68h]
  int v166; // [rsp+A0h] [rbp-60h]
  int v167; // [rsp+A4h] [rbp-5Ch]
  int v168; // [rsp+A8h] [rbp-58h]
  int v169; // [rsp+ACh] [rbp-54h]
  int v170; // [rsp+B0h] [rbp-50h]
  PVOID *v171; // [rsp+B8h] [rbp-48h]
  int v172; // [rsp+C0h] [rbp-40h]
  int v173; // [rsp+C4h] [rbp-3Ch]
  unsigned int v174; // [rsp+C8h] [rbp-38h]
  int v175; // [rsp+CCh] [rbp-34h]
  int v176; // [rsp+D0h] [rbp-30h]
  int v177; // [rsp+D4h] [rbp-2Ch]
  _QWORD *v178; // [rsp+D8h] [rbp-28h]
  __int64 v179; // [rsp+E0h] [rbp-20h]
  _QWORD *v180; // [rsp+E8h] [rbp-18h]
  __int64 v181; // [rsp+F0h] [rbp-10h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+F8h] [rbp-8h] BYREF
  signed __int32 v183; // [rsp+160h] [rbp+60h] BYREF
  char v184; // [rsp+168h] [rbp+68h] BYREF
  char v185; // [rsp+170h] [rbp+70h] BYREF
  KIRQL v186; // [rsp+178h] [rbp+78h]

  v3 = *((_QWORD *)a1 + 11);
  v4 = (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)a1;
  v5 = *((unsigned int *)a1 + 40);
  v150 = v5;
  v6 = (unsigned int)v5;
  v7 = *(_QWORD *)(v3 + 104);
  v158 = v7;
  v8 = *(_QWORD *)(v7 + 32);
  v9 = *(_QWORD *)(v8 + 8 * (v5 + 400));
  v10 = v8 + 8 * (v5 + 400);
  v160 = (struct _VIDSCH_PRESENT_INFO *)v9;
  v180 = (_QWORD *)v10;
  if ( (*(_BYTE *)(v8 + 3036) & 1) != 0
    || *(_DWORD *)(v8 + 3012)
    || *(_BYTE *)(v7 + 204)
    || (a2 = 0LL, _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 200), 0, 0)) )
  {
    do
      v4 = VidSchiProcessCompletedQueuePacketInternal((struct _VIDSCH_QUEUE_PACKET *)v4, a2, a3);
    while ( v4 );
    return;
  }
  if ( (*(_DWORD *)(v7 + 48) & 2) != 0 || (int)v4[8].OutputFlags.Value >= 4 || *(_BYTE *)(v8 + 156) )
    VidSchIsVSyncEnabled((struct _VIDSCH_GLOBAL *)v8, v5);
  v11 = *(_DWORD *)(*(_QWORD *)v10 + 44328LL);
  if ( v11 != -1 )
  {
    v123 = *(void (__fastcall **)(_QWORD, _QWORD))(v8 + 3056);
    if ( v123 )
      v123(*(_QWORD *)(v8 + 3120), v11);
  }
  v186 = KfRaiseIrql(2u);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1728), &LockHandle);
  v156 = 0;
  v155[1] = v155;
  v155[0] = v155;
  if ( ((__int64)v4[1].ppPlanes & 0x20) != 0 )
  {
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v155);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(v186);
    do
      v4 = VidSchiProcessCompletedQueuePacketInternal((struct _VIDSCH_QUEUE_PACKET *)v4, v124, v125);
    while ( v4 );
    if ( v11 != -1 )
    {
      v126 = *(void (__fastcall **)(_QWORD, _QWORD))(v8 + 3072);
      if ( v126 )
        v126(*(_QWORD *)(v8 + 3120), v11);
    }
    if ( v156 )
      return;
LABEL_176:
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v155);
    return;
  }
  v12 = (unsigned __int64)v4[8].ppPlanes - *(_QWORD *)(v7 + 8 * (v6 + 47));
  v13 = (_BYTE *)(v7 + 8 * (v6 + 47));
  v178 = v13;
  if ( v12 > (unsigned int)(64 - *(_DWORD *)(v9 + 3076)) )
  {
    VidSchiRewindPacket(v4, 1LL, 1LL, 1LL);
    VidSchiUpdateContextStatus(v3, 3LL, 3246);
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v155);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(v186);
    if ( v11 != -1 )
    {
      v127 = *(void (__fastcall **)(_QWORD, _QWORD))(v8 + 3072);
      if ( v127 )
        v127(*(_QWORD *)(v8 + 3120), v11);
    }
    if ( v156 )
      return;
    goto LABEL_176;
  }
  LOBYTE(v183) = 0;
  v14 = (struct _VIDSCH_PRESENT_INFO *)v9;
  if ( *(_DWORD *)(v9 + 4) == 3 || !v4[8].PlaneCount && (v4[5].Duration & 0x10000000) != 0 )
  {
    v15 = 1;
    v179 = 1LL;
  }
  else
  {
    v15 = 0;
    v179 = 0LL;
  }
  v16 = *(_QWORD *)(v9 + 32);
  v151 = v15;
  if ( ((__int64)v4[1].pPostComposition & 0x800000) != 0 )
    v17 = ((unsigned __int16)*(_DWORD *)&v4[18].OutputFlags.0 | (unsigned __int16)(v4[18].OutputFlags.Value >> 10)) & 0x3FF;
  else
    v17 = (1 << *(_DWORD *)(v8 + 152)) - 1;
  v18 = !_BitScanForward((unsigned int *)&v19, v17);
  v20 = -1;
  v166 = v19;
  if ( !v18 )
    v20 = v19;
  if ( v17 )
  {
    v21 = *(_QWORD *)(v8 + 8 * v6 + 3200);
    while ( 1 )
    {
      v22 = (unsigned int)v20;
      v23 = *(int *)(288 * v22 + v21 + 188);
      if ( (int)v23 > -1 && *(_DWORD *)(160 * v23 + *(_QWORD *)(v8 + 3328) + 112) == 2 )
        break;
      v20 = -1;
      v17 &= ~(1 << v22);
      v18 = !_BitScanForward((unsigned int *)&v24, v17);
      v167 = v24;
      if ( !v18 )
        v20 = v24;
      if ( !v17 )
      {
        v13 = v178;
        goto LABEL_25;
      }
    }
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 0x100000LL, v20, v6, v8);
    __debugbreak();
  }
  else
  {
LABEL_25:
    v25 = v158;
    if ( !*(_BYTE *)(*(_QWORD *)(v158 + 40) + 2632LL) )
      goto LABEL_27;
    v26 = *((_DWORD *)v14 + 20733);
    pHDRMetaData = (int)v4[8].pHDRMetaData;
    if ( v26 == pHDRMetaData )
      goto LABEL_27;
  }
  if ( !*(_BYTE *)(*(_QWORD *)(v8 + 16) + 2890LL) )
  {
    if ( (byte_1C00769C4 & 1) != 0 )
    {
      McTemplateK0qqqqq_EtwWriteTransfer(
        v26,
        (unsigned int)&EventBoostUnboostRefreshRate,
        v17,
        v6,
        *((_DWORD *)v14 + 758),
        v26,
        v4[8].Duration,
        pHDRMetaData);
      v25 = v158;
      v15 = v151;
      v13 = v178;
    }
    *((_DWORD *)v14 + 20733) = v4[8].pHDRMetaData;
  }
LABEL_27:
  v28 = LOBYTE(v4[8].ppPlanes) - *v13 + *(_DWORD *)(v16 + 56);
  v164 = LODWORD(v4[8].ppPlanes) - *(_DWORD *)v13;
  v29 = *(_QWORD *)(v8 + 632);
  v30 = v28 & 0x3F;
  v153 = v30;
  v31 = v16 + 1384 * v30;
  v165 = v31 + 120;
  v32 = *(unsigned int *)(v3 + 88);
  if ( (unsigned int)v32 < *(_DWORD *)(v8 + 704) )
    v29 += 8 * v32;
  v33 = *(_WORD *)(*(_QWORD *)v29 + 6LL);
  v154 = v33;
  if ( *(_DWORD *)(v31 + 1172) == 8 )
  {
    v66 = v31 + 1160;
    *(_QWORD *)(v31 + 8LL * *(unsigned int *)(v31 + 1212) + 120) = v3;
    *(_QWORD *)(v31 + 8LL * *(unsigned int *)(v31 + 1212) + 640) = *(_QWORD *)(v3 + 152);
    v128 = v33;
    v129 = *(_QWORD *)(v3 + 104);
    v59 = (_DWORD *)(v31 + 1256);
    ++*(_DWORD *)(v31 + 1212);
    *(_QWORD *)(v31 + 1160) = v129;
    ++*(_DWORD *)(v3 + 792);
    *(_DWORD *)(v31 + 1204) |= 1 << v128;
  }
  else
  {
    ++*(_DWORD *)(v8 + 804);
    ++*(_DWORD *)(v25 + 1576);
    ++*(_DWORD *)(v3 + 792);
    ++*((_DWORD *)v14 + 769);
    if ( (v4[5].Duration & 0x800000) != 0 )
      v34 = ((unsigned __int16)*(_DWORD *)&v4[18].OutputFlags.0 | (unsigned __int16)(v4[18].OutputFlags.Value >> 10)) & 0x3FF;
    else
      v34 = (1 << *(_DWORD *)(v8 + 152)) - 1;
    v18 = !_BitScanForward((unsigned int *)&v35, v34);
    v36 = -1;
    v168 = v35;
    if ( !v18 )
      v36 = v35;
    if ( v34 )
    {
      v37 = v180;
      do
      {
        ++*(_DWORD *)(288LL * v36 + *v37 + 196);
        v38 = 1 << v36;
        v36 = -1;
        v34 &= ~v38;
        v18 = !_BitScanForward((unsigned int *)&v38, v34);
        v169 = v38;
        if ( !v18 )
          v36 = v38;
      }
      while ( v34 );
    }
    v39 = *(_DWORD **)(v31 + 1296);
    memset((void *)(v31 + 120), 0, 0x498uLL);
    memset((void *)(v31 + 1304), 0, 0xC8uLL);
    *(_QWORD *)(v31 + 1296) = v39;
    memset(v39 + 4, 0, v39[1] * ((v39[2] << 6) + ((8 * v39[2] + 231) & 0xFFFFFFF8)));
    *(_QWORD *)(v31 + 120) = v3;
    *(_QWORD *)(v31 + 1160) = *(_QWORD *)(v3 + 104);
    *(_DWORD *)(v31 + 1168) = v4[2].ppPlanes;
    *(_DWORD *)(v31 + 1176) = v4[8].VidPnSourceId;
    *(_QWORD *)(v31 + 640) = *(_QWORD *)(v3 + 152);
    v40 = (v4[5].Duration & 0x10) != 0;
    v159 = (_DWORD *)(v31 + 1256);
    *(_BYTE *)(v31 + 1196) = v40;
    v41 = *(_DWORD *)(v31 + 1256) ^ (*(_DWORD *)(v31 + 1256) ^ (LODWORD(v4[1].pPostComposition) >> 19)) & 0x10;
    *(_DWORD *)(v31 + 1256) = v41;
    v42 = ((unsigned __int16)v41 ^ (v4[5].Duration >> 20)) & 0x400 ^ v41;
    *(_DWORD *)(v31 + 1256) = v42;
    v18 = v164 == 0;
    *(_DWORD *)(v31 + 1256) = v42 ^ ((unsigned __int16)v42 ^ (v4[5].Duration >> 20)) & 0x800;
    if ( v18 )
      *(_QWORD *)(v31 + 1184) = ++*(_QWORD *)(v16 + 88);
    v43 = *(_DWORD *)(v31 + 1256);
    Value = (struct _DXGK_SETVIDPNSOURCEADDRESS_OUTPUT_FLAGS::$D93AAC7AE2348A9430C8E574DBC3F9BA::$C2B83B887FD1D971DFEF2C72BE4CC9E5)v4[13].OutputFlags.Value;
    *(struct _DXGK_SETVIDPNSOURCEADDRESS_OUTPUT_FLAGS::$D93AAC7AE2348A9430C8E574DBC3F9BA::$C2B83B887FD1D971DFEF2C72BE4CC9E5 *)(v31 + 1304) = Value;
    if ( (v43 & 0x400) != 0 )
    {
      v45 = *(_DWORD *)&Value - 1;
      if ( v45 )
      {
        if ( v45 == 1 )
        {
          *(_OWORD *)(v31 + 1308) = *(_OWORD *)&v4[13].PlaneCount;
          *(_OWORD *)(v31 + 1324) = *(_OWORD *)((char *)&v4[13].pPostComposition + 4);
          *(_OWORD *)(v31 + 1340) = *(_OWORD *)((char *)&v4[13].pHDRMetaData + 4);
          *(_OWORD *)(v31 + 1356) = *(_OWORD *)&v4[14].PlaneCount;
          *(_QWORD *)(v31 + 1372) = *(DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION **)((char *)&v4[14].pPostComposition + 4);
        }
      }
      else
      {
        *(_OWORD *)(v31 + 1308) = *(_OWORD *)&v4[13].PlaneCount;
        *(_QWORD *)(v31 + 1324) = *(DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION **)((char *)&v4[13].pPostComposition + 4);
        *(_DWORD *)(v31 + 1332) = *(&v4[13].Duration + 1);
      }
    }
    if ( (v43 & 0x800) != 0 )
    {
      *(_OWORD *)(v31 + 1380) = *(_OWORD *)(&v4[14].Duration + 1);
      *(_OWORD *)(v31 + 1396) = *(_OWORD *)&v4[15].InputFlags.0;
    }
    ppPlanes = v4[17].ppPlanes;
    if ( ppPlanes )
    {
      *(_QWORD *)(v31 + 1456) = ppPlanes;
      *(_DWORD *)(v31 + 1464) = v4[17].pPostComposition;
      *(_QWORD *)(v31 + 1472) = *(_QWORD *)&v4[17].Duration;
      *(_QWORD *)(v31 + 1480) = v4[17].pHDRMetaData;
      *(_QWORD *)(v31 + 1488) = *(_QWORD *)&v4[18].VidPnSourceId;
      v130 = *(_DWORD *)(v31 + 1496) ^ (*(_DWORD *)(v31 + 1496) ^ (*(&v4[5].Duration + 1) >> 5)) & 1;
      *(_DWORD *)(v31 + 1496) = v130;
      *(_DWORD *)(v31 + 1496) = v130 ^ ((unsigned __int8)v130 ^ (unsigned __int8)(*(&v4[5].Duration + 1) >> 3)) & 2;
    }
    memmove(*(void **)(v31 + 1296), &v4[18].OutputFlags, HIDWORD(v4[18].ppPlanes));
    v47 = *(_DWORD *)(v8 + 152);
    v48 = *(_QWORD *)(v31 + 1296);
    for ( i = 0; i < v47; ++i )
    {
      v50 = *(_QWORD *)(i * ((8 * *(_DWORD *)(v48 + 8) + 231) & 0xFFFFFFF8) + v48 + 200);
      if ( v50 )
        _InterlockedIncrement((volatile signed __int32 *)(v50 + 12));
      v47 = *(_DWORD *)(v8 + 152);
    }
    v51 = 0;
    if ( v47 )
    {
      do
      {
        v171 = (PVOID *)((char *)&v4[22].ppPlanes + v51 * ((8 * LODWORD(v4[18].ppPlanes) + 231) & 0xFFFFFFF8));
        if ( *v171 )
        {
          CRefCountedBuffer::RefCountedBufferRelease(*v171);
          *v171 = 0LL;
        }
        ++v51;
      }
      while ( v51 < *(_DWORD *)(v8 + 152) );
    }
    v52 = *(_DWORD **)(v31 + 1296);
    v53 = 0;
    v54 = *v52 & 0x3FF;
    if ( *(_BYTE *)(v8 + 156) )
      v53 = (*v52 >> 10) & 0x3FF;
    v18 = !_BitScanForward((unsigned int *)&v55, v54);
    v170 = v55;
    if ( v18 )
      LOBYTE(v55) = -1;
    v56 = (char)v55;
    v18 = !_BitScanForward((unsigned int *)&v55, v53);
    LODWORD(v171) = v57;
    if ( v18 )
      LOBYTE(v55) = -1;
    v58 = (char)v55;
    while ( v54 || v53 )
    {
      v98 = v58;
      if ( v56 < v58 )
        v98 = v56;
      v99 = v98 * ((8 * v52[2] + 231) & 0xFFFFFFF8);
      v100 = *(_QWORD *)((char *)v52 + v99 + 208);
      if ( v100 )
        _InterlockedIncrement((volatile signed __int32 *)(v100 + 36));
      v101 = *(_QWORD *)((char *)v52 + v99 + 224);
      if ( v101 )
        _InterlockedIncrement((volatile signed __int32 *)(v101 + 36));
      if ( v56 >= v58 )
      {
        v131 = -1;
        v53 &= ~(1 << v58);
        v18 = !_BitScanForward((unsigned int *)&v132, v53);
        v173 = v132;
        if ( !v18 )
          v131 = v132;
        v58 = v131;
      }
      else
      {
        v54 &= ~(1 << v56);
        v18 = !_BitScanForward((unsigned int *)&v102, v54);
        v172 = v102;
        if ( v18 )
          LOBYTE(v102) = -1;
        v56 = (char)v102;
      }
    }
    v59 = (_DWORD *)(v31 + 1256);
    *(_DWORD *)(v31 + 1200) = v4[8].pPostComposition;
    *(_DWORD *)(v31 + 1204) = 1 << v154;
    v60 = *(_DWORD *)(v31 + 1256) ^ (*(_DWORD *)(v31 + 1256) ^ (v4[5].Duration >> 19)) & 1;
    *(_DWORD *)(v31 + 1256) = v60;
    v61 = ((unsigned __int8)v60 ^ (unsigned __int8)(v4[5].Duration >> 19)) & 2 ^ v60;
    *(_DWORD *)(v31 + 1256) = v61;
    v62 = ((unsigned __int8)v61 ^ (unsigned __int8)(v4[5].Duration >> 19)) & 4 ^ v61;
    *(_DWORD *)(v31 + 1256) = v62;
    *(_DWORD *)(v31 + 1256) = v62 ^ ((unsigned __int8)v62 ^ (unsigned __int8)(v4[5].Duration >> 19)) & 8;
    *(_QWORD *)(v31 + 1280) = *(_QWORD *)&v4[6].OutputFlags.0;
    v63 = v4[6].ppPlanes;
    *(_QWORD *)(v31 + 1288) = v63;
    if ( v63 )
      _InterlockedIncrement((volatile signed __int32 *)v63 + 3);
    v18 = (v4[5].Duration & 0x400) == 0;
    *(_DWORD *)(v31 + 1212) = 1;
    if ( v18 )
    {
      *(_DWORD *)(v31 + 1208) = 1;
      pPostComposition_high = 1;
    }
    else
    {
      *(_DWORD *)(v31 + 1208) = HIDWORD(v4[8].pPostComposition);
      pPostComposition_high = HIDWORD(v4[8].pPostComposition);
    }
    v15 = v151;
    *(_DWORD *)(v31 + 1216) = pPostComposition_high;
    if ( *(_BYTE *)(v31 + 1196) || v151 )
    {
      v14 = v160;
      v66 = v31 + 1160;
      v25 = v158;
      *(_DWORD *)(v31 + 1192) = 0;
      v134 = *v59 ^ (*v59 ^ (v4[5].Duration >> 21)) & 0x80;
      *v59 = v134;
      *v59 = v134 ^ ((unsigned __int16)v134 ^ (v4[5].Duration >> 20)) & 0x100;
    }
    else
    {
      PlaneCount = v4[8].PlaneCount;
      v66 = v31 + 1160;
      v14 = v160;
      v25 = v158;
      if ( !PlaneCount )
      {
        v133 = *v59 | 0x80;
        *(_DWORD *)(v31 + 1192) = 0;
        *v59 = v133 & 0xFFFFFEFF;
        goto LABEL_75;
      }
      *(_DWORD *)(v31 + 1192) = PlaneCount;
    }
  }
  v159 = v59;
LABEL_75:
  v67 = *(_DWORD *)(v31 + 1440);
  if ( !v67 )
  {
    *(_DWORD *)(v31 + 1440) = 1;
    v67 = 1;
  }
  v68 = *(_QWORD *)(*(_QWORD *)v66 + 40LL);
  if ( !*(_BYTE *)(*(_QWORD *)(v68 + 16) + 138LL) )
  {
    v135 = *((_DWORD *)v14 + 20733);
    if ( v67 != v135 && (*v59 & 0x100) == 0 && *((_DWORD *)v14 + 1) != 3 )
    {
      v136 = *(_DWORD *)(v31 + 1192);
      if ( v67 >= v135 )
      {
        LOBYTE(v135) = v136 / v67;
        *(_DWORD *)(v31 + 1192) = v136 / v67;
      }
      else
      {
        if ( v136 )
          v135 *= v136;
        *(_DWORD *)(v31 + 1192) = v135;
      }
      if ( (byte_1C00769C4 & 1) != 0 )
      {
        McTemplateK0qqqq_EtwWriteTransfer(
          v68,
          (unsigned int)&EventVirtualizeFlipSubmissionRate,
          (_DWORD)v59,
          v67,
          *((_DWORD *)v14 + 20733),
          v136,
          v135);
        v59 = v159;
        v25 = v158;
      }
      v15 = v151;
    }
  }
  v69 = 0;
  *(_DWORD *)(v31 + 1440) = *((_DWORD *)v14 + 20733);
  if ( (*((_DWORD *)v14 + 20737) & 1) != 0 )
  {
    v137 = *(_QWORD *)(v25 + 40);
    if ( *(_BYTE *)(v137 + 2632) || *(_BYTE *)(*(_QWORD *)(v137 + 16) + 137LL) )
    {
      if ( (*v59 & 0x80u) != 0 || v15 )
        v69 = (**(_DWORD **)(v31 + 1296) & 0x3FF) != 0;
      if ( (*v59 & 0x180) == 0x80 )
        *v59 |= 0x200u;
    }
  }
  Duration = v4[8].Duration;
  if ( !Duration )
  {
    if ( v69 )
      Duration = -1;
    else
      Duration = *((_DWORD *)v14 + 20734);
  }
  *(_DWORD *)(v31 + 1260) = Duration;
  if ( (v4[5].Duration & 0x800) != 0 )
    *(_BYTE *)(v31 + 1197) = 1;
  v71 = *(_DWORD **)(v31 + 1296);
  v72 = 0;
  v73 = 0;
  v152 = 0;
  v74 = *v71 & 0x3FF;
  if ( *(_BYTE *)(v8 + 156) )
    v72 = (*v71 >> 10) & 0x3FF;
  v18 = !_BitScanForward(&v75, v74);
  v174 = v75;
  if ( v18 )
    LOBYTE(v75) = -1;
  v76 = (char)v75;
  v18 = !_BitScanForward(&v75, v72);
  v175 = v77;
  if ( v18 )
    LOBYTE(v75) = -1;
  v75 = (char)v75;
  v163 = (char)v75;
  while ( v74 || v72 )
  {
    if ( v76 >= v75 )
    {
      v141 = -1;
      v72 &= ~(1 << v75);
      v18 = !_BitScanForward(&v75, v72);
      v177 = v142;
      if ( !v18 )
        v141 = v75;
      v75 = v141;
      v163 = v141;
      goto LABEL_140;
    }
    v103 = *(_DWORD *)(v31 + 1200);
    v104 = 0;
    v105 = 1;
    v157 = 0;
    v106 = v154;
    v162 = 1;
    v161 = 0;
    LODWORD(v159) = v103;
    while ( (v103 & v105) == 0 )
    {
LABEL_217:
      ++v104;
      v105 *= 2;
      v161 = v104;
      v162 = v105;
      if ( v104 > v106 )
        goto LABEL_137;
    }
    v107 = *(_QWORD *)(v31 + 1296);
    v108 = *(_DWORD *)(v107 + 4);
    v109 = v108 * ((8 * *(_DWORD *)(v107 + 8) + 231) & 0xFFFFFFF8);
    v110 = (unsigned int)v109;
    v111 = (unsigned __int64)(unsigned int)(v157 * v108 + v73) << 6;
    v181 = v107 + v111 + v109;
    v112 = *(_QWORD *)(v181 + 48);
    if ( ((*(_DWORD *)(v112 + 32) >> 2) & 0x3F) != v154 )
    {
      ++v157;
      v105 = v162;
      v103 = (int)v159;
      v73 = v152;
      v104 = v161;
      v106 = v154;
      goto LABEL_217;
    }
    v113 = *(_QWORD *)(v112 + 96);
    v114 = v107 + v111 + v110;
    v115 = *(_QWORD *)(v113 + 24);
    if ( v115 )
    {
      *(_QWORD *)(v181 + 64) = ++*(_QWORD *)(v115 + 16);
      v138 = *(_QWORD *)(*(_QWORD *)(v112 + 96) + 24LL);
      *(_QWORD *)(v114 + 72) = ++*(_QWORD *)(v138 + 24);
      v139 = *(_QWORD *)(*(_QWORD *)(v112 + 96) + 24LL);
      v140 = 2LL * *(unsigned int *)(v139 + 32);
      *(_OWORD *)(v139 + 8 * v140 + 40) = 0LL;
      *(_DWORD *)(v139 + 32) = ((unsigned __int8)*(_DWORD *)(v139 + 32) + 1) & 7;
      *(_DWORD *)(v139 + 8 * v140 + 40) = 0;
      *(_QWORD *)(v139 + 8 * v140 + 48) = *(_QWORD *)(v114 + 72);
      v73 = v152;
    }
    else
    {
      v116 = *(_QWORD *)(v113 + 16);
      v73 = v152;
      if ( v116 )
        _InterlockedIncrement((volatile signed __int32 *)(v116 + 8));
    }
LABEL_137:
    v74 &= ~(1 << v76);
    v18 = !_BitScanForward((unsigned int *)&v117, v74);
    v176 = v117;
    if ( v18 )
      LOBYTE(v117) = -1;
    v76 = (char)v117;
    v75 = v163;
LABEL_140:
    v152 = ++v73;
  }
  if ( *(_DWORD *)(v31 + 1208) > *(_DWORD *)(v31 + 1212) )
  {
    *(_DWORD *)(v31 + 1172) = 8;
  }
  else
  {
    if ( !v164 )
    {
      v78 = v153;
      v79 = v31 + 120;
      while ( 1 )
      {
        *(_DWORD *)(v16 + 56) = ((_BYTE)v78 + 1) & 0x3F;
        ++*v178;
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 808));
        _InterlockedIncrement((volatile signed __int32 *)v14 + 770);
        if ( *(_DWORD *)(v79 + 1052) == 7 )
          *(_QWORD *)(v79 + 1064) = ++*(_QWORD *)(v16 + 88);
        v80 = *(_QWORD *)(v79 + 1040);
        if ( !*(_BYTE *)(v80 + 204) )
        {
          v81 = 0;
          if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v80 + 200), 0, 0) )
          {
            v82 = *(_DWORD *)(v79 + 1092);
            if ( (*(_DWORD *)(v79 + 1136) & 0x4000) != 0 )
            {
              v143 = 0;
              if ( v82 )
              {
                do
                {
                  v144 = *(_QWORD *)(v79 + 8LL * v143);
                  v145 = *(_QWORD *)(v79 + 8LL * v143 + 512);
                  if ( !*(_BYTE *)(v144 + 28) )
                  {
                    v146 = *(unsigned __int64 **)(v144 + 64);
                    if ( *(_BYTE *)(v144 + 29) )
                    {
                      if ( *v146 < v145 )
                        goto LABEL_106;
                    }
                    else if ( *(_DWORD *)v146 - (int)v145 < 0 )
                    {
                      goto LABEL_106;
                    }
                  }
                  ++v143;
                }
                while ( v143 < *(_DWORD *)(v79 + 1092) );
              }
            }
            else if ( v82 )
            {
              v83 = *(_QWORD *)(v79 + 8LL * (v82 - 1));
              while ( 1 )
              {
                v84 = *(_QWORD *)(v79 + 8LL * v81);
                if ( v84 )
                {
                  v85 = *(_DWORD *)(v79 + 8LL * v81 + 524);
                  v86 = *(_DWORD *)(v84 + 164);
                  v87 = v85 <= v86;
                  if ( v85 == v86 )
                  {
                    if ( *(_DWORD *)(v79 + 8LL * v81 + 520) > *(_DWORD *)(v84 + 160) )
                      break;
                    v87 = v85 <= v86;
                  }
                  if ( !v87 )
                    break;
                }
                if ( ++v81 >= v82 )
                {
                  if ( v83 )
                  {
                    VidSchiUpdateLastCompletedPresentTimestamp(v83, 1LL, 0);
                    v79 = v31 + 120;
                  }
                  v78 = v153;
                  goto LABEL_149;
                }
              }
LABEL_106:
              v88 = v180;
              *(_DWORD *)(v79 + 1052) = 1;
              v89 = (_DWORD *)*v88;
              v90 = *(unsigned int *)(*v88 + 144LL);
              v91 = *(_QWORD *)(*v88 + 136LL) + 112 * v90;
              *(_DWORD *)(*v88 + 144LL) = (v90 + 1) & (*(_DWORD *)(*v88 + 128LL) - 1);
              v92 = *(void **)(v91 + 72);
              if ( v92 )
                memset(v92, 0, 8LL * *(unsigned int *)(v8 + 152));
              *(_DWORD *)v91 = 0;
              *(_DWORD *)(v91 + 16) = **(_DWORD **)(v31 + 1296) & 0x3FF;
              *(_DWORD *)(v91 + 20) = (**(_DWORD **)(v31 + 1296) >> 10) & 0x3FF;
              *(_BYTE *)(v91 + 24) = *(_BYTE *)(v16 + 80);
              *(_DWORD *)(v91 + 28) = v153;
              *(LARGE_INTEGER *)(v91 + 8) = KeQueryPerformanceCounter(0LL);
              *(_BYTE *)(v91 + 36) = (*(_DWORD *)(v31 + 1256) & 0x20) != 0;
              *(_DWORD *)(v91 + 40) = *(_DWORD *)(v31 + 1172);
              *(_DWORD *)(v91 + 32) = *(_DWORD *)(v31 + 1176);
              *(_DWORD *)(v91 + 44) = *(_DWORD *)(v31 + 1260);
              *(_DWORD *)(v91 + 48) = v89[758];
              *(_QWORD *)(v91 + 56) = *(_QWORD *)(v31 + 1416);
              *(_QWORD *)(v91 + 64) = *(_QWORD *)(v31 + 1424);
              *(_DWORD *)(v91 + 84) = v89[773];
              *(_DWORD *)(v91 + 80) = v89[772];
              *(_DWORD *)(v91 + 88) = *(_DWORD *)(v16 + 56);
              *(_DWORD *)(v91 + 92) = *(_DWORD *)(v16 + 60);
              *(_DWORD *)(v91 + 96) = *(_DWORD *)(v16 + 64);
              *(_DWORD *)(v91 + 100) = *(_DWORD *)(v16 + 68);
              *(_DWORD *)(v91 + 104) = *(_DWORD *)(v16 + 72);
              *(_DWORD *)(v91 + 108) = *(_DWORD *)(v16 + 76);
              goto LABEL_109;
            }
LABEL_149:
            if ( (*(_DWORD *)(v79 + 1136) & 0x8000) != 0 )
            {
              v147 = *(_QWORD *)(v80 + 32);
              if ( *(_BYTE *)(v147 + 56) )
              {
                ((void (__fastcall *)(_QWORD))DxgCoreInterface[23])(*(_QWORD *)(v147 + 8));
                v79 = v31 + 120;
              }
            }
          }
        }
        v118 = v160;
        if ( !*((_BYTE *)v160 + 78788) )
          goto LABEL_106;
        v18 = v179 == 0;
        v119 = 1;
        *(_DWORD *)(v79 + 1052) = 2;
        v120 = *(_DWORD *)(v16 + 64);
        if ( v18 )
          break;
        if ( v78 != v120 )
          goto LABEL_164;
        if ( *(_BYTE *)(v8 + 156) )
        {
          if ( VidSchiCheckPendingFlipsForThisEntry(
                 (struct _VIDSCH_GLOBAL *)v8,
                 v118,
                 v79,
                 (struct VIDSCH_FLIP_QUEUE *)v16) )
          {
            if ( !*(_BYTE *)(v8 + 59) )
              *(_QWORD *)(v165 + 1104) = MEMORY[0xFFFFF78000000320];
            goto LABEL_164;
          }
          v79 = v165;
        }
        v121 = v150;
        *(_DWORD *)(v79 + 1052) = 4;
        v184 = 0;
        LODWORD(v149) = v78;
        v119 = 0;
        VidSchiUpdateFlipQueueHistory(0LL, v8, v150, v16, v149);
        VidSchiExecuteMmIoFlip((__int64)v155, v8, v150, v16, v78, &v183, &v184);
        if ( v184 )
        {
          v122 = &v184;
          goto LABEL_244;
        }
LABEL_159:
        if ( *(_DWORD *)(1384LL * *(unsigned int *)(v16 + 60) + v16 + 1172) != 1 )
          *(_DWORD *)(v16 + 60) = *(_DWORD *)(v16 + 56);
        if ( v119 )
        {
          LODWORD(v149) = v78;
          VidSchiUpdateFlipQueueHistory(0LL, v8, v121, v16, v149);
        }
LABEL_109:
        v153 = *(_DWORD *)(v16 + 56);
        v78 = v153;
        v31 = v16 + 1384LL * v153;
        v79 = v31 + 120;
        v18 = *(_DWORD *)(v31 + 1172) == 7;
        v165 = v31 + 120;
        if ( !v18 )
        {
          v93 = v150;
          goto LABEL_111;
        }
        v14 = v160;
      }
      if ( v78 != v120 && !*(_BYTE *)(v79 + 1076) )
      {
        v148 = ((_BYTE)v78 - 1) & 0x3F;
        if ( (*(_DWORD *)(1384 * v148 + v16 + 1256) & 0x20) == 0 )
          goto LABEL_164;
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 0x100000LL, v148, v16, v8);
        __debugbreak();
        goto LABEL_248;
      }
      if ( !*(_BYTE *)(v8 + 59) )
        *(_QWORD *)(v79 + 1104) = MEMORY[0xFFFFF78000000320];
      if ( VidSchiCheckPendingFlipsForThisEntry((struct _VIDSCH_GLOBAL *)v8, v118, v79, (struct VIDSCH_FLIP_QUEUE *)v16) )
        goto LABEL_164;
      v80 = v165;
      if ( *(_BYTE *)(v165 + 1076) )
      {
LABEL_248:
        LODWORD(v149) = v78;
        VidSchiRestartQueuedFlip(v155, v158, v150, v16, v149);
      }
      if ( *(_DWORD *)(v16 + 112) )
      {
        *(_DWORD *)(v80 + 1052) = 3;
LABEL_164:
        v121 = v150;
        goto LABEL_159;
      }
      *(_DWORD *)(v80 + 1052) = 4;
      v121 = v150;
      v185 = 0;
      LODWORD(v149) = v78;
      v119 = 0;
      VidSchiUpdateFlipQueueHistory(0LL, v8, v150, v16, v149);
      VidSchiExecuteMmIoFlip((__int64)v155, v8, v150, v16, v78, &v183, &v185);
      if ( v185 )
      {
        v122 = &v185;
LABEL_244:
        VidSchiExecuteMmIoFlip((__int64)v155, v8, v121, v16, v78, &v183, v122);
        goto LABEL_159;
      }
      goto LABEL_159;
    }
    *(_DWORD *)(v31 + 1172) = 7;
  }
  v93 = v150;
  LODWORD(v149) = v153;
  VidSchiUpdateFlipQueueHistory(0LL, v8, v150, v16, v149);
LABEL_111:
  LODWORD(v4[1].ppPlanes) |= 2u;
  if ( (_BYTE)v183 )
    VidSchiCompletePendingFlipOnPlane((unsigned int)v155, v8, v93, v16, 9);
  while ( 1 )
  {
    v94 = (_QWORD *)v155[0];
    if ( *(_QWORD **)(v155[0] + 8LL) != v155
      || (v95 = *(_QWORD *)v155[0], *(_QWORD *)(*(_QWORD *)v155[0] + 8LL) != v155[0]) )
    {
      __fastfail(3u);
    }
    v155[0] = *(_QWORD *)v155[0];
    *(_QWORD *)(v95 + 8) = v155;
    if ( v94 == v155 )
      break;
    *v94 = 0LL;
    v94[1] = 0LL;
    HwQueueStagingList::ProcessHwQueue((HwQueueStagingList *)v155, (struct VIDSCH_HW_QUEUE *)(v94 - 22));
  }
  v156 = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  do
    v4 = VidSchiProcessCompletedQueuePacketInternal((struct _VIDSCH_QUEUE_PACKET *)v4, v96, v97);
  while ( v4 );
  KeLowerIrql(v186);
  if ( !v156 )
    goto LABEL_176;
}
