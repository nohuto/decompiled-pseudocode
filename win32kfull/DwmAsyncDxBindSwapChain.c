__int64 __fastcall DwmAsyncDxBindSwapChain(PVOID Object, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  _OWORD v6[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v7; // [rsp+40h] [rbp-20h]
  int v8; // [rsp+48h] [rbp-18h]
  _QWORD v9[2]; // [rsp+4Ch] [rbp-14h]

  v4 = -1073741823;
  if ( Object )
  {
    memset(v6, 0, sizeof(v6));
    WORD2(v6[0]) = 0x8000;
    v7 = 0LL;
    v9[0] = a2;
    LODWORD(v6[0]) = 3932180;
    v8 = 1073741883;
    v9[1] = a3;
    EtwBindSwapChain(a2, a3);
    v4 = LpcRequestPort(Object, v6);
    ObfDereferenceObject(Object);
  }
  return v4;
}
