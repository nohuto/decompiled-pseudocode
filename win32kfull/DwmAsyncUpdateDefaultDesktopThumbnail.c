__int64 __fastcall DwmAsyncUpdateDefaultDesktopThumbnail(
        PVOID Object,
        __int64 a2,
        __int128 *a3,
        __int128 *a4,
        char a5,
        int a6)
{
  unsigned int v10; // ebx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v14; // [rsp+20h] [rbp-59h] BYREF
  __int16 v15; // [rsp+24h] [rbp-55h]
  int v16; // [rsp+48h] [rbp-31h]
  __int64 v17; // [rsp+4Ch] [rbp-2Dh]
  __int128 v18; // [rsp+54h] [rbp-25h]
  __int128 v19; // [rsp+64h] [rbp-15h]
  char v20; // [rsp+74h] [rbp-5h]
  int v21; // [rsp+75h] [rbp-4h]

  v10 = -1073741823;
  if ( Object )
  {
    memset_0(&v14, 0, 0x59uLL);
    v11 = *a3;
    v12 = *a4;
    v15 = 0x8000;
    v20 = a5;
    v21 = a6;
    v14 = 5832753;
    v16 = 1073741899;
    v17 = a2;
    v18 = v11;
    v19 = v12;
    v10 = LpcRequestPort(Object, &v14);
    ObfDereferenceObject(Object);
  }
  return v10;
}
