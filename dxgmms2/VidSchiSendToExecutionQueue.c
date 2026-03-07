// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiSendToExecutionQueue(__int64 a1, char a2)
{
  __int64 v2; // r13
  __int64 v4; // rsi
  __int64 v5; // r15
  __int64 v6; // r8
  __int64 v7; // r12
  __int64 v8; // r14
  _BYTE *v9; // rbx
  __int64 v10; // rcx
  const char *ProcessImageFileName; // rax
  const char *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  char v15; // al
  int v16; // ecx
  __int64 v17; // rbx
  LARGE_INTEGER PerformanceCounter; // r12
  LARGE_INTEGER *v19; // r14
  LARGE_INTEGER v20; // rbx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  LARGE_INTEGER *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r9
  __int64 v31; // r9
  __int64 v32; // rcx
  int v33; // edx
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r9
  __int64 v38; // rax
  char v39; // bl
  KIRQL v40; // r12
  signed int v41; // eax
  __int64 v42; // r9
  unsigned int v43; // ebx
  LARGE_INTEGER *v44; // r15
  unsigned int v45; // edx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdx
  unsigned int v58; // r14d
  unsigned int i; // r8d
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r9
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // r8
  char v66; // al
  __int64 v67; // r8
  KIRQL v68; // [rsp+50h] [rbp-B0h]
  char v69; // [rsp+51h] [rbp-AFh] BYREF
  char v70; // [rsp+52h] [rbp-AEh]
  __int64 v71; // [rsp+58h] [rbp-A8h]
  int v72; // [rsp+60h] [rbp-A0h]
  __int64 v73; // [rsp+68h] [rbp-98h]
  __int64 v74; // [rsp+70h] [rbp-90h]
  _DWORD v75[2]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD *v76; // [rsp+80h] [rbp-80h]
  __int64 v77; // [rsp+88h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v79[6]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v80[16]; // [rsp+110h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v70 = a2;
  v4 = *(_QWORD *)(v2 + 96);
  v71 = *(_QWORD *)(v2 + 104);
  v5 = *(_QWORD *)(v4 + 24);
  v74 = *(_QWORD *)(v71 + 40);
  v73 = v5;
  v72 = 0;
  memset(v79, 0, sizeof(v79));
  v6 = v71;
  v7 = *(unsigned int *)(v4 + 496);
  v8 = v4 + 56 * v7;
  v9 = (_BYTE *)(v8 + 512);
  if ( v71 == *(_QWORD *)(*(_QWORD *)(v71 + 32) + 240LL) )
  {
    v12 = "System";
  }
  else
  {
    v10 = *(_QWORD *)(v71 + 40);
    if ( v10 && *(_QWORD *)(v10 + 8) )
    {
      ProcessImageFileName = (const char *)PsGetProcessImageFileName(*(_QWORD *)(v10 + 2656));
      v12 = ProcessImageFileName;
      if ( !ProcessImageFileName || !*ProcessImageFileName )
      {
        v6 = v71;
        goto LABEL_12;
      }
      v6 = v71;
    }
    else
    {
      v12 = "Unknown";
    }
  }
  v13 = 16LL;
  v14 = v12 - v9;
  while ( v13 != -2147483630 )
  {
    v15 = v9[v14];
    if ( !v15 )
      break;
    *v9++ = v15;
    if ( !--v13 )
    {
      --v9;
      break;
    }
  }
LABEL_12:
  *v9 = 0;
  *(_OWORD *)(v8 + 528) = *(_OWORD *)(a1 + 72);
  *(_OWORD *)(v8 + 544) = *(_OWORD *)(a1 + 88);
  *(_QWORD *)(v8 + 560) = *(_QWORD *)(a1 + 104);
  *(_DWORD *)(v4 + 496) = ((_BYTE)v7 + 1) & 0xF;
  v16 = *(_DWORD *)(a1 + 92);
  if ( (v16 & 4) != 0 )
  {
    v57 = *(_QWORD *)(a1 + 56);
    if ( (*(_DWORD *)(v57 + 72) & 0x4000) != 0
      && ((*(_DWORD *)(v6 + 48) & 2) != 0 || *(int *)(v57 + 392) >= 4 || *(_BYTE *)(v5 + 156)) )
    {
      *(_DWORD *)(a1 + 92) = v16 | 0x200;
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 812));
      VidSchIsVSyncEnabled((struct _VIDSCH_GLOBAL *)v5, *(_DWORD *)(*(_QWORD *)(a1 + 56) + 160LL));
    }
  }
  v68 = KfRaiseIrql(2u);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1728), &LockHandle);
  v17 = *(_QWORD *)(a1 + 56);
  if ( v17 && (*(_DWORD *)(v17 + 64) & 0x80u) != 0 )
  {
    v58 = *(_DWORD *)(v17 + 472);
    memset(v80, 0, sizeof(v80));
    for ( i = 0; i < v58; v80[v60] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 8 * v60 + 480) + 96LL) + 40LL) )
    {
      if ( i >= 0x10 )
        break;
      v60 = i++;
    }
    v75[0] = v58;
    v75[1] = 0;
    v76 = v80;
    v61 = *(_QWORD *)(v5 + 16);
    v77 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 104) + 40LL) + 8LL);
    ((void (__fastcall *)(__int64, __int64, _DWORD *))DxgCoreInterface[82])(v61, 1LL, v75);
  }
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 2892));
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 9;
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 728));
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v19 = (LARGE_INTEGER *)(*(_QWORD *)(v4 + 184) + 112LL * *(unsigned int *)(v4 + 196));
  v20 = PerformanceCounter;
  memset(v19, 0, 0x70uLL);
  *(_DWORD *)(v4 + 196) = (*(_DWORD *)(v4 + 196) + 1) & (*(_DWORD *)(v4 + 192) - 1);
  if ( !PerformanceCounter.QuadPart )
    v20 = KeQueryPerformanceCounter(0LL);
  v19[1] = v20;
  v21 = 1LL;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v4 + 2888)) == 1 )
  {
    v22 = *(unsigned int *)(v2 + 404);
    v23 = gulPriorityToYieldPriorityBand[v22];
    if ( gulPriorityToYieldPriorityBand[v22] )
    {
      v24 = (LARGE_INTEGER *)(v4 + 1936 + 8 * v23);
      do
      {
        if ( v24[-4].QuadPart )
          *v24 = PerformanceCounter;
        --v24;
        --v23;
      }
      while ( v23 );
    }
  }
  if ( _InterlockedIncrement((volatile signed __int32 *)(v2 + 788)) == 1 )
  {
    if ( v71 == *(_QWORD *)(v5 + 240) )
      VidSchiUpdateContextStatus(v2, 1LL, 6619);
    *(_DWORD *)(v2 + 184) |= 2u;
    v25 = *(unsigned int *)(v2 + 404);
    if ( ++*(_DWORD *)(v4 + 4 * v25 + 1776) == 1 )
      *(_DWORD *)(v4 + 1772) |= 1 << *(_DWORD *)(v2 + 404);
    v72 = 1;
  }
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 2900));
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 2904));
    v43 = *(_DWORD *)(v4 + 1560);
    if ( v43 != *(_DWORD *)(v4 + 1552) )
    {
      do
      {
        v44 = *(LARGE_INTEGER **)(v4 + 8LL * v43 + 1568);
        if ( (v44[23].LowPart & 8) == 0 )
        {
          VidSchiUpdateContextStatus(*(_QWORD *)(v4 + 8LL * v43 + 1568), 2LL, 6680);
          if ( v43 == *(_DWORD *)(v4 + 1560) && !v44[63].QuadPart )
            v44[63] = PerformanceCounter;
        }
        v43 = ((_BYTE)v43 + 1) & 0xF;
      }
      while ( v43 != *(_DWORD *)(v4 + 1552) );
      v5 = v73;
    }
    *(_QWORD *)(v4 + 392) = MEMORY[0xFFFFF78000000320];
    KeResetEvent((PRKEVENT)(v4 + 352));
    v45 = *(unsigned __int16 *)(v4 + 4);
    v46 = *(_QWORD *)(v5 + 632);
    v47 = 8LL * *(unsigned __int16 *)(v4 + 4);
    if ( v45 < *(_DWORD *)(v5 + 704) )
      v46 += v47;
    ++*(_QWORD *)(*(_QWORD *)v46 + 104LL);
    v48 = *(_QWORD *)(v5 + 632);
    if ( v45 < *(_DWORD *)(v5 + 704) )
      v48 += v47;
    v49 = *(_QWORD *)(*(_QWORD *)v48 + 104LL);
    v50 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 104) = v49;
    v51 = *(_QWORD *)(v50 + 96);
    v52 = *(_QWORD *)(v51 + 24);
    HIDWORD(v79[0]) = 0;
    LODWORD(v79[0]) = v49;
    v53 = *(unsigned __int16 *)(v51 + 4);
    v54 = *(_QWORD *)(v52 + 632);
    if ( (unsigned int)v53 < *(_DWORD *)(v52 + 704) )
      v54 += 8 * v53;
    DWORD1(v79[0]) = *(unsigned __int16 *)(*(_QWORD *)v54 + 8LL);
    v55 = *(unsigned __int16 *)(v51 + 4);
    v56 = *(_QWORD *)(v52 + 632);
    if ( (unsigned int)v55 < *(_DWORD *)(v52 + 704) )
      v56 += 8 * v55;
    DWORD2(v79[0]) = *(unsigned __int16 *)(*(_QWORD *)v56 + 6LL);
    _InterlockedExchange((volatile __int32 *)(v4 + 160), v49);
    RtlClearBitEx(v5 + 488, *(unsigned __int16 *)(v4 + 4));
