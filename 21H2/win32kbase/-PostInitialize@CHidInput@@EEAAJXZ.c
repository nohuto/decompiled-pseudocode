/*
 * XREFs of ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C00C5700
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     isInputVirtualizationEnabled @ 0x1C00384C4 (isInputVirtualizationEnabled.c)
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x1C01F654C (-Initialize@CIVChannel@@QEAAXXZ.c)
 */

__int64 __fastcall CHidInput::PostInitialize(CHidInput *this)
{
  if ( isInputVirtualizationEnabled() && CInputThreadBase::IsInputThread(gpInputThread) )
    CIVChannel::Initialize((CHidInput *)((char *)this + 1264));
  return 0LL;
}
