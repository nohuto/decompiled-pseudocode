/*
 * XREFs of ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C02A2A88
 * Callers:
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C02A24F4 (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C016D17C (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z @ 0x1C029A1B8 (-GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z.c)
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1C02A0CB0 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1C02A12A0 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 *     ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C02A3348 (-SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
        OUTPUTDUPL_CONTEXT *this,
        struct _OUTPUTDUPL_UPDATE_INFO *a2,
        struct DXGDXGIKEYEDMUTEX *a3,
        struct _PRODUCER_INFO *a4,
        int *a5,
        int *a6)
{
  __int64 v6; // rsi
  int v10; // r13d
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v12; // rdx
  __int64 v13; // rcx
  struct _D3DKMT_PRESENT_RGNS *v14; // r12
  int DirtyRectCount; // eax
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  struct tagRECT *DirtyRectData; // rax
  __int64 v24; // r8
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int128 v33; // xmm0
  __int64 v34; // rax
  __int64 v35; // rbx
  void *Buffer; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rax
  struct _D3DKMT_PRESENT_RGNS v43; // [rsp+30h] [rbp-50h] BYREF
  int *v44; // [rsp+50h] [rbp-30h]
  union _LARGE_INTEGER v45; // [rsp+58h] [rbp-28h] BYREF
  struct DXGDXGIKEYEDMUTEX *v46; // [rsp+60h] [rbp-20h]
  struct tagRECT v47; // [rsp+68h] [rbp-18h] BYREF

  LODWORD(v6) = 0;
  v46 = a3;
  v44 = a6;
  v10 = 1;
  if ( a5 )
    *a5 = 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v13 = *(unsigned int *)a2;
  v45 = PerformanceCounter;
  if ( (_DWORD)v13 )
  {
    if ( (unsigned int)(v13 - 1) <= 1 )
    {
      *(LARGE_INTEGER *)a4 = PerformanceCounter;
      v33 = *(_OWORD *)*((_QWORD *)a2 + 4);
      *((_DWORD *)a4 + 5) = 1;
      *(_OWORD *)((char *)a4 + 24) = v33;
      if ( *(_DWORD *)a2 == 2 )
      {
        v34 = *((_QWORD *)a2 + 3);
        v35 = (unsigned int)(*(_DWORD *)(v34 + 8) * *(_DWORD *)(v34 + 12));
        Buffer = AUTOEXPANDALLOCATION::GetBuffer(
                   *((AUTOEXPANDALLOCATION **)a4 + 11),
                   *(_DWORD *)(v34 + 8) * *(_DWORD *)(v34 + 12),
                   0);
        if ( Buffer )
        {
          memmove(Buffer, *(const void **)(*((_QWORD *)a2 + 3) + 24LL), (unsigned int)v35);
          v41 = *((_QWORD *)a2 + 3);
          *((_OWORD *)a4 + 3) = *(_OWORD *)v41;
          *((_OWORD *)a4 + 4) = *(_OWORD *)(v41 + 16);
          *((_QWORD *)a4 + 10) = *(_QWORD *)(v41 + 32);
          *((_QWORD *)a4 + 9) = 0LL;
          *((_DWORD *)a4 + 10) = 1;
        }
        else
        {
          v42 = WdLogNewEntry5_WdLowResource(v38, v37, v39, v40);
          *(_QWORD *)(v42 + 24) = v35;
          *(_QWORD *)(v42 + 32) = *(unsigned int *)(*((_QWORD *)a2 + 3) + 16LL);
          WdLogEvent5_WdLowResource(v42);
          LODWORD(v6) = -1073741801;
        }
      }
    }
    return (unsigned int)v6;
  }
  memset(&v43, 0, sizeof(v43));
  v47 = 0LL;
  if ( *((_DWORD *)this + 10) != 1 || *((_DWORD *)this + 70) == 1 || (*((_DWORD *)a2 + 6) & 4) != 0 )
  {
    v16 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdEvent)(v13, (LARGE_INTEGER)v12.QuadPart);
    *(_QWORD *)(v16 + 24) = *((int *)this + 70);
    *(_QWORD *)(v16 + 32) = *((unsigned int *)this + 10);
    WdLogEvent5_WdEvent(v16);
    LODWORD(v6) = GetAllocationSize(
                    *(struct DXGDEVICE **)(*((_QWORD *)a2 + 1) + 16LL),
                    *((unsigned int *)a2 + 7),
                    &v47,
                    v17);
    if ( (int)v6 < 0 )
    {
      v18 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdError)(v13, (LARGE_INTEGER)v12.QuadPart);
      *(_QWORD *)(v18 + 24) = 1682LL;
LABEL_10:
      WdLogEvent5_WdError(v18);
      return 3221225473LL;
    }
    *(&v43.DirtyRectCount + 1) = 0;
    *((_DWORD *)this + 70) = 0;
    v14 = &v43;
    v43.pDirtyRects = &v47;
    DirtyRectCount = 1;
    v43.DirtyRectCount = 1;
    *(_OWORD *)&v43.MoveRectCount = 0LL;
  }
  else
  {
    v14 = (struct _D3DKMT_PRESENT_RGNS *)*((_QWORD *)a2 + 5);
    DirtyRectCount = v14->DirtyRectCount;
  }
  if ( DirtyRectCount || v14->MoveRectCount )
    v10 = 0;
  if ( !v46 )
  {
    if ( *((_DWORD *)a4 + 4) == 2 )
    {
      v30 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(v13, (LARGE_INTEGER)v12.QuadPart);
      *(_QWORD *)(v30 + 24) = 1771LL;
      WdLogEvent5_WdAssertion(v30);
    }
    if ( !v10 )
    {
      if ( !(unsigned int)DDAMetaData::CombineNewMetaData(
                            *((DDAMetaData **)a4 + 1),
                            v14,
                            &v45,
                            *((_DWORD *)a2 + 6) & 1,
                            v44) )
      {
        v18 = WdLogNewEntry5_WdError(v32, v31);
        *(_QWORD *)(v18 + 24) = 1783LL;
        goto LABEL_10;
      }
      *((_DWORD *)a4 + 4) = 1;
    }
    if ( *((_DWORD *)a4 + 4) == 1 )
      LODWORD(v6) = 259;
    goto LABEL_34;
  }
  if ( !v10
    && !(unsigned int)DDAMetaData::CombineNewMetaData(
                        *((DDAMetaData **)a4 + 1),
                        v14,
                        &v45,
                        *((_DWORD *)a2 + 6) & 1,
                        v44) )
  {
    v18 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v18 + 24) = 1715LL;
    goto LABEL_10;
  }
  if ( *((_DWORD *)a4 + 4) == 1 )
  {
    v22 = *((_QWORD *)a4 + 1);
    *(&v43.DirtyRectCount + 1) = 0;
    *(&v43.MoveRectCount + 1) = 0;
    v43.DirtyRectCount = *(_DWORD *)(v22 + 24);
    DirtyRectData = DDAMetaData::GetDirtyRectData((AUTOEXPANDALLOCATION **)v22, v43.DirtyRectCount);
    v24 = *((_QWORD *)a4 + 1);
    v43.pDirtyRects = DirtyRectData;
    v43.MoveRectCount = *(_DWORD *)(v24 + 44);
    v25 = *((unsigned int *)this + 11);
    v43.pMoveRects = **(const D3DKMT_MOVE_RECT ***)(v24 + 48);
    v26 = OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
            this,
            a2,
            *((_DWORD *)a2 + 7),
            *(_DWORD *)(*((_QWORD *)this + v25 + 6) + 92LL),
            &v43);
    goto LABEL_21;
  }
  if ( v10 )
  {
LABEL_34:
    if ( a5 )
      *a5 = 0;
    return (unsigned int)v6;
  }
  v26 = OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
          this,
          a2,
          *((_DWORD *)a2 + 7),
          *(_DWORD *)(*((_QWORD *)this + *((unsigned int *)this + 11) + 6) + 92LL),
          v14);
LABEL_21:
  v6 = v26;
  if ( v26 >= 0 )
  {
    *((_DWORD *)a4 + 4) = 2;
  }
  else
  {
    v29 = WdLogNewEntry5_WdError(v28, v27);
    *(_QWORD *)(v29 + 24) = v6;
    WdLogEvent5_WdError(v29);
  }
  return (unsigned int)v6;
}
