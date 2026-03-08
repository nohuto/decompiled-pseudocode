/*
 * XREFs of MNAnimate @ 0x1C0237090
 * Callers:
 *     MNGetPopupFromMenu @ 0x1C00A69F0 (MNGetPopupFromMenu.c)
 *     xxxMNCloseHierarchy @ 0x1C021A0D0 (xxxMNCloseHierarchy.c)
 *     xxxMNSelectItem @ 0x1C021C660 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C02353CC (xxxTrackPopupMenuEx.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C005E110 (NtGdiBitBltInternal.c)
 *     GetDPIMetrics @ 0x1C009FD5C (GetDPIMetrics.c)
 *     FindTimer @ 0x1C00DEEDC (FindTimer.c)
 *     StopFade @ 0x1C01BDEF0 (StopFade.c)
 *     MNDestroyAnimationBitmap @ 0x1C0201EB0 (MNDestroyAnimationBitmap.c)
 *     ?IS_USERCRIT_CONTENDED@@YA_NXZ @ 0x1C02364B8 (-IS_USERCRIT_CONTENDED@@YA_NXZ.c)
 */

char __fastcall MNAnimate(__int64 a1, int a2)
{
  int v2; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v6; // edi
  int v7; // r14d
  __int64 DPIMetrics; // rax
  int v9; // r9d
  int v10; // r10d
  int v11; // edi
  int v12; // ecx
  int v13; // ebx
  __int64 v14; // rcx

  LOBYTE(v2) = gfade[0];
  if ( (gfade[12] & 0x10) != 0 )
  {
    if ( !a2 )
      LOBYTE(v2) = StopFade();
    return v2;
  }
  if ( !*(_QWORD *)(a1 + 96) )
    return v2;
  v4 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *(_DWORD *)(a1 + 104);
  if ( !a2 || v4 > 0xA5 || (LOBYTE(v2) = IS_USERCRIT_CONTENDED(0xFFFFF78000000004uLL), (_BYTE)v2) )
  {
    NtGdiBitBltInternal(
      *(HDC *)(a1 + 96),
      0,
      0,
      *(_DWORD *)(a1 + 116),
      *(_DWORD *)(a1 + 120),
      *(_QWORD *)(a1 + 136),
      0,
      0,
      -2134114272,
      0xFFFFFF,
      0);
LABEL_26:
    MNDestroyAnimationBitmap(a1);
    _ReleaseDC(*(_QWORD *)(a1 + 96));
    v14 = *(_QWORD *)a1;
    *(_QWORD *)(a1 + 96) = 0LL;
    LOBYTE(v2) = FindTimer(*(void **)(v14 + 56), (void *)0xFFFB, 0, 1, 0LL);
    return v2;
  }
  v6 = *(_DWORD *)(a1 + 108);
  v7 = *(_DWORD *)(a1 + 112);
  if ( (*(_DWORD *)(a1 + 8) & 0x180000) != 0 )
  {
    DPIMetrics = GetDPIMetrics(v5);
    v5 = *(unsigned int *)(a1 + 116);
    v2 = (int)(*(_DWORD *)(DPIMetrics + 8) * v4 + 4) / 8;
    if ( v2 > (int)v5 )
      v2 = *(_DWORD *)(a1 + 116);
    *(_DWORD *)(a1 + 108) = v2;
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x600000) != 0 )
  {
    v2 = (int)(*(_DWORD *)(GetDPIMetrics(v5) + 12) * v4 + 8) / 16;
    if ( v2 > *(_DWORD *)(a1 + 120) )
      v2 = *(_DWORD *)(a1 + 120);
    *(_DWORD *)(a1 + 112) = v2;
  }
  v9 = *(_DWORD *)(a1 + 108);
  if ( v9 != v6 || *(_DWORD *)(a1 + 112) != v7 )
  {
    v10 = 0;
    v11 = *(_DWORD *)(a1 + 112);
    if ( ((*(_DWORD *)(a1 + 8) >> 19) & 8) == 0 )
      v10 = *(_DWORD *)(a1 + 120) - v11;
    v12 = 0;
    v13 = (*(_DWORD *)(a1 + 8) >> 19) & 2;
    if ( !v13 )
      v12 = *(_DWORD *)(a1 + 116) - v9;
    NtGdiBitBltInternal(
      *(HDC *)(a1 + 96),
      v13 != 0 ? *(_DWORD *)(a1 + 116) - v9 : 0,
      ((*(_DWORD *)(a1 + 8) >> 19) & 8) != 0 ? *(_DWORD *)(a1 + 120) - v11 : 0,
      v9,
      v11,
      *(_QWORD *)(a1 + 136),
      v12,
      v10,
      -2134114272,
      0xFFFFFF,
      0);
    v2 = *(_DWORD *)(a1 + 108);
    if ( *(_DWORD *)(a1 + 116) == v2 )
    {
      v2 = *(_DWORD *)(a1 + 112);
      if ( *(_DWORD *)(a1 + 120) == v2 )
        goto LABEL_26;
    }
  }
  return v2;
}
