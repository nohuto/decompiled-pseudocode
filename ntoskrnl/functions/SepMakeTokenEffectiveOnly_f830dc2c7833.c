__int64 __fastcall SepMakeTokenEffectiveOnly(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // edx
  __int64 v3; // r8
  __int64 v4; // rbx
  int v5; // r10d
  int v6; // r11d
  unsigned int v7; // eax

  result = *(_QWORD *)(a1 + 72);
  v2 = 1;
  *(_QWORD *)(a1 + 64) &= result;
  *(_QWORD *)(a1 + 80) &= result;
  LODWORD(v3) = *(_DWORD *)(a1 + 124);
  if ( (unsigned int)v3 > 1 )
  {
    do
    {
      v4 = *(_QWORD *)(a1 + 152);
      result = *(unsigned int *)(v4 + 16LL * v2 + 8);
      if ( (result & 0x34) != 0 )
      {
        ++v2;
      }
      else
      {
        v5 = *(_DWORD *)(a1 + 144);
        if ( v2 == v5 )
        {
          *(_DWORD *)(a1 + 144) = 0;
          v5 = 0;
        }
        v6 = *(_DWORD *)(a1 + 208);
        if ( v2 == v6 )
        {
          *(_DWORD *)(a1 + 208) = -1;
          v6 = -1;
        }
        v7 = v3 - 1;
        v3 = (unsigned int)(v3 - 1);
        if ( v7 == v6 )
          *(_DWORD *)(a1 + 208) = v2;
        if ( (_DWORD)v3 == v5 )
          *(_DWORD *)(a1 + 144) = v2;
        result = 2LL * v7;
        *(_OWORD *)(v4 + 16LL * v2) = *(_OWORD *)(v4 + 16 * v3);
      }
    }
    while ( v2 < (unsigned int)v3 );
  }
  *(_DWORD *)(a1 + 124) = v3;
  return result;
}
