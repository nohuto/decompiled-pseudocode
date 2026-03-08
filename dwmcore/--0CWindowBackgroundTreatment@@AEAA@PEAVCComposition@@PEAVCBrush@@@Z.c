/*
 * XREFs of ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCBrush@@@Z @ 0x1800A4B3C
 * Callers:
 *     ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x1800A4938 (-ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETW.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DA10 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ @ 0x1800A4C98 (-UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

CWindowBackgroundTreatment *__fastcall CWindowBackgroundTreatment::CWindowBackgroundTreatment(
        CWindowBackgroundTreatment *this,
        struct CComposition *a2,
        struct CBrush *a3)
{
  struct CResource *v4; // rdx
  int v5; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CWindowBackgroundTreatment::`vftable'{for `CResource'};
  *((_QWORD *)this + 9) = a3;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 8) = &CWindowBackgroundTreatment::`vftable'{for `IDeviceResourceNotify'};
  *(_OWORD *)((char *)this + 88) = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *((_QWORD *)this + 13) = qword_1803E1FB0;
  *((_OWORD *)this + 7) = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *((_QWORD *)this + 16) = qword_1803E1FB0;
  *(_OWORD *)((char *)this + 136) = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *((_QWORD *)this + 19) = qword_1803E1FB0;
  CMILMatrix::SetToIdentity((CWindowBackgroundTreatment *)((char *)this + 160));
  *((_DWORD *)this + 57) = 0;
  CMILMatrix::SetToIdentity((CWindowBackgroundTreatment *)((char *)this + 232));
  v4 = (struct CResource *)*((_QWORD *)this + 9);
  *((_DWORD *)this + 75) = 1;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  v5 = CResource::RegisterNotifier(this, v4);
  if ( v5 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v5, retaddr);
  CWindowBackgroundTreatment::UpdateBackdropFlags(this);
  return this;
}
