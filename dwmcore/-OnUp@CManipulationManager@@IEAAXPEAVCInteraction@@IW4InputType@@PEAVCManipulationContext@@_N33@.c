/*
 * XREFs of ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x18019BD9C
 * Callers:
 *     ?OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z @ 0x18019B610 (-OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z.c)
 *     ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x18019B9B8 (-OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019BEFC (-ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F1F6C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F2FE0 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0pq_EventWriteTransfer @ 0x180129252 (McTemplateU0pq_EventWriteTransfer.c)
 *     ?Remove@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x18019D38C (-Remove@-$CArray@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@V.c)
 *     ?RemoveKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHAEBI@Z @ 0x18019D528 (-RemoveKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPt.c)
 *     ?RemoveKey@?$CMap@IW4InputType@@V?$CMapEqualHelper@IW4InputType@@@@@@QEAAHAEBI@Z @ 0x18019D558 (-RemoveKey@-$CMap@IW4InputType@@V-$CMapEqualHelper@IW4InputType@@@@@@QEAAHAEBI@Z.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z @ 0x1801A0C7C (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType.c)
 *     ?OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z @ 0x1801A15D0 (-OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1801A4254 (-clear@-$_Tree@V-$_Tmap_traits@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUDEV.c)
 *     ?ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ @ 0x1802097D4 (-ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ.c)
 */

__int64 __fastcall CManipulationManager::OnUp(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 (__fastcall ***a5)(_QWORD),
        char a6,
        char a7,
        char a8)
{
  __int64 (__fastcall ***v8)(_QWORD); // rbx
  unsigned int v9; // ebp
  void *v13; // rdx
  __int64 result; // rax
  unsigned int v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = a3;
  v8 = a5;
  v9 = a4;
  if ( a5 )
  {
    CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::RemoveKey(
      a1 + 160,
      &v15);
    CMap<unsigned int,enum InputType,CMapEqualHelper<unsigned int,enum InputType>>::RemoveKey(a1 + 200, &v15);
    CManipulationContext::OnContactDepart(v8, a3, v9, a2, a6, a7, a8);
    if ( v8[6] )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
      {
        v13 = &MANIPULATION_CONTEXT_CONTACT_DEPARTED;
        goto LABEL_7;
      }
    }
    else
    {
      a5 = v8;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&a5);
      CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Remove(
        a1 + 184,
        &a5);
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&a5);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
      {
        v13 = &MANIPULATION_CONTEXT_DESTROYED;
LABEL_7:
        McTemplateU0pq_EventWriteTransfer(
          (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
          (__int64)v13,
          (__int64)v8,
          a3);
      }
    }
    result = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD, _QWORD))(*v8)[9])(v8, a3, 0LL);
    goto LABEL_10;
  }
  LOBYTE(a4) = a7;
  result = CManipulationContext::CleanTreeState(a2, 0LL, *(_QWORD *)(a1 + 16), a4, v9);
LABEL_10:
  if ( !*(_DWORD *)(a1 + 192) )
  {
    CInteraction::ResetDefaultStateForAllInteractions();
    return std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::clear();
  }
  return result;
}
