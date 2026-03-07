void __fastcall CRefUnRefPointerMsgId::ReferenceAndThreadLock(
        CRefUnRefPointerMsgId *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax

  if ( *(_QWORD *)this && !*((_BYTE *)this + 32) )
  {
    *((_BYTE *)this + 32) = 1;
    v5 = SGDGetUserSessionState(this, a2, a3, a4);
    CTouchProcessor::ReferenceMsgDataFromGuard(*(_QWORD *)(v5 + 3424), *(_QWORD *)this);
    if ( qword_1C02D65C8 )
      qword_1C02D65C8(*(_QWORD *)this, (char *)this + 8, CRefUnRefPointerMsgId::UnReferenceOnThreadTermination);
  }
}
