__int64 __fastcall DwmAsyncCreateSprite(
        PVOID Object,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        int a5,
        __int128 *a6,
        int a7)
{
  unsigned int v11; // edi
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rax
  int v20; // [rsp+20h] [rbp-E0h] BYREF
  __int16 v21; // [rsp+24h] [rbp-DCh]
  int v22; // [rsp+48h] [rbp-B8h]
  __int64 v23; // [rsp+4Ch] [rbp-B4h]
  __int64 v24; // [rsp+54h] [rbp-ACh]
  __int128 v25; // [rsp+5Ch] [rbp-A4h]
  int v26; // [rsp+6Ch] [rbp-94h]
  __int128 v27; // [rsp+70h] [rbp-90h]
  __int128 v28; // [rsp+80h] [rbp-80h]
  __int128 v29; // [rsp+90h] [rbp-70h]
  __int128 v30; // [rsp+A0h] [rbp-60h]
  __int128 v31; // [rsp+B0h] [rbp-50h]
  __int128 v32; // [rsp+C0h] [rbp-40h]
  __int128 v33; // [rsp+D0h] [rbp-30h]
  __int128 v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+F0h] [rbp-10h]
  int v36; // [rsp+F8h] [rbp-8h]

  v11 = -1073741823;
  IncrementDWMWindowUniqueness();
  if ( Object )
  {
    memset_0(&v20, 0, 0xDCuLL);
    v20 = 14418100;
    v21 = 0x8000;
    v26 = a5;
    v36 = a7;
    v22 = 1073741826;
    v23 = a2;
    v24 = a3;
    if ( a4 )
      v25 = *a4;
    if ( a6 )
    {
      v12 = a6[1];
      v27 = *a6;
      v13 = a6[2];
      v28 = v12;
      v14 = a6[3];
      v29 = v13;
      v15 = a6[4];
      v30 = v14;
      v16 = a6[5];
      v31 = v15;
      v17 = a6[6];
      v32 = v16;
      v33 = v17;
      v18 = *((_QWORD *)a6 + 16);
      v34 = a6[7];
      v35 = v18;
    }
    EtwUpdateEvent(a3, 1073741826LL);
    v11 = LpcRequestPort(Object, &v20);
    ObfDereferenceObject(Object);
  }
  return v11;
}
