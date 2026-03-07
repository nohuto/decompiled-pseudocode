void __fastcall CHidInput::PreUninitialize(CHidInput *this, __int64 a2, __int64 a3, __int64 a4)
{
  if ( isInputVirtualizationEnabled((__int64)this, a2, a3, a4)
    && CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
  {
    CIVChannel::Uninitialize((CHidInput *)((char *)this + 1352));
  }
  RIMRemoveInputOfType(*((_QWORD *)this + 1), 60LL);
}
