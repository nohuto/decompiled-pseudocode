void __fastcall SetConnectedState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  gbConnected = a1;
  if ( (_DWORD)a2 != gbConnectCompleted )
  {
    gbConnectCompleted = a2;
    PowerConnectionEvent(a1, a2, a3, a4);
  }
}
