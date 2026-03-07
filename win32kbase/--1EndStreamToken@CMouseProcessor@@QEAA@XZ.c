void __fastcall CMouseProcessor::EndStreamToken::~EndStreamToken(CMouseProcessor **this)
{
  if ( *((_BYTE *)this + 16)
    && (*((_DWORD *)this + 5) & 0xFFFFFFFB) != 0
    && (*((_DWORD *)this[1] + 4) == 3 || !_InterlockedCompareExchange((volatile signed __int32 *)*this + 924, 1, 1)) )
  {
    CMouseProcessor::SendInputStreamEndedMessage(*this, this[1]);
  }
}
