/*
 * XREFs of ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C00B91A0
 * Callers:
 *     <none>
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C004FF0C (isInputVirtualizationEnabled.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0057EC8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     RIMRemoveInputOfType @ 0x1C00B91E0 (RIMRemoveInputOfType.c)
 *     ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x1C01F3B70 (-Uninitialize@CIVChannel@@QEAAXXZ.c)
 */

void __fastcall CHidInput::PreUninitialize(CHidInput *this, __int64 a2, __int64 a3, __int64 a4)
{
  if ( isInputVirtualizationEnabled((__int64)this, a2, a3, a4)
    && CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
  {
    CIVChannel::Uninitialize((CHidInput *)((char *)this + 1288));
  }
  RIMRemoveInputOfType(*((_QWORD *)this + 1), 60LL);
}
