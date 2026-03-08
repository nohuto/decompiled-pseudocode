/*
 * XREFs of ShrinkMask_CY @ 0x1C0260610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall ShrinkMask_CY(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v3; // r9
  size_t v4; // rcx
  unsigned int v5; // r8d
  int v6; // ecx
  unsigned __int64 i; // r8
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int16 *v11; // rax
  int v12; // r10d
  unsigned int v13; // edx
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  char v17; // al

  v1 = *(_QWORD *)(a1 + 216);
  v3 = *(_QWORD *)(a1 + 208);
  v4 = *(unsigned int *)(a1 + 200);
  if ( (*(_DWORD *)a1 & 0x100) != 0 )
  {
    v5 = v4;
    v6 = v4 & 3;
    for ( i = v5 >> 2; (_DWORD)i; i = (unsigned int)(i - 1) )
    {
      v8 = *(_DWORD *)v1;
      v1 += 4LL;
      *(_DWORD *)v3 = ~v8;
      v3 += 4LL;
    }
    if ( v6 )
    {
      v3 -= v1;
      do
      {
        *(_BYTE *)(v3 + v1) = ~*(_BYTE *)v1;
        ++v1;
        --v6;
      }
      while ( v6 );
    }
  }
  else
  {
    memmove((void *)v3, (const void *)v1, v4);
  }
  v9 = *(_DWORD *)(a1 + 228) - 1;
  *(_DWORD *)(a1 + 228) = v9;
  if ( v9 > 0 )
    *(_QWORD *)(a1 + 216) += *(int *)(a1 + 224);
  v10 = *(_QWORD *)(a1 + 312);
  v11 = *(unsigned __int16 **)(v10 + 152);
  v12 = *v11;
  *(_QWORD *)(v10 + 152) = v11 + 1;
  while ( --v12 )
  {
    v13 = *(_DWORD *)(a1 + 200);
    i = *(_QWORD *)(a1 + 216);
    v3 = v13 & 3;
    v14 = *(_QWORD *)(a1 + 208);
    v1 = v13 >> 2;
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
    {
      for ( ; (_DWORD)v1; v1 = (unsigned int)(v1 - 1) )
      {
        v15 = *(_DWORD *)i;
        i += 4LL;
        *(_DWORD *)v14 |= ~v15;
        v14 += 4LL;
      }
      if ( (_DWORD)v3 )
      {
        i -= v14;
        do
        {
          *(_BYTE *)v14 |= ~*(_BYTE *)(i + v14);
          ++v14;
          v3 = (unsigned int)(v3 - 1);
        }
        while ( (_DWORD)v3 );
      }
    }
    else
    {
      for ( ; (_DWORD)v1; v1 = (unsigned int)(v1 - 1) )
      {
        v16 = *(_DWORD *)i;
        i += 4LL;
        *(_DWORD *)v14 |= v16;
        v14 += 4LL;
      }
      for ( ; (_DWORD)v3; v3 = (unsigned int)(v3 - 1) )
      {
        v17 = *(_BYTE *)i++;
        *(_BYTE *)v14++ |= v17;
      }
    }
    if ( (int)--*(_DWORD *)(a1 + 228) > 0 )
      *(_QWORD *)(a1 + 216) += *(int *)(a1 + 224);
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, unsigned __int64))(a1 + 184))(a1, v1, i, v3);
}
