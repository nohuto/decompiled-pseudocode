__int64 __fastcall DwmAsyncMagnSetDesktopColorTransform(PVOID Object, __int64 a2, __int128 *a3)
{
  unsigned int v6; // ebx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  int v9; // eax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  int v15; // [rsp+20h] [rbp-79h] BYREF
  __int16 v16; // [rsp+24h] [rbp-75h]
  int v17; // [rsp+48h] [rbp-51h]
  __int64 v18; // [rsp+4Ch] [rbp-4Dh]
  __int128 v19; // [rsp+54h] [rbp-45h]
  __int128 v20; // [rsp+64h] [rbp-35h]
  __int128 v21; // [rsp+74h] [rbp-25h]
  __int128 v22; // [rsp+84h] [rbp-15h]
  __int128 v23; // [rsp+94h] [rbp-5h]
  __int128 v24; // [rsp+A4h] [rbp+Bh]
  int v25; // [rsp+B4h] [rbp+1Bh]

  v6 = -1073741823;
  if ( Object )
  {
    memset_0(&v15, 0, 0x98uLL);
    v7 = *a3;
    v8 = a3[1];
    v16 = 0x8000;
    v9 = *((_DWORD *)a3 + 24);
    v19 = v7;
    v15 = 9961584;
    v10 = a3[2];
    v17 = 1073741930;
    v20 = v8;
    v18 = a2;
    v11 = a3[3];
    v25 = v9;
    v21 = v10;
    v12 = a3[4];
    v22 = v11;
    v13 = a3[5];
    v23 = v12;
    v24 = v13;
    EtwUpdateEvent(0LL, 1073741930LL);
    v6 = LpcRequestPort(Object, &v15);
    ObfDereferenceObject(Object);
  }
  return v6;
}
