void __fastcall CRefUnRefPointerMsgId::ThreadUnlockAndUnReference(
        CRefUnRefPointerMsgId *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax

  if ( *((_BYTE *)this + 32) )
  {
    if ( qword_1C02D65D8 )
      qword_1C02D65D8((char *)this + 8);
    v5 = SGDGetUserSessionState(this, a2, a3, a4);
    CTouchProcessor::UnreferenceMsgDataFromGuard(*(_QWORD *)(v5 + 3424), *(_QWORD *)this);
  }
}
