__int64 __fastcall BltMask_CY(__int64 a1)
{
  int *v1; // rdx
  int *v3; // r9
  size_t v4; // rcx
  __int64 v5; // r8
  int i; // ecx
  int v7; // eax

  v1 = *(int **)(a1 + 216);
  v3 = *(int **)(a1 + 208);
  v4 = *(unsigned int *)(a1 + 200);
  if ( (*(_DWORD *)a1 & 0x100) != 0 )
  {
    v5 = (unsigned int)v4 >> 2;
    for ( i = v4 & 3; (_DWORD)v5; v5 = (unsigned int)(v5 - 1) )
    {
      v7 = *v1++;
      *v3++ = ~v7;
    }
    if ( i )
    {
      v3 = (int *)((char *)v3 - (__int64)v1);
      do
      {
        *((_BYTE *)v1 + (_QWORD)v3) = ~*(_BYTE *)v1;
        v1 = (int *)((char *)v1 + 1);
        --i;
      }
      while ( i );
    }
  }
  else
  {
    memmove(v3, v1, v4);
  }
  if ( (int)--*(_DWORD *)(a1 + 228) > 0 )
    *(_QWORD *)(a1 + 216) += *(int *)(a1 + 224);
  return (*(__int64 (__fastcall **)(__int64, int *, __int64, int *))(a1 + 184))(a1, v1, v5, v3);
}
