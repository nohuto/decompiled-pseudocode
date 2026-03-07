__int64 __fastcall DwmAsyncNotifyWindowFrameMarginsChange(PVOID Object, __int64 a2, __int16 *a3)
{
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-78h] BYREF
  __int16 v9; // [rsp+24h] [rbp-74h]
  int v10; // [rsp+48h] [rbp-50h]
  __int64 v11; // [rsp+4Ch] [rbp-4Ch]
  int v12; // [rsp+54h] [rbp-44h]
  int v13; // [rsp+58h] [rbp-40h]
  int v14; // [rsp+5Ch] [rbp-3Ch]
  int v15; // [rsp+60h] [rbp-38h]

  v6 = -1073741823;
  if ( Object )
  {
    memset_0(&v8, 0, 0x44uLL);
    v8 = 4456476;
    v9 = 0x8000;
    v12 = *a3;
    v13 = a3[1];
    v15 = a3[3];
    v14 = a3[2];
    v10 = 1073741909;
    v11 = a2;
    v6 = LpcRequestPort(Object, &v8);
    ObfDereferenceObject(Object);
  }
  return v6;
}
