void __fastcall FxIoTarget::Remove(FxIoTarget *this)
{
  unsigned __int8 v2; // r8
  unsigned __int8 v3; // [rsp+20h] [rbp-30h]
  _LIST_ENTRY pendedHead; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 wait; // [rsp+60h] [rbp+10h] BYREF
  _SINGLE_LIST_ENTRY sentHead; // [rsp+68h] [rbp+18h] BYREF

  sentHead.Next = 0LL;
  pendedHead.Blink = &pendedHead;
  wait = 0;
  pendedHead.Flink = &pendedHead;
  v3 = 1;
  this->GotoRemoveState(this, WdfIoTargetDeleted, &pendedHead, &sentHead, v3, &wait);
  FxIoTarget::CompletePendedRequestList(this, &pendedHead, v2);
  FxIoTarget::_CancelSentRequests(&sentHead);
  if ( wait )
    this->WaitForSentIoToComplete(this);
  this->WaitForDisposeEvent(this);
}