LABEL_40:
    v21 = *(unsigned int *)(v4 + 1552);
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8 * v21 + 1568), v2, 0LL) )
      goto LABEL_41;
    goto LABEL_98;
  }
  v26 = *(_QWORD *)(a1 + 56);
  if ( !v26 )
  {
LABEL_35:
    if ( (*(_DWORD *)(a1 + 92) & 0x2000) != 0 )
      VidSchiFillSubmitCommandDataVirtual(a1, v79);
    else
      VidSchiFillSubmitCommandData(a1, v79);
    _InterlockedExchange64((volatile __int64 *)(v4 + 152), *(_QWORD *)(a1 + 104));
    v31 = *(_QWORD *)(a1 + 56);
    if ( v31 )
      v32 = *(_QWORD *)(v31 + 112);
    else
      v32 = 0LL;
    WdLogSingleEntry5(4LL, a1, *(_QWORD *)(a1 + 104), v31, *(int *)(a1 + 88), v32);
    goto LABEL_40;
  }
  VidSchiProfilePerformanceTick(6LL, v5, 0LL, 0LL, 0LL, v26, 0LL, 0LL);
  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(*(_QWORD *)(a1 + 56) + 52LL) = 9;
  if ( (*(_DWORD *)(a1 + 92) & 0x10) == 0
    || (v62 = *(_QWORD *)(a1 + 56),
        v63 = *(unsigned int *)(v62 + 160),
        v64 = *(int *)(*(_QWORD *)(v5 + 8 * v63 + 3200) + 4LL),
        (((_DWORD)v64 - 3) & 0xFFFFFFFD) != 0) )
  {
    v27 = *(_QWORD *)(a1 + 56);
    v28 = *(_QWORD *)(v27 + 88);
    v29 = *(_QWORD *)(v28 + 160);
    if ( v29 )
    {
      v30 = *(_QWORD *)(v27 + 112);
      if ( v30 <= v29 )
        goto LABEL_97;
    }
    *(_QWORD *)(v28 + 152) = *(_QWORD *)(v27 + 112);
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 64LL) |= 8u;
    goto LABEL_35;
  }
  g_DxgMmsBugcheckExportIndex = 1;
  WdLogSingleEntry5(0LL, 281LL, 3072LL, v62, v63, v64);
  __debugbreak();
