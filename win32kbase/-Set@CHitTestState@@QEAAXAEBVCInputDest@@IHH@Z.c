void __fastcall CHitTestState::Set(CHitTestState *this, const struct CInputDest *a2, int a3, char a4, char a5)
{
  unsigned int v9; // eax

  if ( (*((_DWORD *)this + 31) & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 57);
  *((_DWORD *)this + 31) |= 4u;
  CInputDest::operator=((__int64)this, (__int64)a2);
  v9 = *((_DWORD *)this + 31) & 0xFFFFFFFC;
  *((_DWORD *)this + 30) = a3;
  *((_DWORD *)this + 31) = a4 & 1 | v9 | (2 * (a5 & 1));
}
