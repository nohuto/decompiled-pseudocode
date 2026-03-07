__int64 __fastcall DwmAsyncUpdateLargeVisRgn(PVOID Object, __int64 a2, int a3, __int64 a4)
{
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-48h] BYREF
  __int16 v11; // [rsp+24h] [rbp-44h]
  int v12; // [rsp+48h] [rbp-20h]
  __int64 v13; // [rsp+4Ch] [rbp-1Ch]
  __int64 v14; // [rsp+54h] [rbp-14h]
  int v15; // [rsp+5Ch] [rbp-Ch]

  v8 = -1073741823;
  if ( Object )
  {
    memset_0(&v10, 0, 0x40uLL);
    v10 = 4194328;
    v11 = 0x8000;
    v12 = 1073741960;
    v13 = a2;
    v14 = a4;
    v15 = a3;
    v8 = LpcRequestPort(Object, &v10);
    ObfDereferenceObject(Object);
  }
  return v8;
}
