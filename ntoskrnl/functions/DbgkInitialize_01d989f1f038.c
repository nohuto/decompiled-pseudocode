void DbgkInitialize()
{
  if ( (_DWORD)InitializationPhase )
  {
    if ( (_DWORD)InitializationPhase != 1 )
      KeBugCheckEx(0x33u, 3uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
    DbgkpInitializePhase1();
  }
  else
  {
    DbgkpInitializePhase0();
  }
}
