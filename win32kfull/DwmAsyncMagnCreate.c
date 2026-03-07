__int64 __fastcall DwmAsyncMagnCreate(PVOID Object, __int64 a2, __int64 a3, int a4)
{
  int v4; // edi
  unsigned int v9; // ebx
  int v11; // [rsp+20h] [rbp-78h] BYREF
  __int16 v12; // [rsp+24h] [rbp-74h]
  int v13; // [rsp+48h] [rbp-50h]
  __int64 v14; // [rsp+4Ch] [rbp-4Ch]
  __int64 v15; // [rsp+54h] [rbp-44h]
  int v16; // [rsp+5Ch] [rbp-3Ch]

  v4 = 0;
  v9 = -1073741823;
  if ( Object )
  {
    memset_0(&v11, 0, 0x40uLL);
    v11 = 4194328;
    v12 = 0x8000;
    v13 = 1073741923;
    v14 = a2;
    LOBYTE(v4) = a4 == 0;
    v15 = a3;
    v16 = v4;
    EtwUpdateEvent(a2, 1073741923LL);
    v9 = LpcRequestPort(Object, &v11);
    ObfDereferenceObject(Object);
  }
  return v9;
}
