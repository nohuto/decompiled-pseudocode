/*
 * XREFs of ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C00B6F30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     isInputVirtualizationEnabled @ 0x1C00384C4 (isInputVirtualizationEnabled.c)
 *     RIMRemoveInputOfType @ 0x1C00B6F70 (RIMRemoveInputOfType.c)
 *     ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x1C01F7658 (-Uninitialize@CIVChannel@@QEAAXXZ.c)
 */

void __fastcall CHidInput::PreUninitialize(CHidInput *this)
{
  if ( isInputVirtualizationEnabled() && CInputThreadBase::IsInputThread(gpInputThread) )
    CIVChannel::Uninitialize((CHidInput *)((char *)this + 1264));
  RIMRemoveInputOfType(*((_QWORD *)this + 1), 60LL);
}
