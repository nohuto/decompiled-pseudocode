/*
 * XREFs of ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C00B967C
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C00B97AC (xxxDrawCaptionTemp.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     _DrawIconEx @ 0x1C00BDD48 (_DrawIconEx.c)
 *     FillRect @ 0x1C00C1CEC (FillRect.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00C3124 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C00C37D8 (PrepareHDCBITSBitmap.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C0242E14 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 */

void __fastcall DrawCaptionIcon(HDC a1, struct tagRECT *a2, struct tagCURSOR *a3, HBRUSH a4, unsigned int a5)
{
  int v6; // ebp
  unsigned int DpiForSystem; // eax
  LONG left; // edi
  LONG top; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // eax
  int DpiDependentMetric; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // eax
  int v20; // eax
  __int64 i; // rcx
  int v22; // esi
  struct tagCURSOR **v23; // rax
  _QWORD *v24; // rax
  unsigned int v25; // eax
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // rdx
  __int128 *v29; // rcx
  __int128 v30; // xmm1
  unsigned int v31; // edi
  __int64 v32; // rdx
  __int64 v33; // rcx
  HDC v34; // rbx
  unsigned int v35; // eax
  __int64 v36; // rcx
  __int16 *OemBitmapInfoForDpi; // rax
  RECT v38; // [rsp+60h] [rbp-38h] BYREF

  v6 = a2->bottom - a2->top;
  DpiForSystem = GetDpiForSystem((__int64)a1, (__int64)a2);
  if ( v6 != *(__int16 *)(GetOemBitmapInfoForDpi(29LL, DpiForSystem) + 6)
    || a4 == *(HBRUSH *)(gpsi + 4944LL)
    || *((_QWORD *)a3 + 16) )
  {
    left = a2->left;
    top = a2->top;
    v38.left = left;
    v38.top = top;
    v38.right = left + v6;
    v38.bottom = top + v6;
    FillRect(a1, &v38, a4);
    v15 = GetDpiForSystem(v14, v13);
    DpiDependentMetric = GetDpiDependentMetric(20LL, v15);
    v19 = GetDpiForSystem(v18, v17);
    v20 = GetDpiDependentMetric(21LL, v19);
    DrawIconEx(
      a1,
      (unsigned int)((v6 - DpiDependentMetric) / 2 + left + 1),
      (unsigned int)(top + (v6 - v20) / 2),
      a3,
      DpiDependentMetric,
      v20,
      0,
      0LL,
      3);
  }
  else
  {
    if ( (a5 & 0x10) != 0 )
    {
      i = (__int64)a3 - gcachedCaptions[0];
      v22 = a3 != (struct tagCURSOR *)gcachedCaptions[0] ? 5 : 0;
    }
    else
    {
      v22 = 1;
      i = 1LL;
      v23 = (struct tagCURSOR **)&gcachedCaptions[2];
      do
      {
        if ( *v23 == a3 )
          break;
        ++v22;
        ++i;
        v23 += 2;
      }
      while ( i < 5 );
    }
    if ( v22 >= 5 )
    {
      if ( (a5 & 0x10) != 0 )
      {
        v22 = 0;
      }
      else
      {
        v22 = 1;
        v24 = &gcachedCaptions[2];
        for ( i = 1LL; i < 4; ++i )
        {
          if ( !*v24 )
            break;
          ++v22;
          v24 += 2;
        }
      }
      v25 = GetDpiForSystem(i, a5 & 0x10);
      v26 = GetDpiDependentMetric(20LL, v25);
      BltMe4Times(gcachedCaptions[2 * v22 + 1], v6, v26, ghdcMem, a3, a5);
      *(_QWORD *)&v38.right = a3;
      *(_QWORD *)&v38.left = &gcachedCaptions[2 * v22];
      HMAssignmentLock(&v38, 0LL);
    }
    if ( v22 > 1LL )
    {
      v27 = v22 - 1LL;
      v28 = 16LL * v22;
      v22 = 1;
      do
      {
        v29 = (__int128 *)(v28 + gcachedCaptions[0]);
        v28 -= 16LL;
        v30 = *v29;
        *v29 = *(_OWORD *)(v28 + gcachedCaptions[0]);
        *(_OWORD *)(v28 + gcachedCaptions[0]) = v30;
        --v27;
      }
      while ( v27 );
    }
    v31 = gcachedCaptions[2 * v22 + 1];
    v34 = (HDC)PrepareHDCBITSBitmap(0LL);
    if ( v34 )
    {
      v35 = GetDpiForSystem(v33, v32);
      v36 = v31 + 1;
      if ( (a5 & 1) != 0 )
        v36 = v31;
      OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(v36, v35);
      NtGdiBitBltInternal(
        a1,
        a2->left,
        a2->top,
        v6,
        v6,
        v34,
        *OemBitmapInfoForDpi,
        OemBitmapInfoForDpi[1],
        13369376,
        0,
        0);
    }
  }
  a2->left += v6;
}
