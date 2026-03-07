void __fastcall SetConnectCompletedState(int a1)
{
  __int64 v1; // rcx

  gbConnectCompleted = a1;
  if ( !gServiceSessionId )
  {
    PowerConnectionEvent();
    if ( qword_1C02D72C8 )
    {
      if ( (int)qword_1C02D72C8() >= 0 )
      {
        v1 = ReferenceDwmApiPort();
        if ( qword_1C02D72D0 )
          qword_1C02D72D0(v1);
      }
    }
  }
}