LABEL_97:
  g_DxgMmsBugcheckExportIndex = 1;
  WdLogSingleEntry5(0LL, 281LL, 1792LL, v30, v29, 0LL);
  __debugbreak();
LABEL_98:
  WdLogSingleEntry2(1LL, v5, a1);
  ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, __int64, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Context queue is inconsistant",
    v5,
    a1,
    0LL,
    0LL,
    0LL);
LABEL_41:
  _InterlockedExchange((volatile __int32 *)(v4 + 1552), ((_BYTE)v21 + 1) & 0xF);
  if ( v72 )
  {
    v34 = *(_QWORD *)(v2 + 96);
    v69 = 0;
    DpSynchronizeExecution(
      *(_QWORD *)(*(_QWORD *)(v34 + 24) + 24LL),
      VidSchiStartContextRunningTimeAtISR,
      v2,
      *(unsigned int *)(*(_QWORD *)(v34 + 24) + 32LL),
      &v69);
  }
  else if ( bTracingEnabled )
  {
    v42 = *(_QWORD *)(v2 + 56);
    if ( !v42 || (v33 = *(_DWORD *)(v2 + 112), (v33 & 0x40) != 0) )
      LODWORD(v42) = v2;
    if ( (byte_1C00769C1 & 2) != 0 )
      McTemplateK0piixqq_EtwWriteTransfer(
        *(_QWORD *)(v2 + 448),
        v33,
        *(_QWORD *)(v4 + 2016),
        v42,
        *(_QWORD *)(v2 + 448),
        *(_QWORD *)(v2 + 440),
        *(_QWORD *)(v4 + 2016),
        *(_DWORD *)(v2 + 436),
        3);
  }
  _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 436), 1, 0);
  VidSchiProfilePerformanceTick(7LL, v5, v4, 0LL, 0LL, 0LL, a1, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v36 = *(unsigned int *)(v4 + 1408);
  v37 = v36;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 1424 + 8 * v36), a1, 0LL) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 2048LL, v36, v4 + 1424 + 8 * v36, a1);
    __debugbreak();
