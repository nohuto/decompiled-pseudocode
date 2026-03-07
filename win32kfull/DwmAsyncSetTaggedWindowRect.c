__int64 __fastcall DwmAsyncSetTaggedWindowRect(PVOID Object, __int64 a2, __int128 *a3)
{
  unsigned int v6; // ebx
  __int128 v7; // xmm0
  int v9; // [rsp+20h] [rbp-78h] BYREF
  __int16 v10; // [rsp+24h] [rbp-74h]
  int v11; // [rsp+48h] [rbp-50h]
  __int64 v12; // [rsp+4Ch] [rbp-4Ch]
  __int128 v13; // [rsp+54h] [rbp-44h]

  v6 = -1073741823;
  if ( Object )
  {
    memset_0(&v9, 0, 0x44uLL);
    v7 = *a3;
    v9 = 4456476;
    v10 = 0x8000;
    v11 = 1073741914;
    v13 = v7;
    v12 = a2;
    v6 = LpcRequestPort(Object, &v9);
    ObfDereferenceObject(Object);
  }
  return v6;
}
