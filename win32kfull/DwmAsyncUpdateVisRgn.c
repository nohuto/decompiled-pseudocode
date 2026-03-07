__int64 __fastcall DwmAsyncUpdateVisRgn(PVOID Object, __int64 a2, int a3, __int64 a4, int a5)
{
  int v8; // esi
  unsigned int v9; // ebx
  unsigned int v10; // r15d
  _WORD v13[20]; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+58h] [rbp-A8h]
  __int64 v15; // [rsp+5Ch] [rbp-A4h]
  unsigned int v16; // [rsp+64h] [rbp-9Ch]
  int v17; // [rsp+68h] [rbp-98h]
  int v18; // [rsp+6Ch] [rbp-94h]
  unsigned int v19; // [rsp+70h] [rbp-90h]
  _BYTE v20[620]; // [rsp+74h] [rbp-8Ch] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    memset_0(v13, 0, 0x2B0uLL);
    v9 = 0;
    do
    {
      v14 = 1073741959;
      v10 = 27;
      v15 = a2;
      v16 = v9;
      v17 = a5;
      if ( a5 - v9 < 0x1B )
        v10 = a5 - v9;
      v18 = a3;
      v13[0] = 16 * v10 + 28;
      v13[1] = 16 * v10 + 68;
      v13[2] = 0x8000;
      v19 = v10;
      memmove(v20, (const void *)(a4 + 16LL * v9), 16LL * v10);
      v8 = LpcRequestPort(Object, v13);
      if ( v8 < 0 )
        break;
      v9 += v10;
    }
    while ( v9 != a5 );
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v8;
}
