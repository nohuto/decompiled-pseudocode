__int64 __fastcall CHidInput::PostInitialize(CHidInput *this, __int64 a2, __int64 a3, __int64 a4)
{
  if ( isInputVirtualizationEnabled((__int64)this, a2, a3, a4)
    && CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
  {
    CIVChannel::Initialize((CHidInput *)((char *)this + 1352));
  }
  return 0LL;
}
