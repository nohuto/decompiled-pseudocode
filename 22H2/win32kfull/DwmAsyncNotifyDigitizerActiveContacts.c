/*
 * XREFs of DwmAsyncNotifyDigitizerActiveContacts @ 0x1C0274940
 * Callers:
 *     DwmAsyncNotifyDigitizerActiveContactsWrap @ 0x1C01EE0B0 (DwmAsyncNotifyDigitizerActiveContactsWrap.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall DwmAsyncNotifyDigitizerActiveContacts(PVOID Object, int a2, int a3)
{
  unsigned int v4; // ebx
  _OWORD v6[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]
  int v10; // [rsp+50h] [rbp-18h]

  v4 = -1073741823;
  if ( Object )
  {
    v10 = a3;
    v7 = 0LL;
    v9 = a2;
    memset(v6, 0, sizeof(v6));
    LODWORD(v6[0]) = 3407884;
    WORD2(v6[0]) = 0x8000;
    v8 = 1073741909;
    v4 = LpcRequestPort(Object, v6);
    ObfDereferenceObject(Object);
  }
  return v4;
}
