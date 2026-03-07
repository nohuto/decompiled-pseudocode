__int64 __fastcall ProcessAlphaBitmap(HBRUSH a1)
{
  HDC v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rdx
  int DIBitsInternalImpl; // ebx
  unsigned int v7; // ecx
  __int64 v8; // r10
  _BYTE *v9; // rax
  __int64 v10; // rax
  __int64 v12; // r11
  __int64 v13; // rcx
  unsigned int v14; // r8d
  __int64 v15; // [rsp+60h] [rbp-A0h] BYREF
  int v16[4]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v17; // [rsp+78h] [rbp-88h]
  __int64 v18[3]; // [rsp+88h] [rbp-78h] BYREF
  __int16 v19; // [rsp+A0h] [rbp-60h]
  __int64 v20[3]; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v21; // [rsp+C0h] [rbp-40h]
  __int64 v22; // [rsp+D8h] [rbp-28h]
  __int16 v23; // [rsp+E0h] [rbp-20h]
  __int64 v24; // [rsp+F8h] [rbp-8h]
  __int16 v25; // [rsp+100h] [rbp+0h]
  unsigned int v26; // [rsp+108h] [rbp+8h] BYREF
  int v27; // [rsp+10Ch] [rbp+Ch]
  int v28; // [rsp+110h] [rbp+10h]
  __int64 v29; // [rsp+114h] [rbp+14h]
  __int128 v30; // [rsp+11Ch] [rbp+1Ch]
  __int64 v31; // [rsp+12Ch] [rbp+2Ch]

  if ( !a1 )
    return 0LL;
  *(_OWORD *)v16 = 0LL;
  v17 = 0LL;
  if ( !(unsigned int)GreExtGetObjectW(a1, 32LL, v16) || (_DWORD)v17 != 2097153 )
    return 0LL;
  v27 = v16[1];
  v28 = v16[2];
  v30 = 0LL;
  v26 = 40;
  v29 = 2097153LL;
  v31 = 0LL;
  v15 = 0LL;
  v2 = *(HDC *)(gpDispInfo + 56LL);
  v22 = 0LL;
  v23 = 0;
  memset(v18, 0, sizeof(v18));
  v19 = 0;
  v3 = GreCreateDIBitmapReal(v2, 0, v18, &v26, 0, 0x2Cu, 0LL, 0, 0LL, 0, 0LL, &v15);
  if ( v3 )
  {
    v27 = v16[1];
    v30 = 0LL;
    v31 = 0LL;
    v26 = 40;
    v28 = v16[2];
    v29 = 2097153LL;
    v20[0] = v15;
    v4 = *(_QWORD *)(gpDispInfo + 56LL);
    v25 = 0;
    v20[1] = v16[2] * (((32 * v16[1]) >> 3) & 0xFFFFFFFC);
    v21 = 0;
    v24 = 0LL;
    v20[2] = 0LL;
    DIBitsInternalImpl = GreGetDIBitsInternalImpl(
                           v4,
                           (__int64)a1,
                           0,
                           v16[2],
                           (__int64)v20,
                           &v26,
                           0,
                           v16[2] * (((32 * v16[1]) >> 3) & 0xFFFFFFFC),
                           0x28u);
    if ( DIBitsInternalImpl )
    {
      v7 = 0;
      v5 = (unsigned int)(v27 * v28);
      if ( (_DWORD)v5 )
      {
        v8 = v15;
        v9 = (_BYTE *)(v15 + 3);
        while ( !*v9 )
        {
          ++v7;
          v9 += 4;
          if ( v7 >= (unsigned int)v5 )
            goto LABEL_10;
        }
        DIBitsInternalImpl = 1;
        v12 = (unsigned int)v5;
        v13 = 0LL;
        while ( 1 )
        {
          v14 = *(_DWORD *)(v13 + v8);
          v13 += 4LL;
          *(_BYTE *)(v13 + v8 - 2) = HIBYTE(v14) * BYTE2(v14) / 0xFFu;
          *(_BYTE *)(v13 + v15 - 3) = HIBYTE(v14) * BYTE1(v14) / 0xFFu;
          v5 = HIBYTE(v14) * (unsigned __int8)v14 / 0xFFu;
          *(_BYTE *)(v13 + v15 - 4) = v5;
          if ( !--v12 )
            break;
          v8 = v15;
        }
      }
      else
      {
LABEL_10:
        DIBitsInternalImpl = 0;
      }
    }
    LOBYTE(v5) = 5;
    v10 = HmgLock(v3, v5);
    if ( v10 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 12));
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 12));
    }
    if ( !DIBitsInternalImpl )
    {
      GreDeleteObject(v3);
      return 0LL;
    }
  }
  return v3;
}
