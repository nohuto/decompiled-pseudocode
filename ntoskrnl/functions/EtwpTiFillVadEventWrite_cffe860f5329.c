NTSTATUS __fastcall EtwpTiFillVadEventWrite(
        PEVENT_DATA_DESCRIPTOR UserData,
        ULONG UserDataCount,
        char a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        PCEVENT_DESCRIPTOR EventDescriptor)
{
  unsigned int i; // r11d
  int v13; // eax
  int v14; // r11d

  for ( i = 0; i < a6; i = v14 + 1 )
  {
    if ( a3 && _bittest(&a5, i) )
      v13 = EtwpTiFillVad(&UserData[UserDataCount], a4 + ((unsigned __int64)i << 6));
    else
      v13 = EtwpTiFillZeroVad(&UserData[UserDataCount].Ptr);
    UserDataCount += v13;
  }
  return EtwWriteEx(EtwThreatIntProvRegHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
}
