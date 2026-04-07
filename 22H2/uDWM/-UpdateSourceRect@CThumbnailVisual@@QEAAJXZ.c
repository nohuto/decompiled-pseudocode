/*
 * XREFs of ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x18000D990
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180010F60 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z @ 0x18000E2A4 (-Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z.c)
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x18000E5C0 (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180010F0C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180014E98 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18002A9A8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     ?ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z @ 0x180094074 (-ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CThumbnailVisual::UpdateSourceRect(CThumbnailVisual *this)
{
  unsigned int v2; // esi
  __int64 v3; // r8
  _DWORD *v4; // rdx
  LONG v5; // r9d
  LONG v6; // r10d
  LONG v7; // eax
  LONG v8; // ecx
  __int64 v9; // rax
  LONG left; // edx
  LONG top; // r8d
  __int64 j; // rax
  int v13; // eax
  int v14; // eax
  CRectResourceProxy *v15; // rcx
  int v16; // eax
  __int64 i; // rax
  int v19; // eax
  __m128i v20; // xmm6
  int v21; // ebx
  int v22; // eax
  __int64 v23; // r8
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  LONG v29; // eax
  LONG v30; // ecx
  __int128 v31; // [rsp+30h] [rbp-50h]
  struct tagRECT v32; // [rsp+40h] [rbp-40h] BYREF
  __int128 v33; // [rsp+50h] [rbp-30h] BYREF

  v2 = 0;
  if ( !*((_QWORD *)this + 49) || !*((_QWORD *)this + 46) )
    return v2;
  v31 = 0LL;
  v33 = 0LL;
  if ( CThumbnailVisual::_IsImmersiveIconic(this) )
  {
    *(_QWORD *)&v33 = 0LL;
    v24 = 0;
    v25 = *((_QWORD *)this + 47);
    v26 = *(_QWORD *)(v25 + 376);
    if ( v26 )
      v24 = *(_DWORD *)(v26 + 120);
    v27 = 0;
    *((float *)&v33 + 2) = (float)v24;
    v28 = *(_QWORD *)(v25 + 376);
    if ( v28 )
      v27 = *(_DWORD *)(v28 + 124);
    *((float *)&v33 + 3) = (float)v27;
    goto LABEL_18;
  }
  v3 = *((_QWORD *)this + 46);
  if ( (*(_BYTE *)(v3 + 36) & 2) != 0 )
  {
    for ( i = 0LL; i < 4; ++i )
      *((float *)&v33 + i) = (float)*(int *)(v3 + 4 * i + 56);
    LODWORD(v31) = *(_DWORD *)(v3 + 56);
    v19 = 0;
    if ( *(_DWORD *)(v3 + 64) - (int)v31 >= 0 )
      v19 = *(_DWORD *)(v3 + 64) - *(_DWORD *)(v3 + 56);
    DWORD1(v31) = *(_DWORD *)(v3 + 60);
    DWORD2(v31) = v19;
    v14 = *(_DWORD *)(v3 + 68) - DWORD1(v31);
    if ( v14 < 0 )
      goto LABEL_18;
  }
  else
  {
    v4 = (_DWORD *)*((_QWORD *)this + 47);
    if ( !v4 )
      goto LABEL_18;
    v5 = v4[20] - v4[23];
    v6 = v4[21] - v4[25];
    v7 = v4[22];
    v8 = v4[24];
    v32.right = v5;
    v32.bottom = v6;
    v32.left = v7;
    v32.top = v8;
    v9 = *(_QWORD *)(v3 + 24);
    if ( (*(_BYTE *)(v9 + 612) & 0x10) != 0
      && !*(_DWORD *)(v3 + 77)
      && v4[18] == 2
      && ((*(_DWORD *)(v9 + 100) & 0x1000000) != 0 || (*(_BYTE *)(v9 + 613) & 2) != 0) )
    {
      v32.right = v5 - *(_DWORD *)(v9 + 284) - *(_DWORD *)(v9 + 280);
      v32.bottom = v6 - *(_DWORD *)(v9 + 292) - *(_DWORD *)(v9 + 288);
    }
    if ( *(_BYTE *)(v3 + 32) )
    {
      v29 = v4[20];
      top = 0;
      v30 = v4[21];
      left = 0;
      *(_QWORD *)&v32.left = 0LL;
      v32.right = v29;
      v32.bottom = v30;
    }
    else
    {
      if ( *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 46) + 24LL) + 40LL) == CWindowList::GetShellWindowForDesktop(
                                                                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                             + 61),
                                                                             *(_QWORD *)(*(_QWORD *)(v3 + 24) + 120LL)) )
        ShiftViewPortOrigin(&v32);
      left = v32.left;
      top = v32.top;
    }
    for ( j = 0LL; j < 16; j += 4LL )
      *(float *)((char *)&v33 + j) = (float)*(int *)((char *)&v32.left + j);
    v13 = 0;
    *(_QWORD *)&v31 = __PAIR64__(top, left);
    if ( v32.right - left >= 0 )
      v13 = v32.right - left;
    DWORD2(v31) = v13;
    v14 = 0;
    if ( v32.bottom - top >= 0 )
      v14 = v32.bottom - top;
  }
  HIDWORD(v31) = v14;
LABEL_18:
  if ( CThumbnailVisual::_IsThumbnailCVIStatic(this) )
  {
    v20 = *(__m128i *)((char *)this + 500);
    v21 = MulDiv(*((_DWORD *)this + 129) - v31, _mm_cvtsi128_si32(_mm_srli_si128(v20, 8)), *((_DWORD *)this + 131))
        + _mm_cvtsi128_si32(v20);
    v22 = MulDiv(
            *((_DWORD *)this + 130) - DWORD1(v31),
            _mm_cvtsi128_si32(_mm_srli_si128(v20, 12)),
            *((_DWORD *)this + 132));
    v23 = *((_QWORD *)this + 46);
    v32.left = v21 + *(_DWORD *)(v23 + 40);
    v32.top = v22 + _mm_cvtsi128_si32(_mm_srli_si128(v20, 4)) + *(_DWORD *)(v23 + 44);
    CVisual::SetOffset(this, (const struct tagPOINT *)&v32);
  }
  else
  {
    v15 = (CRectResourceProxy *)*((_QWORD *)this + 49);
    *(_OWORD *)((char *)this + 516) = v31;
    v16 = CRectResourceProxy::Update(v15, (const struct MilRectF *)&v33);
    v2 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x3ADu);
  }
  return v2;
}
