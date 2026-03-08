/*
 * XREFs of ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C00D3CD0
 * Callers:
 *     <none>
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C0079014 (isInputVirtualizationEnabled.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C007CCB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x1C022858C (-Initialize@CIVChannel@@QEAAXXZ.c)
 */

__int64 __fastcall CHidInput::PostInitialize(CHidInput *this, __int64 a2, __int64 a3, __int64 a4)
{
  if ( isInputVirtualizationEnabled((__int64)this, a2, a3, a4)
    && CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
  {
    CIVChannel::Initialize((CHidInput *)((char *)this + 1352));
  }
  return 0LL;
}
