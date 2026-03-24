/*
 * XREFs of DxgkOutputDuplPresent @ 0x1C0283390
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z @ 0x1C0283154 (-TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z.c)
 *     OutputDuplPresent @ 0x1C029E558 (OutputDuplPresent.c)
 */

__int64 __fastcall DxgkOutputDuplPresent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _OWORD *v4; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct DXGPROCESS *v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v17; // rax
  _D3DKMT_OUTPUTDUPLPRESENT *v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rsi
  unsigned int v22; // eax
  RECT *v23; // rdi
  RECT *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  D3DKMT_MOVE_RECT *v30; // r15
  const RECT *pDirtyRects; // rdx
  const RECT *v32; // rcx
  UINT MoveRectCount; // ecx
  const D3DKMT_MOVE_RECT *v34; // r8
  unsigned int v35; // esi
  __int64 v36; // rax
  _D3DKMT_OUTPUTDUPLPRESENT v37; // [rsp+40h] [rbp-168h] BYREF

  v4 = (_OWORD *)a1;
  Current = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  v9 = Current;
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    *(_QWORD *)(v10 + 32) = PsGetCurrentProcess(v12, v11, v13, v14);
    v15 = v10;
LABEL_3:
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  if ( !*((_BYTE *)Current + 346) )
  {
    v17 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v17 + 24) = 11469LL;
    v15 = v17;
    goto LABEL_3;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  v18 = &v37;
  v19 = 2LL;
  do
  {
    *(_OWORD *)&v18->hContext = *v4;
    *(_OWORD *)v18->BroadcastContext = v4[1];
    *(_OWORD *)&v18->BroadcastContext[4] = v4[2];
    *(_OWORD *)&v18->BroadcastContext[8] = v4[3];
    *(_OWORD *)&v18->BroadcastContext[12] = v4[4];
    *(_OWORD *)&v18->BroadcastContext[16] = v4[5];
    *(_OWORD *)&v18->BroadcastContext[20] = v4[6];
    v18 = (_D3DKMT_OUTPUTDUPLPRESENT *)((char *)v18 + 128);
    *(_OWORD *)&v18[-1].PresentRegions.pMoveRects = v4[7];
    v4 += 8;
    --v19;
  }
  while ( v19 );
  *(_OWORD *)&v18->hContext = *v4;
  *(_OWORD *)v18->BroadcastContext = v4[1];
  *(_OWORD *)&v18->BroadcastContext[4] = v4[2];
  *(_QWORD *)&v18->BroadcastContext[8] = *((_QWORD *)v4 + 6);
  v20 = 16LL * v37.PresentRegions.DirtyRectCount;
  if ( v20 > 0xFFFFFFFF )
  {
    v36 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, 128LL, v8);
    *(_QWORD *)(v36 + 24) = 11488LL;
    goto LABEL_36;
  }
  v21 = 24LL * v37.PresentRegions.MoveRectCount;
  if ( v21 > 0xFFFFFFFF )
  {
    v36 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, 128LL, v8);
    *(_QWORD *)(v36 + 24) = 11495LL;
    goto LABEL_36;
  }
  v22 = v21 + v20;
  if ( (int)v21 + (int)v20 < (unsigned int)v21 )
  {
    v36 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, 128LL, v8);
    *(_QWORD *)(v36 + 24) = 11502LL;
LABEL_36:
    WdLogEvent5_WdWarning(v36);
    return 3221225621LL;
  }
  v23 = 0LL;
  if ( v22 )
  {
    v24 = (RECT *)operator new[](v22, 0x4B677844u, PagedPool);
    v23 = v24;
    if ( !v24 )
    {
      v29 = WdLogNewEntry5_WdLowResource(v26, v25, v27, v28);
      *(_QWORD *)(v29 + 24) = 11513LL;
      WdLogEvent5_WdLowResource(v29);
      return 3221225495LL;
    }
    v30 = (D3DKMT_MOVE_RECT *)&v24[v37.PresentRegions.DirtyRectCount];
    if ( v37.PresentRegions.DirtyRectCount )
    {
      pDirtyRects = v37.PresentRegions.pDirtyRects;
      v32 = (const RECT *)((char *)v37.PresentRegions.pDirtyRects + (unsigned int)v20);
      if ( v32 < v37.PresentRegions.pDirtyRects || (unsigned __int64)v32 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v24, pDirtyRects, (unsigned int)v20);
      v37.PresentRegions.pDirtyRects = v23;
    }
    else
    {
      v37.PresentRegions.pDirtyRects = 0LL;
    }
    MoveRectCount = v37.PresentRegions.MoveRectCount;
    if ( v37.PresentRegions.MoveRectCount )
    {
      if ( (_DWORD)v21 )
      {
        v34 = (const D3DKMT_MOVE_RECT *)((char *)v37.PresentRegions.pMoveRects + (unsigned int)v21);
        if ( (unsigned __int64)v34 > MmUserProbeAddress || v34 < v37.PresentRegions.pMoveRects )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
          MoveRectCount = v37.PresentRegions.MoveRectCount;
        }
      }
      TranslateAndCopyDWMMoveRegionToDDAMoveRegions(MoveRectCount, v37.PresentRegions.pMoveRects, v30);
      v37.PresentRegions.pMoveRects = v30;
    }
    else
    {
      v37.PresentRegions.pMoveRects = 0LL;
    }
  }
  else
  {
    v37.PresentRegions.pDirtyRects = 0LL;
    v37.PresentRegions.pMoveRects = 0LL;
  }
  v35 = OutputDuplPresent(&v37, v9);
  if ( v23 )
    operator delete[](v23);
  return v35;
}
