/*
 * XREFs of ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x180231528
 * Callers:
 *     ?ProcessSetMaxPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMAXPOSITION@@@Z @ 0x1802305C4 (-ProcessSetMaxPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTR.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1802316DC (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180231950 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180098D74 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z @ 0x18022EE84 (-EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1802316DC (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x180271C7C (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 */

void __fastcall CInteractionTracker::SetMaxPosition(CInteractionTracker *this, const struct D2DVector3 *a2)
{
  unsigned __int64 v4; // rcx
  float v5; // xmm0_4
  bool v6; // cf
  bool v7; // zf
  float v8; // xmm0_4
  char v9; // dl
  float v10; // xmm1_4
  float v11; // xmm0_4
  _DWORD v12[4]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *((_QWORD *)this + 13) - *(_QWORD *)a2;
  if ( !v4 )
    v4 = *((unsigned int *)this + 28) - (unsigned __int64)*((unsigned int *)a2 + 2);
  if ( v4 )
  {
    LODWORD(v5) = COERCE_UNSIGNED_INT(*((float *)this + 26) - *(float *)a2) & _xmm;
    v6 = v5 > 0.0000011920929;
    v7 = 0.0000011920929 == v5;
    v8 = *((float *)this + 27) - *((float *)a2 + 1);
    v9 = (v6 || v7) + 4;
    if ( COERCE_FLOAT(LODWORD(v8) & _xmm) >= 0.0000011920929 )
      v9 |= 2u;
    v7 = (*((_BYTE *)this + 541) & 8) == 0;
    *((_QWORD *)this + 13) = *(_QWORD *)a2;
    *((_DWORD *)this + 28) = *((_DWORD *)a2 + 2);
    if ( v7 )
      CInteractionTracker::EnsurePositionIsLessThanOrEqualToMax((__int64)this, v9);
    v10 = fminf(*((float *)this + 24), *((float *)this + 27));
    v12[0] = fminf(*((float *)this + 23), *((float *)this + 26));
    v11 = fminf(*((float *)this + 25), *((float *)this + 28));
    *(float *)&v12[1] = v10;
    *(float *)&v12[2] = v11;
    CInteractionTracker::SetMinPosition(this, (const struct D2DVector3 *)v12);
    if ( !*((_DWORD *)this + 44) )
      InteractionSourceManager::ReconfigureAllManipulations((CInteractionTracker *)((char *)this + 200));
    CResource::InvalidateAnimationSources(this, 26);
  }
}
