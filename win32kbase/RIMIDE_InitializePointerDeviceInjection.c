__int64 __fastcall RIMIDE_InitializePointerDeviceInjection(
        int a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        _QWORD *a7)
{
  unsigned int v10; // ebx
  char *v12; // rdx
  __int16 v13; // di
  unsigned int v14; // r8d
  char *v15; // rcx
  __int64 v16; // rax
  __int128 v17; // xmm1
  struct _HIDP_DEVICE_DESC v19; // [rsp+60h] [rbp-A0h] BYREF
  struct _HIDP_DEVICE_DESC v20; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v21[160]; // [rsp+E0h] [rbp-20h] BYREF
  char v22; // [rsp+180h] [rbp+80h] BYREF

  v10 = 0;
  memset(&v20, 0, sizeof(v20));
  if ( a7 )
    *a7 = 0LL;
  memmove(v21, &unk_1C02A3AC0, 0xA0uLL);
  if ( a1 == 2 )
  {
    v12 = (char *)&unk_1C02A39E0;
    v13 = 4;
    v14 = 10;
  }
  else
  {
    if ( a1 != 3 )
      return 3221225485LL;
    v12 = (char *)&unk_1C02A3900;
    v13 = 2;
    v14 = 1;
  }
  v15 = &v22;
  do
  {
    if ( v10 >= 7 )
      break;
    v16 = v10++;
    v16 *= 32LL;
    v17 = *(_OWORD *)&v12[v16 + 16];
    *(_OWORD *)v15 = *(_OWORD *)&v12[v16];
    *((_OWORD *)v15 + 1) = v17;
    v15 += 32;
  }
  while ( v10 + 5 < 0xC );
  if ( (unsigned int)BuildReportDescriptor(0xDu, v13, (struct tagUSAGE_PROPERTIES *)v21, 0xCu, v14, &v20) )
  {
    v19 = v20;
    return RIMIDECreatePseudoHIDDevice(13, v13, a2, a4, a3, &v19, 0, a5, a6, 0LL, a7);
  }
  return 3221225485LL;
}
