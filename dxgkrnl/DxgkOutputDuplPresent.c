/*
 * XREFs of DxgkOutputDuplPresent @ 0x1C033CCD0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     OutputDuplPresent @ 0x1C032C14C (OutputDuplPresent.c)
 *     ?TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z @ 0x1C033C3CC (-TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z.c)
 */

__int64 __fastcall DxgkOutputDuplPresent(_OWORD *a1)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v4; // rcx
  struct DXGPROCESS *v5; // r15
  __int64 CurrentProcess; // rax
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rax
  _D3DKMT_OUTPUTDUPLPRESENT *v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // r12
  unsigned __int64 v15; // rcx
  UINT v16; // r14d
  UINT v17; // ecx
  unsigned int v18; // edx
  RECT *v19; // rdi
  RECT *v20; // rax
  D3DKMT_MOVE_RECT *v21; // rsi
  const RECT *pDirtyRects; // rdx
  UINT MoveRectCount; // ecx
  const D3DKMT_MOVE_RECT *v24; // r9
  unsigned int v25; // esi
  _D3DKMT_OUTPUTDUPLPRESENT v26; // [rsp+60h] [rbp-168h] BYREF

  memset(&v26, 0, sizeof(v26));
  Current = DXGPROCESS::GetCurrent(v2);
  v5 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v4);
    v7 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v9 = PsGetCurrentProcess(v8);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting from unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v9,
      0LL,
      0LL,
      0LL);
    return v7;
  }
  if ( (*((_DWORD *)Current + 106) & 4) == 0 )
  {
    WdLogSingleEntry1(2LL, 11703LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Function can only be called from DWM process",
      11703LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return -1073741811LL;
  }
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  v11 = &v26;
  v12 = 2LL;
  do
  {
    *(_OWORD *)&v11->hContext = *a1;
    *(_OWORD *)v11->BroadcastContext = a1[1];
    *(_OWORD *)&v11->BroadcastContext[4] = a1[2];
    *(_OWORD *)&v11->BroadcastContext[8] = a1[3];
    *(_OWORD *)&v11->BroadcastContext[12] = a1[4];
    *(_OWORD *)&v11->BroadcastContext[16] = a1[5];
    *(_OWORD *)&v11->BroadcastContext[20] = a1[6];
    v11 = (_D3DKMT_OUTPUTDUPLPRESENT *)((char *)v11 + 128);
    *(_OWORD *)&v11[-1].PresentRegions.pMoveRects = a1[7];
    a1 += 8;
    --v12;
  }
  while ( v12 );
  *(_OWORD *)&v11->hContext = *a1;
  *(_OWORD *)v11->BroadcastContext = a1[1];
  *(_OWORD *)&v11->BroadcastContext[4] = a1[2];
  *(_QWORD *)&v11->BroadcastContext[8] = *((_QWORD *)a1 + 6);
  v13 = 16LL * v26.PresentRegions.DirtyRectCount;
  v14 = 0xFFFFFFFFLL;
  if ( v13 <= 0xFFFFFFFF )
    v14 = (unsigned int)v13;
  v7 = v13 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v13 > 0xFFFFFFFF )
  {
    WdLogSingleEntry1(3LL, 11722LL);
    return v7;
  }
  v15 = 24LL * v26.PresentRegions.MoveRectCount;
  v16 = -1;
  if ( v15 <= 0xFFFFFFFF )
    v16 = 24 * v26.PresentRegions.MoveRectCount;
  v7 = v15 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v15 > 0xFFFFFFFF )
  {
    WdLogSingleEntry1(3LL, 11729LL);
    return v7;
  }
  v17 = v16 + v14;
  v18 = -1;
  if ( v16 + (unsigned int)v14 >= v16 )
    v18 = v16 + v14;
  v7 = v17 < v16 ? 0xC0000095 : 0;
  if ( v17 < v16 )
  {
    WdLogSingleEntry1(3LL, 11736LL);
    return v7;
  }
  v19 = 0LL;
  if ( v18 )
  {
    v20 = (RECT *)operator new[](v18, 0x4B677844u, 256LL);
    v19 = v20;
    if ( !v20 )
    {
      WdLogSingleEntry1(6LL, 11747LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to alloc buffer for kernel copy of meta data.",
        11747LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    v21 = (D3DKMT_MOVE_RECT *)&v20[v26.PresentRegions.DirtyRectCount];
    if ( v26.PresentRegions.DirtyRectCount )
    {
      pDirtyRects = v26.PresentRegions.pDirtyRects;
      if ( (const RECT *)((unsigned __int64)v26.PresentRegions.pDirtyRects + v14) < v26.PresentRegions.pDirtyRects
        || (const RECT *)((char *)v26.PresentRegions.pDirtyRects + v14) > (const RECT *)MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v20, pDirtyRects, (unsigned int)v14);
      v26.PresentRegions.pDirtyRects = v19;
    }
    else
    {
      v26.PresentRegions.pDirtyRects = 0LL;
    }
    MoveRectCount = v26.PresentRegions.MoveRectCount;
    if ( v26.PresentRegions.MoveRectCount )
    {
      if ( v16 )
      {
        v24 = (const D3DKMT_MOVE_RECT *)((char *)v26.PresentRegions.pMoveRects + v16);
        if ( (unsigned __int64)v24 > MmUserProbeAddress || v24 < v26.PresentRegions.pMoveRects )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
          MoveRectCount = v26.PresentRegions.MoveRectCount;
        }
      }
      TranslateAndCopyDWMMoveRegionToDDAMoveRegions(MoveRectCount, v26.PresentRegions.pMoveRects, v21);
      v26.PresentRegions.pMoveRects = v21;
    }
    else
    {
      v26.PresentRegions.pMoveRects = 0LL;
    }
  }
  else
  {
    v26.PresentRegions.pDirtyRects = 0LL;
    v26.PresentRegions.pMoveRects = 0LL;
  }
  v25 = OutputDuplPresent(&v26, v5);
  if ( v19 )
    operator delete(v19);
  return v25;
}
