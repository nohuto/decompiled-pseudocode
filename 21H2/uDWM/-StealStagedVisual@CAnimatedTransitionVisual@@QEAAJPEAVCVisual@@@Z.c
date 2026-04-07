/*
 * XREFs of ?StealStagedVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z @ 0x180009680
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180033E24 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024BC0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18002B1E8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B1F0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::StealStagedVisual(CAnimatedTransitionVisual *this, struct CVisual *a2)
{
  unsigned int v2; // ebp
  int v5; // eax
  unsigned int v6; // esi
  int v7; // eax
  struct tagPOINT v8; // rbx
  LONG y; // r15d
  struct tagPOINT *v10; // rcx
  int inserted; // eax
  struct tagPOINT v13; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  v5 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)a2 + 3) + 32LL), a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x37Eu);
  }
  else
  {
    if ( *((_BYTE *)this + 968) )
    {
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 90) + 32LL), a2, 0LL, 0, 1);
      v6 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x384u);
        goto LABEL_10;
      }
    }
    else
    {
      v7 = VisualCollection::InsertRelative((CAnimatedTransitionVisual *)((char *)this + 40), a2, 0LL, 0, 1);
      v6 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x388u);
        goto LABEL_10;
      }
    }
    v8 = *(struct tagPOINT *)(**((_QWORD **)a2 + 6) + 112LL);
    v13 = v8;
    if ( *((_DWORD *)a2 + 18) )
    {
      y = v13.y;
      do
      {
        v10 = *(struct tagPOINT **)(*((_QWORD *)a2 + 6) + 8LL * v2);
        v13 = v10[14];
        v13.x -= v8.x;
        v13.y -= y;
        CVisual::SetOffset((CVisual *)v10, &v13);
        ++v2;
      }
      while ( v2 < *((_DWORD *)a2 + 18) );
    }
    *((_BYTE *)this + 967) = 1;
  }
LABEL_10:
  CBaseObject::Release(a2);
  return v6;
}
