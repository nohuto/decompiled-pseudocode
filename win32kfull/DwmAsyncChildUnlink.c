__int64 __fastcall DwmAsyncChildUnlink(PVOID Object, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  _OWORD v8[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+40h] [rbp-20h]
  int v10; // [rsp+48h] [rbp-18h]
  _QWORD v11[2]; // [rsp+4Ch] [rbp-14h]

  v6 = -1073741823;
  IncrementDWMWindowUniqueness((__int64)Object);
  if ( Object )
  {
    memset(v8, 0, sizeof(v8));
    WORD2(v8[0]) = 0x8000;
    v9 = 0LL;
    LODWORD(v8[0]) = 3932180;
    v10 = 1073741843;
    v11[0] = a2;
    v11[1] = a3;
    v6 = LpcRequestPort(Object, v8);
    ObfDereferenceObject(Object);
  }
  return v6;
}
