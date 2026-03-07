__int64 __fastcall MiBackSystemImageWithPagefile(__int64 a1)
{
  int v1; // edi
  unsigned __int64 v3; // rbp
  int v4; // esi
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  unsigned int v7; // esi
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // ecx
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_DWORD *)(a1 + 196);
  v11 = 0LL;
  if ( (v1 & 0xC) != 0 )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 48);
  if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
    return 3221225793LL;
  v4 = v1;
  if ( *(_QWORD *)(a1 + 112) && (v1 & 2) == 0 && !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v3) )
  {
    MiBackSingleImageWithPagefile(a1);
    v4 = *(_DWORD *)(a1 + 196);
  }
  v5 = *(_QWORD *)(a1 + 136);
  result = 0LL;
  if ( v5 != -2LL && v5 != 1 )
  {
    if ( (v5 & 1) != 0 )
    {
      *(_QWORD *)&v11 = 1LL;
      *((_QWORD *)&v11 + 1) = v5 & 0xFFFFFFFFFFFFFFFEuLL;
      v5 = (unsigned __int64)&v11;
    }
    *(_DWORD *)(a1 + 196) = v4 | 8;
    v7 = 0;
    if ( *(_QWORD *)v5 )
    {
      v8 = 0LL;
      do
      {
        v9 = *(_QWORD *)(v5 + 8 * v8 + 8);
        if ( !v9 )
          break;
        if ( *(_QWORD *)(v9 + 136) != 1LL )
        {
          result = MiBackSystemImageWithPagefile(v9);
          if ( (int)result < 0 )
            break;
        }
        v8 = ++v7;
      }
      while ( (unsigned __int64)v7 < *(_QWORD *)v5 );
    }
  }
  v10 = *(_DWORD *)(a1 + 196) & 0xFFFFFFF7;
  *(_DWORD *)(a1 + 196) = v10;
  if ( (int)result >= 0 )
    *(_DWORD *)(a1 + 196) = v10 | 4;
  return result;
}