LABEL_101:
    if ( !*(_DWORD *)(a1 + 88) )
      goto LABEL_102;
    goto LABEL_47;
  }
  v2 = v71;
  _InterlockedExchange((volatile __int32 *)(v4 + 1408), ((_BYTE)v36 + 1) & 0xF);
  v21 = v2 + 204;
  if ( *(_DWORD *)(v5 + 3012) )
    goto LABEL_102;
  if ( *(_BYTE *)v21 || _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 200), 0, 0) )
    goto LABEL_101;
LABEL_47:
  v38 = *(_QWORD *)(a1 + 56);
  if ( !v38 || (*(_DWORD *)(v38 + 76) & 0x80u) == 0 )
  {
    *(_DWORD *)(a1 + 92) |= 0x20u;
    v39 = 1;
    ++*(_QWORD *)(v74 + 2840);
    if ( *(_DWORD *)(a1 + 88) == 3 )
    {
      v40 = v68;
      if ( *(_BYTE *)(v5 + 49) )
      {
        KeLowerIrql(v68);
        v39 = 0;
      }
      _InterlockedExchange((volatile __int32 *)(v4 + 488), 1);
      *(_DWORD *)(v4 + 176) = v79[0];
      v19->LowPart = 3;
      *(_OWORD *)&v19[2].LowPart = v79[0];
      v41 = ((__int64 (__fastcall *)(_QWORD, _OWORD *, __int64, __int64))DxgCoreInterface[28])(
              *(_QWORD *)(v5 + 8),
              v79,
              v35,
              v37);
    }
    else
    {
      *(_QWORD *)(v4 + 168) = *(_QWORD *)(a1 + 104);
      if ( (*(_DWORD *)(a1 + 92) & 0x2000) != 0 )
      {
        v40 = v68;
        KeLowerIrql(v68);
        v39 = 0;
        v41 = DxgCoreInterface[53](
                *(ADAPTER_DISPLAY **)(v5 + 8),
                (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)v79);
        v19->LowPart = 2;
        *(_OWORD *)&v19[2].LowPart = v79[0];
        *(_OWORD *)&v19[4].LowPart = v79[1];
        *(_OWORD *)&v19[6].LowPart = v79[2];
        *(_OWORD *)&v19[8].LowPart = v79[3];
        v19[10].LowPart = v41;
      }
      else
      {
        v41 = ((__int64 (__fastcall *)(_QWORD, _OWORD *, __int64, __int64))DxgCoreInterface[27])(
                *(_QWORD *)(v5 + 8),
                v79,
                v35,
                v37);
        v19->LowPart = 1;
        v40 = v68;
        *(_OWORD *)&v19[2].LowPart = v79[0];
        *(_OWORD *)&v19[4].LowPart = v79[1];
        *(_OWORD *)&v19[6].LowPart = v79[2];
        *(_OWORD *)&v19[8].LowPart = v79[3];
        *(_OWORD *)&v19[10].LowPart = v79[4];
        *(_OWORD *)&v19[12].LowPart = v79[5];
      }
    }
    if ( !v41 )
      goto LABEL_53;
    if ( v70 )
    {
      VidSchMarkDeviceAsError(v2, 19LL);
      LOBYTE(v67) = 1;
      VidSchiCompletePendingCommandInNodeHwQueue(v4, *(_QWORD *)(v4 + 152), v67);
      *(_QWORD *)(v4 + 72) = *(_QWORD *)(v4 + 152);
LABEL_53:
      ++*(_QWORD *)(v5 + 424);
      if ( v39 )
        KeLowerIrql(v40);
      return;
    }
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 2LL, v41, v79, a1);
    __debugbreak();
    goto LABEL_108;
  }
LABEL_102:
  KeLowerIrql(v68);
  v19->LowPart = 7;
  v19[2] = *(LARGE_INTEGER *)(v4 + 152);
  LOBYTE(v19[3].LowPart) = *(_BYTE *)(v5 + 3036) & 1;
  BYTE1(v19[3].LowPart) = *(_DWORD *)(v5 + 3012) != 0;
  if ( !*(_BYTE *)v21 && !_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 200), 0, 0) )
  {
    v66 = 0;
    goto LABEL_109;
  }
LABEL_108:
  v66 = 1;
LABEL_109:
  BYTE2(v19[3].u.LowPart) = v66;
  if ( (*(_BYTE *)(v5 + 3036) & 1) != 0 || *(_DWORD *)(v5 + 3012) )
    v65 = 0LL;
  else
    LOBYTE(v65) = 1;
  VidSchiCompletePendingCommandInNodeHwQueue(v4, *(_QWORD *)(v4 + 152), v65);
}
