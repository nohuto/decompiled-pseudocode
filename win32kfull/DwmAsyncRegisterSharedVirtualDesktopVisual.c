__int64 __fastcall DwmAsyncRegisterSharedVirtualDesktopVisual(PVOID Object, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // edi
  int v10; // [rsp+20h] [rbp-58h] BYREF
  __int16 v11; // [rsp+24h] [rbp-54h]
  int v12; // [rsp+48h] [rbp-30h]
  __int64 v13; // [rsp+4Ch] [rbp-2Ch]
  __int64 v14; // [rsp+54h] [rbp-24h]
  __int64 v15; // [rsp+5Ch] [rbp-1Ch]

  v8 = -1073741823;
  if ( Object )
  {
    memset_0(&v10, 0, 0x44uLL);
    v10 = 4456476;
    v11 = 0x8000;
    v12 = 1073741906;
    v13 = a2;
    v14 = a3;
    v15 = a4;
    v8 = LpcRequestPort(Object, &v10);
    ObfDereferenceObject(Object);
  }
  return v8;
}
