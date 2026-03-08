/*
 * XREFs of ?CanReleaseToFrame@CFlipToken@@IEAAJIPEA_N@Z @ 0x1C0078888
 * Callers:
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C0078DE0 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetIndependentFlipState@CompositionSurfaceObject@@QEBA?AW4IndependentFlipState@@_K@Z @ 0x1C0078D5C (-GetIndependentFlipState@CompositionSurfaceObject@@QEBA-AW4IndependentFlipState@@_K@Z.c)
 *     ?SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z @ 0x1C0079598 (-SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z.c)
 */

__int64 __fastcall CFlipToken::CanReleaseToFrame(CFlipToken *this, unsigned int a2, bool *a3)
{
  int v3; // esi
  CompositionSurfaceObject *v7; // rcx
  bool v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *a3 = 0;
  if ( *((_DWORD *)this + 6) == 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 144LL))(this) )
    {
      *a3 = *((_BYTE *)this + 564);
    }
    else if ( (unsigned int)CompositionSurfaceObject::GetIndependentFlipState(
                              *((_QWORD *)this + 4),
                              *((_QWORD *)this + 5)) != 2 )
    {
      v7 = (CompositionSurfaceObject *)*((_QWORD *)this + 4);
      v9 = 0;
      v3 = CompositionSurfaceObject::SyncIntervalSatisfied(v7, a2, &v9);
      if ( v3 >= 0 && (v9 || !*((_DWORD *)this + 28)) )
        *a3 = 1;
    }
  }
  return (unsigned int)v3;
}
