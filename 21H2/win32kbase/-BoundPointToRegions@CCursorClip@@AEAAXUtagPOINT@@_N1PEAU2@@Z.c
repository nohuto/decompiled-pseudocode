/*
 * XREFs of ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z @ 0x1C006D400
 * Callers:
 *     ?ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1C006D350 (-ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C001E924 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C003C040 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z.c)
 *     PtInRect @ 0x1C003C178 (PtInRect.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C003C1A0 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ?ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z @ 0x1C00E87D0 (-ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z.c)
 *     ?ApplySpeedBumpAndCornerLock@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z @ 0x1C01DB73C (-ApplySpeedBumpAndCornerLock@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z.c)
 */

void __fastcall CCursorClip::BoundPointToRegions(
        CCursorClip *this,
        struct tagPOINT a2,
        bool a3,
        bool a4,
        struct tagPOINT *a5)
{
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int128 v10; // xmm0
  __int64 v11; // rbx
  const struct tagRECT *v12; // rcx
  __int64 v13; // rdx
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF

  *a5 = a2;
  if ( PtInRect(*((_DWORD **)this + 31), *(_QWORD *)&a2) )
    return;
  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v14);
  InputConfig::Mouse::RegionFromPoint(*a5, (struct CLockedInputSpaceRegion *)v14);
  v8 = v14[0];
  if ( IsRectEmptyInl(*((const struct tagRECT **)this + 31)) )
  {
    if ( v8 )
    {
LABEL_4:
      if ( !PtInRect(*((_DWORD **)this + 31), (unsigned __int64)*a5) )
      {
        *((_OWORD *)this + 3) = *(_OWORD *)v8;
        *((_OWORD *)this + 4) = *(_OWORD *)(v8 + 16);
        *((_OWORD *)this + 5) = *(_OWORD *)(v8 + 32);
        *((_OWORD *)this + 6) = *(_OWORD *)(v8 + 48);
        *((_OWORD *)this + 7) = *(_OWORD *)(v8 + 64);
        *((_OWORD *)this + 8) = *(_OWORD *)(v8 + 80);
        *((_OWORD *)this + 9) = *(_OWORD *)(v8 + 96);
        v10 = *(_OWORD *)(v8 + 112);
        v11 = v8 + 128;
        *((_OWORD *)this + 10) = v10;
        *((_OWORD *)this + 11) = *(_OWORD *)v11;
        *((_OWORD *)this + 12) = *(_OWORD *)(v11 + 16);
        *((_OWORD *)this + 13) = *(_OWORD *)(v11 + 32);
        *((_OWORD *)this + 14) = *(_OWORD *)(v11 + 48);
        *((_QWORD *)this + 30) = *(_QWORD *)(v11 + 64);
      }
    }
  }
  else if ( v8 )
  {
    v13 = *(_QWORD *)v9 - *(_QWORD *)v8;
    if ( *(_QWORD *)v9 == *(_QWORD *)v8 )
      v13 = *(_QWORD *)(v9 + 8) - *(_QWORD *)(v8 + 8);
    if ( v13 )
      CCursorClip::ApplySpeedBumpAndCornerLock(this, *a5, a3, a4, a5);
    goto LABEL_4;
  }
  if ( !PtInRect((_DWORD *)v9, (unsigned __int64)*a5) )
    CCursorClip::ClipPointToRect(*a5, v12, a5);
  ExReleaseResourceLite(*(PERESOURCE *)v14[1]);
  KeLeaveCriticalRegion();
}
