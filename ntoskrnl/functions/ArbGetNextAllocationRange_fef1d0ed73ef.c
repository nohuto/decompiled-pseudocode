char __fastcall ArbGetNextAllocationRange(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // r8
  unsigned int v5; // ecx
  unsigned __int64 i; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r9
  int v9; // edx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rdi
  unsigned int v13; // eax
  unsigned __int64 *v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // r11
  unsigned __int64 v19; // r10
  char result; // al

  while ( 1 )
  {
    if ( *(_QWORD *)(a2 + 40) )
    {
      ArbpUpdatePriority(a1);
      v4 = *(_QWORD *)(a2 + 56);
      v5 = *(_DWORD *)(a2 + 48);
    }
    else
    {
      v4 = *(_QWORD *)(a2 + 56);
      v5 = *(_DWORD *)(a2 + 48);
      for ( i = v4; i < v4 + ((unsigned __int64)v5 << 6); v4 = *(_QWORD *)(a2 + 56) )
      {
        *(_DWORD *)(i + 32) = 0;
        ArbpUpdatePriority(a1);
        v5 = *(_DWORD *)(a2 + 48);
        i += 64LL;
      }
    }
    v7 = v4 + 64;
    v8 = v4 + ((v5 - 1 + 1LL) << 6);
    while ( v7 < v8 )
    {
      if ( *(_DWORD *)(v7 + 32) < *(_DWORD *)(v4 + 32) )
        v4 = v7;
      v7 += 64LL;
    }
    v9 = *(_DWORD *)(v4 + 32);
    if ( v9 == 0x7FFFFFFF )
      return 0;
    v10 = *(_QWORD *)(v4 + 8);
    v11 = *(_QWORD *)v4;
    v12 = v10;
    if ( (unsigned int)(v9 - 2147483645) <= 1 )
    {
      v17 = *(_QWORD *)v4;
    }
    else
    {
      v13 = v9 - 1;
      if ( v9 <= 0 )
        v13 = ~v9;
      v14 = (unsigned __int64 *)(*(_QWORD *)(a1 + 64) + 16LL * v13);
      v15 = v14[1];
      v16 = *v14;
      v17 = *(_QWORD *)v4;
      if ( v11 <= v16 )
        v17 = v16;
      if ( v10 >= v15 )
        v12 = v15;
    }
    v18 = *(_QWORD *)(v4 + 16);
    if ( !v18 )
      goto LABEL_17;
    v19 = *(_QWORD *)(v4 + 24);
    v11 = v19 + v17 - 1 - (v19 + v17 - 1) % v19;
    if ( v18 - 1 > v12 - v11 )
    {
      *(_QWORD *)(a2 + 40) = v4;
    }
    else
    {
      v10 = v12 - (1 - v18 + v12) % v19;
LABEL_17:
      if ( v11 != *(_QWORD *)(a2 + 16) || v10 != *(_QWORD *)(a2 + 24) || *(_QWORD *)(a2 + 40) != v4 )
      {
        *(_QWORD *)(a2 + 16) = v11;
        result = 1;
        *(_QWORD *)(a2 + 24) = v10;
        *(_QWORD *)(a2 + 40) = v4;
        return result;
      }
    }
  }
}
