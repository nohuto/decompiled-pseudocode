__int64 __fastcall RtlDecompressBuffer2Xp10(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _QWORD *a6,
        _QWORD *a7)
{
  __int64 result; // rax
  _QWORD *v8; // r14
  _OWORD *v9; // rsi
  int v10; // edx
  unsigned int v11; // eax
  int v12; // eax
  unsigned __int64 v13; // r8
  int v14; // ebx
  int v15; // eax
  unsigned int v16; // edi
  int v17; // [rsp+28h] [rbp-69h] BYREF
  __int16 v18; // [rsp+2Ch] [rbp-65h]
  int v19; // [rsp+30h] [rbp-61h] BYREF
  __int16 v20; // [rsp+34h] [rbp-5Dh]
  __int64 v21; // [rsp+38h] [rbp-59h] BYREF
  unsigned __int64 v22; // [rsp+40h] [rbp-51h]
  unsigned int v23; // [rsp+48h] [rbp-49h]
  int v24; // [rsp+4Ch] [rbp-45h]
  _QWORD v25[7]; // [rsp+50h] [rbp-41h] BYREF
  _QWORD v26[2]; // [rsp+88h] [rbp-9h] BYREF
  __int64 v27; // [rsp+98h] [rbp+7h]
  __int64 v28; // [rsp+A0h] [rbp+Fh]
  _QWORD *v29; // [rsp+A8h] [rbp+17h]
  __int64 v30; // [rsp+B0h] [rbp+1Fh]
  unsigned int v31; // [rsp+F0h] [rbp+5Fh] BYREF

  v31 = a4;
  v25[4] = a3;
  v24 = 0;
  v25[3] = 0LL;
  v25[2] = 0LL;
  v22 = 0LL;
  v23 = 0;
  v28 = 0LL;
  v27 = 0LL;
  v17 = 0;
  v18 = 0;
  v25[0] = *a3;
  v25[1] = a3[1] + v25[0];
  v26[0] = *a1;
  v26[1] = a1[1] + v26[0];
  v29 = a1;
  v19 = 0;
  v20 = 0;
  v25[5] = 1LL;
  v21 = -1LL;
  v30 = 1LL;
  if ( (unsigned int)Xp10ScatteredReadBytes(v25, &v19, 6LL) == 6 )
  {
    result = Xp10ValidateFrameHeaderAndFillParameters(&v19, &v17);
    if ( (int)result < 0 )
      return result;
    v8 = a7;
    v9 = a7 + 1;
    *a7 = &v17;
    *v9 = 0LL;
    while ( 1 )
    {
      v31 = 0;
      v10 = 32;
      v11 = v23;
      v21 = -1LL;
      if ( v23 >= 0x20 )
      {
        v13 = v22;
      }
      else
      {
        v12 = Xp10ScatteredReadBytes(v25, &v31, 4LL);
        v13 = ((unsigned __int64)v31 << v23) | v22;
        v11 = v23 + 8 * v12;
        v10 = 32;
        v22 = v13;
        if ( v11 < 0x20 )
          v10 = v11;
      }
      v23 = v11 - v10;
      v14 = v22 & ((1LL << v10) - 1);
      v22 = v13 >> v10;
      if ( v10 != 32 )
        break;
      v15 = v14 & 0xFFFFFFF;
      if ( (v14 & 0xFFFFFFFu) < 0x20 || (v14 & 0x10000000) != 0 )
        break;
      v16 = v15 - 32;
      v21 = (unsigned int)(v15 - 32);
      if ( (v14 & 0x20000000) != 0 )
      {
        if ( (v14 & 0x40000000) != 0 )
        {
          result = Xp10ReadMtfHeader(&v17, v9, &v21);
          if ( (int)result < 0 )
            return result;
        }
        result = Xp10ExecuteHuffmanDecode(v8, &v21, v26);
        if ( (int)result < 0 )
          return result;
      }
      else
      {
        if ( (v16 & 7) != 0 || (unsigned int)Xp10ScatteredCopyBits(v26, &v21, v16) != v16 )
          return 3221226050LL;
        *v9 = 0LL;
      }
      if ( v14 < 0 )
      {
        v21 = -1LL;
        result = Xp10ReadAndValidateCrc(&v17, v26, &v21);
        *a6 = v26[0] + v27 - v29[2 * v28];
        return result;
      }
    }
  }
  return 3221226050LL;
}
