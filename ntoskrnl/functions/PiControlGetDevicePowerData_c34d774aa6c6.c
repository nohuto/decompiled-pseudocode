__int64 __fastcall PiControlGetDevicePowerData(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4, _DWORD *a5)
{
  size_t v5; // r12
  unsigned int v8; // ebx
  __int64 result; // rax
  int DoDevicePowerState; // eax
  int v11; // ecx
  __int64 v12; // r9
  __int64 v13; // r10
  int v14; // edx
  int i; // r8d
  int v16; // edx
  int v17; // edx
  int v18; // edx
  __int64 v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 Src; // [rsp+20h] [rbp-71h] BYREF
  __m256i v23; // [rsp+30h] [rbp-61h]
  __int64 v24; // [rsp+50h] [rbp-41h]
  _OWORD v25[4]; // [rsp+60h] [rbp-31h] BYREF

  v5 = a3;
  memset(v25, 0, sizeof(v25));
  v8 = 0;
  DWORD2(Src) = 0;
  *a5 = 0;
  LODWORD(Src) = 56;
  if ( (unsigned int)v5 < 4 )
  {
    result = 2147483653LL;
    goto LABEL_61;
  }
  if ( (int)PpIrpQueryCapabilities(*(_QWORD *)(a1 + 32), v25) < 0 )
    return 3221225486LL;
  if ( (unsigned int)PipIsDevNodeDNStarted(a1) )
  {
    DoDevicePowerState = PopLockGetDoDevicePowerState(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 312LL));
    if ( !DoDevicePowerState )
      DoDevicePowerState = 1;
    DWORD1(Src) = DoDevicePowerState;
  }
  else
  {
    DWORD1(Src) = 4;
  }
  v11 = 9;
  if ( (BYTE4(v25[0]) & 1) != 0 )
    v11 = 11;
  v12 = 2LL;
  DWORD2(Src) = v11;
  if ( (BYTE4(v25[0]) & 2) != 0 )
  {
    v11 |= 4u;
    DWORD2(Src) = v11;
  }
  if ( (WORD2(v25[0]) & 0x400) != 0 )
  {
    v11 |= 0x10u;
    DWORD2(Src) = v11;
  }
  if ( (WORD2(v25[0]) & 0x800) != 0 )
  {
    v11 |= 0x20u;
    DWORD2(Src) = v11;
  }
  if ( (WORD2(v25[0]) & 0x1000) != 0 )
  {
    v11 |= 0x40u;
    DWORD2(Src) = v11;
  }
  if ( (WORD2(v25[0]) & 0x2000) != 0 )
  {
    v11 |= 0x80u;
    DWORD2(Src) = v11;
  }
  if ( (DWORD1(v25[0]) & 0x10000) != 0 )
  {
    v11 |= 0x100u;
    DWORD2(Src) = v11;
  }
  v13 = 2LL;
  v14 = v25[3];
  i = HIDWORD(v25[2]);
  LODWORD(v24) = DWORD2(v25[2]);
  HIDWORD(Src) = DWORD1(v25[3]);
  v23.m256i_i64[0] = *((_QWORD *)&v25[3] + 1);
  *(_OWORD *)&v23.m256i_u64[1] = v25[1];
  v23.m256i_i64[3] = *(_QWORD *)&v25[2];
  do
  {
    v16 = v14 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( v18 != 1 )
            goto LABEL_34;
          v11 |= 0x80u;
        }
        else
        {
          v11 |= 0x44u;
        }
      }
      else
      {
        v11 |= 0x22u;
      }
    }
    else
    {
      v11 |= 0x10u;
    }
    DWORD2(Src) = v11;
LABEL_34:
    if ( HIDWORD(v25[2]) )
      v14 = *((_DWORD *)&v25[1] + SHIDWORD(v25[2]));
    else
      v14 = 0;
    --v13;
  }
  while ( v13 );
  if ( (v11 & 0x80) != 0 )
  {
    v19 = 4LL;
    goto LABEL_42;
  }
  if ( (v11 & 0x40) != 0 )
  {
    v19 = 3LL;
LABEL_42:
    v12 = v19;
  }
  else if ( (v11 & 0x20) != 0 )
  {
    LODWORD(v19) = 2;
  }
  else if ( (v11 & 0x10) != 0 )
  {
    LODWORD(v19) = 1;
    v12 = 1LL;
  }
  else
  {
    LODWORD(v19) = 0;
    v12 = 0LL;
  }
  if ( !HIDWORD(v25[2]) && (_DWORD)v19 )
  {
    for ( i = 4; i >= 1; --i )
    {
      if ( DWORD2(v25[1]) && SDWORD2(v25[1]) <= v12 )
        break;
    }
  }
  HIDWORD(v24) = i;
  if ( (unsigned int)v5 >= 0x38 )
  {
    if ( a4 )
    {
      v20 = *(_OWORD *)v23.m256i_i8;
      *a4 = Src;
      v21 = *(_OWORD *)&v23.m256i_u64[2];
      a4[1] = v20;
      *(_QWORD *)&v20 = v24;
      a4[2] = v21;
      *((_QWORD *)a4 + 6) = v20;
    }
  }
  else
  {
    if ( a4 )
      memmove(a4, &Src, v5);
    v8 = -2147483643;
  }
  result = v8;
LABEL_61:
  *a5 = 56;
  return result;
}
