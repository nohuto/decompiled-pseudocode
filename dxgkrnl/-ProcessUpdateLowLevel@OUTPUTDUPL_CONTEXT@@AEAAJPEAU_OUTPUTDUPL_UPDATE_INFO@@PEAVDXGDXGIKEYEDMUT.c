/*
 * XREFs of ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C032F0F0
 * Callers:
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C032EA6C (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01DC800 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z @ 0x1C0327204 (-GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z.c)
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1C032CCA8 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1C032D410 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 *     ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C032FBA4 (-SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
        OUTPUTDUPL_CONTEXT *this,
        struct _OUTPUTDUPL_UPDATE_INFO *a2,
        struct DXGDXGIKEYEDMUTEX *a3,
        struct _PRODUCER_INFO *a4,
        int *a5,
        int *a6)
{
  int v6; // r12d
  __int64 v10; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  int v12; // ecx
  __int64 v13; // rcx
  int v14; // eax
  struct _D3DKMT_PRESENT_RGNS *v15; // rcx
  struct _D3DKMT_PRESENT_RGNS *v16; // r13
  __int64 v17; // rbx
  const wchar_t *v18; // r9
  __int64 v20; // rcx
  struct tagRECT *DirtyRectData; // rax
  __int64 v22; // r8
  __int64 v23; // rax
  int v24; // eax
  const wchar_t *v25; // r9
  int v26; // eax
  __int128 v27; // xmm0
  __int64 v28; // rax
  __int64 v29; // rbx
  void *Buffer; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  struct _D3DKMT_PRESENT_RGNS v33; // [rsp+50h] [rbp-49h] BYREF
  _DWORD *v34; // [rsp+70h] [rbp-29h]
  int *v35; // [rsp+78h] [rbp-21h]
  union _LARGE_INTEGER v36; // [rsp+80h] [rbp-19h] BYREF
  struct DXGDXGIKEYEDMUTEX *v37; // [rsp+88h] [rbp-11h]
  struct tagRECT v38; // [rsp+90h] [rbp-9h] BYREF

  v6 = 0;
  v37 = a3;
  v35 = a6;
  LODWORD(v10) = 0;
  if ( a5 )
    *a5 = 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v12 = *(_DWORD *)a2;
  v36 = PerformanceCounter;
  if ( v12 )
  {
    if ( (unsigned int)(v12 - 1) <= 1 )
    {
      *(LARGE_INTEGER *)a4 = PerformanceCounter;
      v27 = *(_OWORD *)*((_QWORD *)a2 + 4);
      *((_DWORD *)a4 + 5) = 1;
      *(_OWORD *)((char *)a4 + 24) = v27;
      if ( *(_DWORD *)a2 == 2 )
      {
        v28 = *((_QWORD *)a2 + 3);
        v29 = (unsigned int)(*(_DWORD *)(v28 + 8) * *(_DWORD *)(v28 + 12));
        Buffer = AUTOEXPANDALLOCATION::GetBuffer(
                   *((const void ***)a4 + 11),
                   *(_DWORD *)(v28 + 8) * *(_DWORD *)(v28 + 12),
                   0);
        v31 = *((_QWORD *)a2 + 3);
        if ( Buffer )
        {
          memmove(Buffer, *(const void **)(v31 + 24), (unsigned int)v29);
          v32 = *((_QWORD *)a2 + 3);
          *((_OWORD *)a4 + 3) = *(_OWORD *)v32;
          *((_OWORD *)a4 + 4) = *(_OWORD *)(v32 + 16);
          *((_QWORD *)a4 + 10) = *(_QWORD *)(v32 + 32);
          *((_QWORD *)a4 + 9) = 0LL;
          *((_DWORD *)a4 + 10) = 1;
        }
        else
        {
          WdLogSingleEntry2(6LL, v29, *(unsigned int *)(v31 + 16));
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to allocate 0x%I64x bytes for new pointer shape on source 0x%I64x",
            v29,
            *(unsigned int *)(*((_QWORD *)a2 + 3) + 16LL),
            0LL,
            0LL,
            0LL);
          LODWORD(v10) = -1073741801;
        }
      }
    }
    return (unsigned int)v10;
  }
  v13 = *((unsigned int *)this + 10);
  memset(&v33, 0, sizeof(v33));
  v38 = 0LL;
  if ( (_DWORD)v13 != 1
    || *((_DWORD *)this + 70) == 1
    || (v14 = *((_DWORD *)a2 + 6), v34 = (_DWORD *)((char *)a2 + 24), (v14 & 4) != 0) )
  {
    WdLogSingleEntry2(4LL, *((int *)this + 70), v13);
    LODWORD(v10) = GetAllocationSize(*(struct DXGDEVICE **)(*((_QWORD *)a2 + 1) + 16LL), *((_DWORD *)a2 + 7), &v38);
    if ( (int)v10 < 0 )
    {
      v17 = 1691LL;
      WdLogSingleEntry1(2LL, 1691LL);
      v18 = L"Failed to find source surface size";
LABEL_12:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v18, v17, 0LL, 0LL, 0LL, 0LL);
      return 3221225473LL;
    }
    *(_QWORD *)&v33.DirtyRectCount = 1LL;
    v33.pDirtyRects = &v38;
    v16 = &v33;
    *((_DWORD *)this + 70) = 0;
    v34 = (_DWORD *)((char *)a2 + 24);
    *(_OWORD *)&v33.MoveRectCount = 0LL;
  }
  else
  {
    v15 = (struct _D3DKMT_PRESENT_RGNS *)*((_QWORD *)a2 + 5);
    v16 = v15;
    if ( !v15->DirtyRectCount && !v15->MoveRectCount )
      v6 = 1;
  }
  if ( v37 )
  {
    if ( !v6
      && !(unsigned int)DDAMetaData::CombineNewMetaData(
                          *((DDAMetaData **)a4 + 1),
                          v16,
                          &v36,
                          *((_DWORD *)a2 + 6) & 1,
                          v35) )
    {
      v17 = 1724LL;
      WdLogSingleEntry1(2LL, 1724LL);
LABEL_18:
      v18 = L"Failed to combine present regions to metadata";
      goto LABEL_12;
    }
    if ( *((_DWORD *)a4 + 4) == 1 )
    {
      v20 = *((_QWORD *)a4 + 1);
      *(&v33.DirtyRectCount + 1) = 0;
      *(&v33.MoveRectCount + 1) = 0;
      v33.DirtyRectCount = *(_DWORD *)(v20 + 24);
      DirtyRectData = DDAMetaData::GetDirtyRectData((const void ***)v20, v33.DirtyRectCount);
      v22 = *((_QWORD *)a4 + 1);
      v33.pDirtyRects = DirtyRectData;
      v33.MoveRectCount = *(_DWORD *)(v22 + 44);
      v23 = *((unsigned int *)this + 11);
      v33.pMoveRects = **(const D3DKMT_MOVE_RECT ***)(v22 + 48);
      v24 = OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
              this,
              a2,
              *((_DWORD *)a2 + 7),
              *(_DWORD *)(*((_QWORD *)this + v23 + 6) + 92LL),
              &v33);
      v10 = v24;
      if ( v24 < 0 )
      {
        WdLogSingleEntry1(2LL, v24);
        v25 = L"Failed to copy pixel data from accumulated + new present rgns, Status 0x%I64x";
LABEL_22:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v25, v10, 0LL, 0LL, 0LL, 0LL);
        return (unsigned int)v10;
      }
    }
    else
    {
      if ( v6 )
      {
        if ( a5 )
          *a5 = 0;
        return (unsigned int)v10;
      }
      v26 = OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
              this,
              a2,
              *((_DWORD *)a2 + 7),
              *(_DWORD *)(*((_QWORD *)this + *((unsigned int *)this + 11) + 6) + 92LL),
              v16);
      v10 = v26;
      if ( v26 < 0 )
      {
        WdLogSingleEntry1(2LL, v26);
        v25 = L"Failed to copy pixel data from new present rgns, Status 0x%I64x";
        goto LABEL_22;
      }
    }
    *((_DWORD *)a4 + 4) = 2;
    return (unsigned int)v10;
  }
  if ( *((_DWORD *)a4 + 4) == 2 )
  {
    WdLogSingleEntry1(1LL, 1780LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pFrameInfo->PresentUpdateStatus != PRODUCER_INFO_PRESENT_UPDATE_READY",
      1780LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !v6 )
  {
    if ( !(unsigned int)DDAMetaData::CombineNewMetaData(*((DDAMetaData **)a4 + 1), v16, &v36, *v34 & 1, v35) )
    {
      v17 = 1792LL;
      WdLogSingleEntry1(2LL, 1792LL);
      goto LABEL_18;
    }
    *((_DWORD *)a4 + 4) = 1;
  }
  if ( *((_DWORD *)a4 + 4) == 1 )
    LODWORD(v10) = 259;
  if ( a5 )
    *a5 = 0;
  return (unsigned int)v10;
}
