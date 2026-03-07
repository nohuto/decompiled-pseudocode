__int64 __fastcall DwmAsyncNotifyIsInMoveSizeChange(PVOID Object, __int64 a2, int a3, int a4, int a5)
{
  unsigned int v9; // ebx
  int v11; // [rsp+20h] [rbp-48h] BYREF
  __int16 v12; // [rsp+24h] [rbp-44h]
  int v13; // [rsp+48h] [rbp-20h]
  __int64 v14; // [rsp+4Ch] [rbp-1Ch]
  int v15; // [rsp+54h] [rbp-14h]
  int v16; // [rsp+58h] [rbp-10h]
  int v17; // [rsp+5Ch] [rbp-Ch]

  v9 = -1073741823;
  if ( Object )
  {
    memset_0(&v11, 0, 0x40uLL);
    v11 = 4194328;
    v12 = 0x8000;
    v17 = a5;
    v13 = 1073741852;
    v14 = a2;
    v15 = a3;
    v16 = a4;
    EtwUpdateEvent(a2, 1073741852LL);
    v9 = LpcRequestPort(Object, &v11);
    ObfDereferenceObject(Object);
  }
  return v9;
}
