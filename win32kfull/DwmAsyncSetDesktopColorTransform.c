__int64 __fastcall DwmAsyncSetDesktopColorTransform(PVOID Object, __int64 a2, __int128 *a3)
{
  unsigned int v6; // ebx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  int v9; // eax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v14; // [rsp+20h] [rbp-79h] BYREF
  __int16 v15; // [rsp+24h] [rbp-75h]
  int v16; // [rsp+48h] [rbp-51h]
  __int64 v17; // [rsp+4Ch] [rbp-4Dh]
  __int128 v18; // [rsp+54h] [rbp-45h]
  __int128 v19; // [rsp+64h] [rbp-35h]
  __int128 v20; // [rsp+74h] [rbp-25h]
  __int128 v21; // [rsp+84h] [rbp-15h]
  __int128 v22; // [rsp+94h] [rbp-5h]
  __int128 v23; // [rsp+A4h] [rbp+Bh]
  int v24; // [rsp+B4h] [rbp+1Bh]

  v6 = -1073741823;
  if ( Object )
  {
    memset_0(&v14, 0, 0x98uLL);
    v7 = a3[1];
    v18 = *a3;
    v15 = 0x8000;
    v8 = a3[2];
    v9 = *((_DWORD *)a3 + 24);
    v19 = v7;
    v14 = 9961584;
    v10 = a3[3];
    v20 = v8;
    v16 = 1073741939;
    v11 = a3[4];
    v21 = v10;
    v17 = a2;
    v12 = a3[5];
    v22 = v11;
    v24 = v9;
    v23 = v12;
    EtwUpdateEvent(0LL, 1073741939LL);
    v6 = LpcRequestPort(Object, &v14);
    ObfDereferenceObject(Object);
  }
  return v6;
}
