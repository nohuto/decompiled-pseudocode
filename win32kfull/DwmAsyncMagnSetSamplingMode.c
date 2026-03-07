__int64 __fastcall DwmAsyncMagnSetSamplingMode(PVOID Object, __int64 a2, __int64 a3, int *a4)
{
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-78h] BYREF
  __int16 v11; // [rsp+24h] [rbp-74h]
  int v12; // [rsp+48h] [rbp-50h]
  __int64 v13; // [rsp+4Ch] [rbp-4Ch]
  __int64 v14; // [rsp+54h] [rbp-44h]
  int v15; // [rsp+5Ch] [rbp-3Ch]

  v8 = -1073741823;
  if ( Object )
  {
    memset_0(&v10, 0, 0x40uLL);
    v10 = 4194328;
    v11 = 0x8000;
    v15 = *a4;
    v12 = 1073741937;
    v13 = a2;
    v14 = a3;
    EtwUpdateEvent(a2, 1073741937LL);
    v8 = LpcRequestPort(Object, &v10);
    ObfDereferenceObject(Object);
  }
  return v8;
}
