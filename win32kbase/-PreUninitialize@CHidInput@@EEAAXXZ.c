/*
 * XREFs of ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C00C9650
 * Callers:
 *     <none>
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C0079014 (isInputVirtualizationEnabled.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C007CCB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     RIMRemoveInputOfType @ 0x1C00C9690 (RIMRemoveInputOfType.c)
 *     ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x1C022970C (-Uninitialize@CIVChannel@@QEAAXXZ.c)
 */

void __fastcall CHidInput::PreUninitialize(CHidInput *this, __int64 a2, __int64 a3, __int64 a4)
{
  if ( isInputVirtualizationEnabled((__int64)this, a2, a3, a4)
    && CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
  {
    CIVChannel::Uninitialize((CHidInput *)((char *)this + 1352));
  }
  RIMRemoveInputOfType(*((_QWORD *)this + 1), 60LL);
}
