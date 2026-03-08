/*
 * XREFs of ?ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019BEFC
 * Callers:
 *     ?ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019C478 (-ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x180031CA8 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F1F6C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F2FE0 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x180129132 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x180129152 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 *     ?Add@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x18019A63C (-Add@-$CArray@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@VCMa.c)
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x18019BD9C (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 *     ?OnContactHoverDepart@CManipulationContext@@QEAAXI@Z @ 0x1801A17F8 (-OnContactHoverDepart@CManipulationContext@@QEAAXI@Z.c)
 */

void __fastcall CManipulationManager::ProcessFrameInputPostTargeting(
        CManipulationManager *this,
        struct CManipulationFrame *a2)
{
  char v4; // r12
  unsigned int v5; // esi
  bool IsMousewheelFrame; // r13
  __int64 v7; // rdx
  __int64 v8; // r15
  int v9; // eax
  int *v10; // r14
  CManipulationContext *v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD); // rbx
  unsigned int v13; // eax
  char v14; // r8
  __int64 v15; // r10
  __int64 (__fastcall ***v16)(_QWORD); // [rsp+88h] [rbp+10h] BYREF
  __int64 (__fastcall ***v17)(_QWORD); // [rsp+90h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  IsMousewheelFrame = CManipulationFrame::IsMousewheelFrame(a2);
  if ( *(_DWORD *)(v7 + 16) )
  {
    do
    {
      v8 = 248LL * v5;
      v9 = *(_DWORD *)((char *)a2 + v8 + 380);
      v10 = (int *)((char *)a2 + v8);
      if ( (v9 & 0x840000) != 0 || IsMousewheelFrame )
      {
        CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
          (__int64)this + 160,
          &v17,
          v10 + 93);
        v12 = v17;
        if ( v17 )
        {
          ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))(*v17)[3])(v17, (unsigned int)v10[93]);
          v13 = ConvertToInputType(*((_DWORD *)a2 + 92), *((_DWORD *)a2 + 95));
          CManipulationManager::OnUp((__int64)this, v15, v10[93], v13, v12, 0, 0, v14);
        }
        Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v17);
      }
      else if ( (v9 & 2) == 0 )
      {
        v11 = (CManipulationContext *)*((_QWORD *)this + 30);
        if ( v11 )
          CManipulationContext::OnContactHoverDepart(v11, v10[93]);
      }
      if ( !v4 && *(_QWORD *)((char *)a2 + v8 + 392) == -1LL )
      {
        v16 = (__int64 (__fastcall ***)(_QWORD))a2;
        v4 = 1;
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v16);
        CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Add(
          (int *)this + 56,
          &v16);
        Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v16);
      }
      ++v5;
    }
    while ( v5 < *((_DWORD *)a2 + 4) );
  }
}
