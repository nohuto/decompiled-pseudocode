__int64 __fastcall PDEVOBJ::bCreateHalftoneBrushes(PDEVOBJ *this)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rsi
  int v5; // eax
  int StandardMonoPattern; // r15d
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rsi
  __int64 v11; // [rsp+68h] [rbp-19h] BYREF
  char v12; // [rsp+70h] [rbp-11h]
  int v13; // [rsp+74h] [rbp-Dh]
  __int16 v14; // [rsp+78h] [rbp-9h] BYREF
  char v15; // [rsp+7Ah] [rbp-7h]
  char v16; // [rsp+7Bh] [rbp-6h]
  __int16 v17; // [rsp+7Ch] [rbp-5h]
  __int64 v18; // [rsp+7Eh] [rbp-3h]
  __int16 v19; // [rsp+86h] [rbp+5h]
  __int64 v20; // [rsp+88h] [rbp+7h]
  _DWORD v21[4]; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v22; // [rsp+A0h] [rbp+1Fh]
  __int64 v23; // [rsp+A8h] [rbp+27h]

  v18 = 0LL;
  v19 = 0;
  if ( !PDEVOBJ::pDevHTInfo(this) && !(unsigned int)PDEVOBJ::bEnableHalftone(this, 0LL) )
    return 0LL;
  LODWORD(v2) = 0;
  v3 = 0LL;
  v4 = 1448LL;
  do
  {
    v14 = 1;
    v16 = HTStdPatIndex[v3];
    v15 = 4;
    v17 = 3848;
    v20 = 0LL;
    v5 = (unsigned int)PDEVOBJ::pDevHTInfo(this);
    StandardMonoPattern = HT_CreateStandardMonoPattern(v5, (__int64)&v14);
    if ( StandardMonoPattern <= 0 )
      break;
    v21[1] = WORD1(v18);
    v21[2] = WORD2(v18);
    v21[3] = 0;
    v23 = 1LL;
    v21[0] = 1;
    v22 = 0LL;
    v11 = 0LL;
    v12 = 0;
    v13 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v11, (struct _DEVBITMAPINFO *)v21, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v11 )
      goto LABEL_9;
    v12 |= 1u;
    LOBYTE(v7) = 5;
    HmgSetOwner(*(_QWORD *)(v11 + 32), 0LL, v7);
    LODWORD(v2) = v2 + 1;
    ++v3;
    *(_QWORD *)(v4 + *(_QWORD *)this) = *(_QWORD *)(v11 + 32);
    v4 += 8LL;
    v20 = *(_QWORD *)(v11 + 72);
    v8 = (unsigned int)PDEVOBJ::pDevHTInfo(this);
    if ( (unsigned int)HT_CreateStandardMonoPattern(v8, (__int64)&v14) != StandardMonoPattern )
    {
LABEL_9:
      SURFMEM::~SURFMEM((SURFMEM *)&v11);
      break;
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v11);
  }
  while ( v4 < 1496 );
  if ( (int)v2 < 6 )
  {
    v2 = (int)v2;
    if ( (int)v2 > 0 )
    {
      v9 = 8LL * (int)v2 + 1448;
      do
      {
        v9 -= 8LL;
        --v2;
        bDeleteSurface(*(_QWORD *)(v9 + *(_QWORD *)this));
      }
      while ( v2 > 0 );
    }
    return 0LL;
  }
  SETFLAG(1, (volatile unsigned int *)(*(_QWORD *)this + 40LL), 256);
  return 1LL;
}
