__int64 __fastcall CCD_TOPOLOGY::RemoveAllNonDesktopPaths(CCD_TOPOLOGY *this, unsigned __int8 *a2)
{
  unsigned __int16 v2; // r8
  unsigned int v4; // r11d
  unsigned int v5; // ebx
  __int64 v7; // r9
  unsigned __int16 v8; // ax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r10
  __int128 v12; // xmm0

  v2 = 0;
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    v7 = *((_QWORD *)this + 8);
    v8 = v7 ? *(_WORD *)(v7 + 20) : 0;
    if ( v4 >= v8 )
      break;
    v9 = 296LL * v4 + v7 + 56;
    if ( _bittest64((const signed __int64 *)v9, 0x24u) )
    {
      *a2 = 1;
    }
    else
    {
      if ( v4 != v5 )
      {
        v10 = 2LL;
        v11 = 296LL * v5 + v7 + 56;
        do
        {
          v12 = *(_OWORD *)v9;
          v9 += 128LL;
          *(_OWORD *)v11 = v12;
          v11 += 128LL;
          *(_OWORD *)(v11 - 112) = *(_OWORD *)(v9 - 112);
          *(_OWORD *)(v11 - 96) = *(_OWORD *)(v9 - 96);
          *(_OWORD *)(v11 - 80) = *(_OWORD *)(v9 - 80);
          *(_OWORD *)(v11 - 64) = *(_OWORD *)(v9 - 64);
          *(_OWORD *)(v11 - 48) = *(_OWORD *)(v9 - 48);
          *(_OWORD *)(v11 - 32) = *(_OWORD *)(v9 - 32);
          *(_OWORD *)(v11 - 16) = *(_OWORD *)(v9 - 16);
          --v10;
        }
        while ( v10 );
        *(_OWORD *)v11 = *(_OWORD *)v9;
        *(_OWORD *)(v11 + 16) = *(_OWORD *)(v9 + 16);
        *(_QWORD *)(v11 + 32) = *(_QWORD *)(v9 + 32);
      }
      ++v5;
    }
    ++v4;
  }
  if ( *a2 )
  {
    if ( v7 )
      v2 = *(_WORD *)(v7 + 22);
    if ( v5 > v2 )
      WdLogSingleEntry0(1LL);
    *(_WORD *)(*((_QWORD *)this + 8) + 20LL) = v5;
    CCD_TOPOLOGY::ClearModalitySetId((void **)this);
  }
  return 0LL;
}
