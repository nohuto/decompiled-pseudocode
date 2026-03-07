void __fastcall ADAPTER_RENDER::CreateFormattingBuffer(ADAPTER_RENDER *this)
{
  if ( *((_QWORD *)this + 156) )
  {
    WdLogSingleEntry1(1LL, 4224LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pFormattingBuffer == NULL", 4224LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_QWORD *)this + 156) )
    *((_QWORD *)this + 156) = operator new[](0xFC00uLL, 0x4B677844u, 64LL);
}
