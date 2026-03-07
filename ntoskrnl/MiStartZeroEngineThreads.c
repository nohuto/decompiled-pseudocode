__int64 __fastcall MiStartZeroEngineThreads(__int64 a1)
{
  __int64 v1; // rsi
  _BYTE *v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // rbp
  _QWORD *ZeroThreadContext; // rax

  v1 = *(_QWORD *)(a1 + 48);
  v2 = (_BYTE *)(a1 + 126);
  v3 = 1;
  v4 = 3LL;
  do
  {
    while ( *(_DWORD *)(v2 - 26) < *(_DWORD *)(v2 - 22) )
    {
      ZeroThreadContext = (_QWORD *)MiCreateZeroThreadContext(v2 - 30);
      if ( !ZeroThreadContext || (int)MiInsertNewZeroThread((__int64)(v2 - 30), ZeroThreadContext) < 0 )
      {
        v3 = 0;
        *v2 = 1;
        break;
      }
    }
    if ( !*(v2 - 3) )
    {
      if ( *(v2 - 5) )
      {
        MiZeroBootCalibratorStarted((__int64)(v2 - 30));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 16484), 0xFFFFFFFF) == 1 )
          KeSetEvent((PRKEVENT)(v1 + 16488), 0, 0);
      }
      MiSignalZeroingPassComplete((__int64)(v2 - 30));
    }
    v2 += 296;
    --v4;
  }
  while ( v4 );
  return v3;
}
