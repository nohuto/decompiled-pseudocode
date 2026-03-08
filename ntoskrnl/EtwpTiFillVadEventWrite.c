/*
 * XREFs of EtwpTiFillVadEventWrite @ 0x1402FC438
 * Callers:
 *     EtwpTiVadQueryEventWrite @ 0x1402F8AE4 (EtwpTiVadQueryEventWrite.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x140793510 (EtwpTiVadQueryEventWriteCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwpTiFillZeroVad @ 0x1402F83D0 (EtwpTiFillZeroVad.c)
 *     EtwpTiFillVad @ 0x1402FC4F4 (EtwpTiFillVad.c)
 */

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
