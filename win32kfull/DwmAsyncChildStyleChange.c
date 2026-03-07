__int64 __fastcall DwmAsyncChildStyleChange(PVOID Object, __int64 a2, int a3, int a4)
{
  unsigned int v8; // ebx
  _OWORD v10[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+40h] [rbp-20h]
  int v12; // [rsp+48h] [rbp-18h]
  __int64 v13; // [rsp+4Ch] [rbp-14h]
  int v14; // [rsp+54h] [rbp-Ch]
  int v15; // [rsp+58h] [rbp-8h]

  v8 = -1073741823;
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(SGDGetSessionState(Object) + 32) + 13248LL));
  if ( Object )
  {
    v15 = a4;
    memset(v10, 0, sizeof(v10));
    LODWORD(v10[0]) = 3932180;
    v11 = 0LL;
    WORD2(v10[0]) = 0x8000;
    v12 = 1073741846;
    v13 = a2;
    v14 = a3;
    v8 = LpcRequestPort(Object, v10);
    ObfDereferenceObject(Object);
  }
  return v8;
}
