/*
 * XREFs of CcGetVirtualAddress @ 0x14021FB80
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14021CD00 (CcMapAndCopyInToCache.c)
 *     CcPinFileData @ 0x14021E620 (CcPinFileData.c)
 *     CcPurgeAndClearCacheSection @ 0x14029FCE4 (CcPurgeAndClearCacheSection.c)
 *     CcPrepareMdlWrite @ 0x1402FD600 (CcPrepareMdlWrite.c)
 *     CcMdlRead @ 0x1406A3B50 (CcMdlRead.c)
 *     CcMapAndCopyFromCache @ 0x1406A7510 (CcMapAndCopyFromCache.c)
 *     CcMapData @ 0x1406A7910 (CcMapData.c)
 *     CcMapDataCommon @ 0x1406B6954 (CcMapDataCommon.c)
 * Callees:
 *     CcUnmapVacbArray @ 0x14021B910 (CcUnmapVacbArray.c)
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     CcGetVacbMiss @ 0x140335850 (CcGetVacbMiss.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     CcInsertVacbArray @ 0x1403BC918 (CcInsertVacbArray.c)
 *     CcAllocateInitializeVacbArray @ 0x1403BD650 (CcAllocateInitializeVacbArray.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     CcBuildUpHighPriorityMappings @ 0x1405359F0 (CcBuildUpHighPriorityMappings.c)
 */

__int64 __fastcall CcGetVirtualAddress(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4, int a5, int a6)
{
  __int64 v6; // r15
  int v7; // r12d
  unsigned int v9; // r13d
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 VacbMiss; // rsi
  __int64 v16; // rax
  __int16 v17; // bp
  __int64 v19; // r11
  int v20; // edx
  int v21; // ecx
  int v22; // r10d
  __int64 v23; // rax
  int v24; // esi
  unsigned int v25; // r8d
  __int64 *v26; // rdx
  bool v27; // cf
  __int64 InitializeVacbArray; // rax
  __int64 v29; // r12
  KIRQL v30; // si
  BOOL v31; // [rsp+30h] [rbp-58h]
  __int64 v32[10]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v33; // [rsp+90h] [rbp+8h] BYREF
  int v34; // [rsp+98h] [rbp+10h]
  __int64 *v35; // [rsp+A0h] [rbp+18h]
  _DWORD *v36; // [rsp+A8h] [rbp+20h]

  v36 = a4;
  v35 = a3;
  v6 = *(_QWORD *)(a1 + 536);
  v7 = 0;
  v34 = 0;
  v9 = a2 & 0x3FFFF;
  v11 = a2 - (a2 & 0x3FFFF);
  v12 = *(_DWORD *)(a1 + 152);
  v32[0] = v11;
  v31 = (v12 & 0x200) != 0;
  if ( (v12 & 0x200) != 0 || a5 )
  {
    LODWORD(v33) = 1;
    if ( (unsigned int)CcNumberOfFreeVacbs >= 0x80 )
      goto LABEL_3;
    v27 = *(_DWORD *)(v6 + 1248) < 0x80u;
    LODWORD(v33) = 1;
    if ( !v27 )
      goto LABEL_3;
    v24 = 1;
    LODWORD(v33) = 1;
  }
  else
  {
    v24 = 0;
    LODWORD(v33) = 0;
    if ( (unsigned int)CcNumberOfFreeVacbs >= 0x80 )
    {
      LODWORD(v33) = 0;
      goto LABEL_3;
    }
  }
  InitializeVacbArray = CcAllocateInitializeVacbArray();
  v29 = InitializeVacbArray;
  if ( InitializeVacbArray )
  {
    if ( v24 == 1 )
      CcBuildUpHighPriorityMappings(v6, InitializeVacbArray);
    v30 = KeAcquireQueuedSpinLock(4uLL);
    CcInsertVacbArray(v6, v29);
    KeReleaseQueuedSpinLock(4uLL, v30);
  }
  v7 = v34;
LABEL_3:
  if ( a2 > *(_QWORD *)(a1 + 32) )
    KeBugCheckEx(0x34u, 0x566uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  ExAcquirePushLockSharedEx(a1 + 104, 0LL);
  if ( a6
    || (*(_DWORD *)(a1 + 152) & 0x800200) == 0x200
    || (v11 & 0xFFFFF) != 0
    || (*(_DWORD *)(a1 + 152) & 0x40000000) != 0
    || v11 < 0x100000
    || v11 == *(_QWORD *)(a1 + 344) )
  {
    v7 = 1;
  }
  v13 = *(_QWORD *)(a1 + 32);
  v14 = *(_QWORD *)(a1 + 88);
  if ( v13 > 0x2000000 )
  {
    v19 = a2;
    v20 = 0;
    v21 = 25;
    do
    {
      v22 = v21;
      v21 += 7;
      ++v20;
    }
    while ( v13 > 1LL << v21 );
    VacbMiss = *(_QWORD *)(v14 + 8 * (a2 >> v22));
    if ( !VacbMiss )
      goto LABEL_28;
    do
    {
      if ( !v20 )
        break;
      v23 = 1LL << v22;
      v22 -= 7;
      v19 &= v23 - 1;
      --v20;
      VacbMiss = *(_QWORD *)(VacbMiss + 8 * (v19 >> v22));
    }
    while ( VacbMiss );
  }
  else
  {
    VacbMiss = *(_QWORD *)(v14 + 8 * ((unsigned __int64)(unsigned int)a2 >> 18));
  }
  if ( VacbMiss )
  {
    v16 = *(_QWORD *)(VacbMiss + 8);
    v17 = _InterlockedIncrement((volatile signed __int32 *)(VacbMiss + 16));
    if ( !v17 )
      KeBugCheckEx(0x34u, 0xAECuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( v17 == 1 )
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 552));
    ExReleasePushLockEx(a1 + 104, 0LL);
    v11 = v32[0];
    goto LABEL_17;
  }
LABEL_28:
  ExReleasePushLockEx(a1 + 104, 0LL);
  VacbMiss = CcGetVacbMiss(a1, a2, v31, (unsigned int)v33);
  if ( (*(_DWORD *)(a1 + 152) & 0x8000200) == 512 && (v11 & 0xFFFFF) == 0 && v11 >= 0x100000 )
  {
    v11 -= 0x100000LL;
    v32[0] = v11;
    CcUnmapVacbArray(a1, v32, 0x100000u, 1, 0, 0);
  }
LABEL_17:
  if ( !v7 )
  {
    if ( (*(_DWORD *)(a1 + 152) & 0x800000) != 0 )
    {
      if ( v11 >= 8650752 )
      {
        v32[0] = v11 - 0x800000;
        CcUnmapVacbArray(a1, v32, 0x800000u, 1, 0, 0);
        goto LABEL_18;
      }
      v33 = 0x40000LL;
    }
    else
    {
      v25 = CcUnmapBehindLength;
      if ( v11 >= (unsigned int)CcUnmapBehindLength )
      {
        v26 = v32;
        v32[0] = v11 - (unsigned int)CcUnmapBehindLength;
LABEL_34:
        CcUnmapVacbArray(a1, v26, v25, 1, 0, 0);
        goto LABEL_18;
      }
      v33 = 0LL;
    }
    v26 = &v33;
    v25 = v11;
    goto LABEL_34;
  }
LABEL_18:
  *v35 = VacbMiss;
  *v36 = 0x40000 - v9;
  return v9 + *(_QWORD *)VacbMiss;
}
