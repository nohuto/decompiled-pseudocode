/*
 * XREFs of ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N11PEAU2@@Z @ 0x1C0015640
 * Callers:
 *     ?ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1C0015590 (-ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0015510 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     PtInRect @ 0x1C00157B4 (PtInRect.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C00157DC (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C00159F0 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z.c)
 *     ?ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z @ 0x1C00F3162 (-ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z.c)
 *     ?ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z @ 0x1C020A744 (-ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z.c)
 *     ?ApplySpeedBumpAndCornerLock@CCursorClip@@AEAA_NPEAUtagPOINT@@_N1@Z @ 0x1C020A97C (-ApplySpeedBumpAndCornerLock@CCursorClip@@AEAA_NPEAUtagPOINT@@_N1@Z.c)
 *     ?SpeedBumpCornerLock@Cursor@InputTraceLogging@@SAXAEBUtagPOINT@@@Z @ 0x1C020B298 (-SpeedBumpCornerLock@Cursor@InputTraceLogging@@SAXAEBUtagPOINT@@@Z.c)
 */

void __fastcall CCursorClip::BoundPointToRegions(
        CCursorClip *this,
        struct tagPOINT a2,
        bool a3,
        bool a4,
        bool a5,
        struct tagPOINT *a6)
{
  struct tagPOINT *v6; // rsi
  _OWORD *v11; // rbp
  _QWORD *v12; // r14
  __int64 v13; // rdi
  __int128 v14; // xmm0
  _OWORD *v15; // rbp
  __int64 v16; // rcx
  _QWORD v17[7]; // [rsp+20h] [rbp-38h] BYREF

  v6 = a6;
  *a6 = a2;
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(*((_QWORD *)this + 31), a2) )
    return;
  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v17);
  InputConfig::Mouse::RegionFromPoint(*v6, (struct CLockedInputSpaceRegion *)v17);
  v11 = (_OWORD *)v17[0];
  if ( v17[0] )
    goto LABEL_3;
  v12 = 0LL;
  if ( a5
    && CCursorClip::DeadzoneJumping::ApplyDeadZoneJumpIfNeeded(
         (CCursorClip *)((char *)this + 280),
         *v6,
         *((const struct tagRECT **)this + 31),
         v6) )
  {
    InputConfig::Mouse::RegionFromPoint(*v6, (struct CLockedInputSpaceRegion *)v17);
    v11 = (_OWORD *)v17[0];
LABEL_3:
    v12 = v11;
  }
  v13 = *((_QWORD *)this + 31);
  if ( !IsRectEmptyInl((const struct tagRECT *)v13) )
  {
    if ( !v12 )
      goto LABEL_8;
    v16 = *(_QWORD *)v13 - *v12;
    if ( *(_QWORD *)v13 == *v12 )
      v16 = *(_QWORD *)(v13 + 8) - v12[1];
    if ( !v16 )
      goto LABEL_6;
    a6 = (struct tagPOINT *)a2;
    if ( CCursorClip::ApplySpeedBumpAndCornerLock(this, (struct tagPOINT *)&a6, a3, a4) )
    {
      *v6 = (struct tagPOINT)a6;
      InputTraceLogging::Cursor::SpeedBumpCornerLock(v6);
LABEL_6:
      v13 = *((_QWORD *)this + 31);
      if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(v13, *v6) )
      {
        *((_OWORD *)this + 3) = *v11;
        *((_OWORD *)this + 4) = v11[1];
        *((_OWORD *)this + 5) = v11[2];
        *((_OWORD *)this + 6) = v11[3];
        *((_OWORD *)this + 7) = v11[4];
        *((_OWORD *)this + 8) = v11[5];
        *((_OWORD *)this + 9) = v11[6];
        v14 = v11[7];
        v15 = v11 + 8;
        *((_OWORD *)this + 10) = v14;
        *((_OWORD *)this + 11) = *v15;
        *((_OWORD *)this + 12) = v15[1];
        *((_OWORD *)this + 13) = v15[2];
        *((_OWORD *)this + 14) = v15[3];
        *((_QWORD *)this + 30) = *((_QWORD *)v15 + 8);
      }
      goto LABEL_8;
    }
  }
  if ( v12 )
    goto LABEL_6;
LABEL_8:
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(v13, *v6) )
    CCursorClip::ClipPointToRect(*v6, (const struct tagRECT *)v13, v6);
  ExReleaseResourceLite(*(PERESOURCE *)v17[1]);
  KeLeaveCriticalRegion();
}
