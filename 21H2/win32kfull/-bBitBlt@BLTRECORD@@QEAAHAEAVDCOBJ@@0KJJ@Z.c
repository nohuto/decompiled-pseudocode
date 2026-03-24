/*
 * XREFs of ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z @ 0x1C012262C
 * Callers:
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00B889C (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C00B6E98 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 */

__int64 __fastcall BLTRECORD::bBitBlt(BLTRECORD *this, DC **a2, struct DCOBJ *a3, char a4, int a5, int a6)
{
  __int64 result; // rax
  __int128 v11; // xmm7
  __int128 v12; // xmm6
  int v13; // ebx
  int v14; // eax
  __int128 v15; // xmm7
  __int128 v16; // xmm6
  int v17; // eax
  __int128 v18; // xmm7
  __int128 v19; // xmm6
  int v20; // ebx
  int v21; // eax
  int v22; // ebx
  int v23; // eax
  int v24; // eax

  if ( a5 == -1 )
  {
    --*((_DWORD *)this + 46);
    goto LABEL_3;
  }
  result = 0LL;
  if ( !a5 )
  {
LABEL_3:
    if ( a6 != 1 )
    {
      *((_DWORD *)this + 47) += a6;
      return BLTRECORD::bBitBlt(this, a2, a3, a4);
    }
    --*((_DWORD *)this + 41);
    v11 = *(_OWORD *)((char *)this + 152);
    v12 = *((_OWORD *)this + 11);
    v13 = BLTRECORD::bBitBlt(this, a2, a3, a4);
    *(_OWORD *)((char *)this + 152) = v11;
    v14 = *((_DWORD *)this + 41);
    *((_DWORD *)this + 39) = v14;
    *((_DWORD *)this + 41) = v14 + 1;
    *((_OWORD *)this + 11) = v12;
    *((_DWORD *)this + 45) = *((_DWORD *)this + 47) - 1;
    return v13 & (unsigned int)BLTRECORD::bBitBlt(this, a2, a3, a4);
  }
  if ( a5 == 1 )
  {
    --*((_DWORD *)this + 40);
    if ( a6 == 1 )
    {
      --*((_DWORD *)this + 41);
      v18 = *(_OWORD *)((char *)this + 152);
      v19 = *((_OWORD *)this + 11);
      v20 = BLTRECORD::bBitBlt(this, a2, a3, a4);
      *(_OWORD *)((char *)this + 152) = v18;
      v21 = *((_DWORD *)this + 40);
      *((_DWORD *)this + 38) = v21;
      *((_DWORD *)this + 40) = v21 + 1;
      *((_OWORD *)this + 11) = v19;
      *((_DWORD *)this + 44) = *((_DWORD *)this + 46) - 1;
      v22 = BLTRECORD::bBitBlt(this, a2, a3, a4) & v20;
      *(_OWORD *)((char *)this + 152) = v18;
      v23 = *((_DWORD *)this + 41);
      *((_DWORD *)this + 39) = v23;
      *((_DWORD *)this + 41) = v23 + 1;
      *((_OWORD *)this + 11) = v19;
      *((_DWORD *)this + 45) = *((_DWORD *)this + 47) - 1;
      v13 = BLTRECORD::bBitBlt(this, a2, a3, a4) & v22;
      *(_OWORD *)((char *)this + 152) = v18;
      v24 = *((_DWORD *)this + 41);
      *((_DWORD *)this + 39) = v24;
      *((_DWORD *)this + 41) = v24 + 1;
      *((_OWORD *)this + 11) = v19;
      *((_DWORD *)this + 45) = *((_DWORD *)this + 47) - 1;
    }
    else
    {
      *((_DWORD *)this + 47) += a6;
      v15 = *(_OWORD *)((char *)this + 152);
      v16 = *((_OWORD *)this + 11);
      v13 = BLTRECORD::bBitBlt(this, a2, a3, a4);
      *((_OWORD *)this + 11) = v16;
      *(_OWORD *)((char *)this + 152) = v15;
    }
    v17 = *((_DWORD *)this + 40);
    *((_DWORD *)this + 38) = v17;
    *((_DWORD *)this + 40) = v17 + 1;
    *((_DWORD *)this + 44) = *((_DWORD *)this + 46) - 1;
    return v13 & (unsigned int)BLTRECORD::bBitBlt(this, a2, a3, a4);
  }
  return result;
}
