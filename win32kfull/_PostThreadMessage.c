__int64 __fastcall PostThreadMessage(__int16 *a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0LL;
  SetUnavailableInputSource(v9);
  return PostThreadMessageEx(a1, a2, a3, a4, (struct tagINPUT_MESSAGE_SOURCE *)v9);
}
