__int64 __fastcall GreRectBlt(struct DCOBJ *a1, struct ERECTL *a2)
{
  __int64 v2; // r8
  __int64 v5; // rsi
  char v6; // r15
  unsigned int v7; // ebx
  __int64 v8; // rdx
  struct DC *v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // r8d
  int v15; // r8d
  __int128 v16; // xmm0
  _BYTE v18[40]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-98h]
  char v20; // [rsp+70h] [rbp-90h]
  int v21; // [rsp+74h] [rbp-8Ch]
  int v22; // [rsp+98h] [rbp-68h]
  char v23; // [rsp+B0h] [rbp-50h]
  __int64 v24; // [rsp+B8h] [rbp-48h]
  __int64 v25; // [rsp+C0h] [rbp-40h]
  __int16 v26; // [rsp+C8h] [rbp-38h]
  __int64 v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+D8h] [rbp-28h]
  __int16 v29; // [rsp+E0h] [rbp-20h]
  _BYTE v30[32]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v31; // [rsp+140h] [rbp+40h]
  __int64 v32; // [rsp+148h] [rbp+48h]
  __int64 v33; // [rsp+160h] [rbp+60h]
  __int64 v34; // [rsp+170h] [rbp+70h]
  __int64 v35; // [rsp+180h] [rbp+80h]
  __int128 v36; // [rsp+1B0h] [rbp+B0h]
  __int64 v37; // [rsp+1E8h] [rbp+E8h]
  int v38; // [rsp+1F0h] [rbp+F0h]
  int v39; // [rsp+1F4h] [rbp+F4h]

  v2 = *(_QWORD *)a1;
  v34 = 0LL;
  v39 = 0;
  v5 = gaMix[*(_BYTE *)(*(_QWORD *)(v2 + 976) + 212LL) & 0xF];
  v6 = gajRop3[v5];
  if ( (*(_DWORD *)(v2 + 36) & 0xE0) != 0 )
    XDCOBJ::vAccumulate(a1, a2);
  v19 = 0LL;
  v20 = 0;
  v21 = 0;
  v7 = 1;
  v22 = 0;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 256;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 256;
  DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v18, a1);
  if ( !(unsigned int)XDCOBJ::bFullScreen(a1) )
  {
    if ( (v23 & 1) != 0 )
    {
      v10 = *(_QWORD *)a1;
      v33 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
      v31 = *(_QWORD *)(v33 + 128);
      v32 = *(_QWORD *)(v10 + 88);
      if ( (v6 & 0xE8) == 0 )
      {
        v35 = 0LL;
        goto LABEL_16;
      }
      v35 = v10 + 1200;
      v11 = *(_QWORD *)(v10 + 976);
      if ( (*(_DWORD *)(v11 + 152) & 0x1000) != 0 )
        GreDCSelectBrush(v10, *(_QWORD *)(v11 + 160));
      v12 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
      v13 = *(_DWORD *)(v12 + 152);
      if ( (v13 & 1) != 0 || (*(_DWORD *)(*(_QWORD *)a1 + 316LL) & 1) != 0 )
      {
        *(_DWORD *)(v12 + 152) = v13 & 0xFFFFFFFE;
        *(_DWORD *)(*(_QWORD *)a1 + 316LL) &= ~1u;
        EBRUSHOBJ::vInitBrush(v35, *(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)a1 + 136LL), v32, v31, v33, 1);
      }
      v8 = v35;
      if ( (*(_DWORD *)(v35 + 120) & 0x100) == 0 )
      {
        v10 = *(_QWORD *)a1;
        v37 = *(_QWORD *)(*(_QWORD *)a1 + 1192LL);
        if ( (*(_DWORD *)(v35 + 120) & 0x8000) != 0 && *(_BYTE *)(*(_QWORD *)(v10 + 976) + 213LL) == 1 )
        {
          v14 = 43520;
LABEL_17:
          v15 = v5 | v14;
          if ( (*(_DWORD *)(v10 + 36) & 0xE0) != 0 )
            XDCOBJ::vAccumulateTight(a1, a2);
          v16 = *(_OWORD *)a2;
          v38 = v15;
          v36 = v16;
          v7 = BLTRECORD::bBitBlt((BLTRECORD *)v30, (DC **)a1, a1, v6);
          goto LABEL_21;
        }
LABEL_16:
        v14 = (_DWORD)v5 << 8;
        goto LABEL_17;
      }
    }
    v7 = 0;
  }
LABEL_21:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v18, v8, v9);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v30);
  return v7;
}
