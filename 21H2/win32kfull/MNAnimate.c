/*
 * XREFs of MNAnimate @ 0x1C024C3EC
 * Callers:
 *     MNGetPopupFromMenu @ 0x1C0047998 (MNGetPopupFromMenu.c)
 *     xxxMNCloseHierarchy @ 0x1C0237D20 (xxxMNCloseHierarchy.c)
 *     xxxMNSelectItem @ 0x1C023AB7C (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C023BBA0 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C024ABB0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     FindTimer @ 0x1C000B5AC (FindTimer.c)
 *     NtGdiBitBltInternal @ 0x1C0088690 (NtGdiBitBltInternal.c)
 *     GetDPIMetrics @ 0x1C00E0DEC (GetDPIMetrics.c)
 *     StopFade @ 0x1C01E8050 (StopFade.c)
 *     MNDestroyAnimationBitmap @ 0x1C0221A98 (MNDestroyAnimationBitmap.c)
 */

int __fastcall MNAnimate(__int64 a1, int a2)
{
  int result; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v6; // edi
  int v7; // r14d
  __int64 DPIMetrics; // rax
  __int64 v9; // rax
  int v10; // ecx
  int v11; // r9d
  LONG v12; // r10d
  int v13; // edi
  LONG v14; // ecx
  int v15; // ebx
  __int64 v16; // rcx

  result = gfade[0];
  if ( (gfade[12] & 0x10) != 0 )
  {
    if ( !a2 )
      return StopFade();
    return result;
  }
  if ( !*(_QWORD *)(a1 + 96) )
    return result;
  v4 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *(_DWORD *)(a1 + 104);
  if ( !a2 || v4 > 0xA5 || ExGetExclusiveWaiterCount(gpresUser) || (result = ExGetSharedWaiterCount(gpresUser)) != 0 )
  {
    NtGdiBitBltInternal(
      *(HDC *)(a1 + 96),
      0,
      0,
      *(_DWORD *)(a1 + 116),
      *(_DWORD *)(a1 + 120),
      *(HDC *)(a1 + 136),
      0,
      0,
      -2134114272,
      0xFFFFFFu,
      0);
LABEL_25:
    MNDestroyAnimationBitmap(a1);
    _ReleaseDC(*(_QWORD *)(a1 + 96));
    v16 = *(_QWORD *)a1;
    *(_QWORD *)(a1 + 96) = 0LL;
    return FindTimer(*(_QWORD *)(v16 + 56), 65531LL, 0, 1, 0LL);
  }
  v6 = *(_DWORD *)(a1 + 108);
  v7 = *(_DWORD *)(a1 + 112);
  if ( (*(_DWORD *)(a1 + 8) & 0x180000) != 0 )
  {
    DPIMetrics = GetDPIMetrics(v5);
    v5 = *(unsigned int *)(a1 + 116);
    result = (int)(v4 * *(_DWORD *)(DPIMetrics + 8) + 4) / 8;
    *(_DWORD *)(a1 + 108) = result;
    if ( result > (int)v5 )
      *(_DWORD *)(a1 + 108) = v5;
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x600000) != 0 )
  {
    v9 = GetDPIMetrics(v5);
    v10 = *(_DWORD *)(a1 + 120);
    result = (int)(v4 * *(_DWORD *)(v9 + 12) + 8) / 16;
    *(_DWORD *)(a1 + 112) = result;
    if ( result > v10 )
      *(_DWORD *)(a1 + 112) = v10;
  }
  v11 = *(_DWORD *)(a1 + 108);
  if ( v11 != v6 || *(_DWORD *)(a1 + 112) != v7 )
  {
    v12 = 0;
    v13 = *(_DWORD *)(a1 + 112);
    if ( ((*(_DWORD *)(a1 + 8) >> 19) & 8) == 0 )
      v12 = *(_DWORD *)(a1 + 120) - v13;
    v14 = 0;
    v15 = (*(_DWORD *)(a1 + 8) >> 19) & 2;
    if ( !v15 )
      v14 = *(_DWORD *)(a1 + 116) - v11;
    NtGdiBitBltInternal(
      *(HDC *)(a1 + 96),
      v15 != 0 ? *(_DWORD *)(a1 + 116) - v11 : 0,
      ((*(_DWORD *)(a1 + 8) >> 19) & 8) != 0 ? *(_DWORD *)(a1 + 120) - v13 : 0,
      v11,
      v13,
      *(HDC *)(a1 + 136),
      v14,
      v12,
      -2134114272,
      0xFFFFFFu,
      0);
    result = *(_DWORD *)(a1 + 108);
    if ( *(_DWORD *)(a1 + 116) == result )
    {
      result = *(_DWORD *)(a1 + 112);
      if ( *(_DWORD *)(a1 + 120) == result )
        goto LABEL_25;
    }
  }
  return result;
}
