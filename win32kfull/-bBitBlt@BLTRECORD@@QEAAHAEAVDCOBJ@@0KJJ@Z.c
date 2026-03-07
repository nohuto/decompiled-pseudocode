__int64 __fastcall BLTRECORD::bBitBlt(BLTRECORD *this, DC **a2, struct DCOBJ *a3, char a4, int a5, int a6)
{
  __int128 v11; // xmm7
  __int128 v12; // xmm6
  int v13; // eax
  int v14; // ecx
  int v15; // ebx
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  int v19; // eax
  __int128 v20; // xmm7
  __int128 v21; // xmm6
  int v22; // eax
  int v23; // ecx
  __int128 v24; // xmm7
  __int128 v25; // xmm6
  int v26; // ecx

  if ( a5 == -1 )
  {
    --*((_DWORD *)this + 44);
  }
  else if ( a5 )
  {
    if ( a5 != 1 )
      return 0LL;
    --*((_DWORD *)this + 38);
    if ( a6 == 1 )
    {
      --*((_DWORD *)this + 39);
      v11 = *((_OWORD *)this + 9);
      v12 = *(_OWORD *)((char *)this + 168);
      v13 = BLTRECORD::bBitBlt(this, a2, a3, a4);
      *((_OWORD *)this + 9) = v11;
      v14 = *((_DWORD *)this + 38);
      *((_DWORD *)this + 36) = v14;
      *(_OWORD *)((char *)this + 168) = v12;
      *((_DWORD *)this + 38) = v14 + 1;
      *((_DWORD *)this + 42) = *((_DWORD *)this + 44) - 1;
      v15 = BLTRECORD::bBitBlt(this, a2, a3, a4) & v13;
      *((_OWORD *)this + 9) = v11;
      v16 = *((_DWORD *)this + 39);
      *((_DWORD *)this + 37) = v16;
      *((_DWORD *)this + 39) = v16 + 1;
      *(_OWORD *)((char *)this + 168) = v12;
      *((_DWORD *)this + 43) = *((_DWORD *)this + 45) - 1;
      v17 = BLTRECORD::bBitBlt(this, a2, a3, a4) & v15;
      *((_OWORD *)this + 9) = v11;
      v18 = *((_DWORD *)this + 39);
      *((_DWORD *)this + 37) = v18;
      *((_DWORD *)this + 39) = v18 + 1;
      *(_OWORD *)((char *)this + 168) = v12;
      *((_DWORD *)this + 43) = *((_DWORD *)this + 45) - 1;
      v19 = *((_DWORD *)this + 38);
      *((_DWORD *)this + 36) = v19;
      *((_DWORD *)this + 38) = v19 + 1;
      *((_DWORD *)this + 42) = *((_DWORD *)this + 44) - 1;
      return v17 & (unsigned int)BLTRECORD::bBitBlt(this, a2, a3, a4);
    }
    *((_DWORD *)this + 45) += a6;
    v20 = *((_OWORD *)this + 9);
    v21 = *(_OWORD *)((char *)this + 168);
    v22 = BLTRECORD::bBitBlt(this, a2, a3, a4);
    *((_OWORD *)this + 9) = v20;
    v23 = *((_DWORD *)this + 38);
    *((_DWORD *)this + 36) = v23;
    *(_OWORD *)((char *)this + 168) = v21;
    *((_DWORD *)this + 38) = v23 + 1;
    *((_DWORD *)this + 42) = *((_DWORD *)this + 44) - 1;
LABEL_11:
    v17 = v22;
    return v17 & (unsigned int)BLTRECORD::bBitBlt(this, a2, a3, a4);
  }
  if ( a6 == 1 )
  {
    --*((_DWORD *)this + 39);
    v24 = *((_OWORD *)this + 9);
    v25 = *(_OWORD *)((char *)this + 168);
    v22 = BLTRECORD::bBitBlt(this, a2, a3, a4);
    *((_OWORD *)this + 9) = v24;
    v26 = *((_DWORD *)this + 39);
    *((_DWORD *)this + 37) = v26;
    *((_DWORD *)this + 39) = v26 + 1;
    *(_OWORD *)((char *)this + 168) = v25;
    *((_DWORD *)this + 43) = *((_DWORD *)this + 45) - 1;
    goto LABEL_11;
  }
  *((_DWORD *)this + 45) += a6;
  return BLTRECORD::bBitBlt(this, a2, a3, a4);
}
