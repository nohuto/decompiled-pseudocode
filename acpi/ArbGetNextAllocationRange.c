char __fastcall ArbGetNextAllocationRange(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // r8
  unsigned int v6; // ecx
  unsigned __int64 i; // rdi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r9
  int v10; // edx
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rdi
  unsigned int v14; // eax
  unsigned __int64 *v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // r11
  unsigned __int64 v20; // r10
  char result; // al

  while ( 1 )
  {
    v4 = *(_QWORD *)(a2 + 40);
    if ( v4 )
    {
      ArbpUpdatePriority(a1, v4);
      v5 = *(_QWORD *)(a2 + 56);
      v6 = *(_DWORD *)(a2 + 48);
    }
    else
    {
      v5 = *(_QWORD *)(a2 + 56);
      v6 = *(_DWORD *)(a2 + 48);
      for ( i = v5; i < v5 + ((unsigned __int64)v6 << 6); v5 = *(_QWORD *)(a2 + 56) )
      {
        *(_DWORD *)(i + 32) = 0;
        ArbpUpdatePriority(a1, i);
        v6 = *(_DWORD *)(a2 + 48);
        i += 64LL;
      }
    }
    v8 = v5 + 64;
    v9 = v5 + ((v6 - 1 + 1LL) << 6);
    while ( v8 < v9 )
    {
      if ( *(_DWORD *)(v8 + 32) < *(_DWORD *)(v5 + 32) )
        v5 = v8;
      v8 += 64LL;
    }
    v10 = *(_DWORD *)(v5 + 32);
    if ( v10 == 0x7FFFFFFF )
      return 0;
    v11 = *(_QWORD *)(v5 + 8);
    v12 = *(_QWORD *)v5;
    v13 = v11;
    if ( (unsigned int)(v10 - 2147483645) <= 1 )
    {
      v18 = *(_QWORD *)v5;
    }
    else
    {
      v14 = v10 - 1;
      if ( v10 <= 0 )
        v14 = ~v10;
      v15 = (unsigned __int64 *)(*(_QWORD *)(a1 + 64) + 16LL * v14);
      v16 = v15[1];
      v17 = *v15;
      v18 = *(_QWORD *)v5;
      if ( v12 <= v17 )
        v18 = v17;
      if ( v11 >= v16 )
        v13 = v16;
    }
    v19 = *(_QWORD *)(v5 + 16);
    if ( !v19 )
      goto LABEL_24;
    v20 = *(_QWORD *)(v5 + 24);
    v12 = v20 + v18 - 1 - (v20 + v18 - 1) % v20;
    if ( v19 - 1 <= v13 - v12 )
    {
      v11 = v13 - (1 - v19 + v13) % v20;
LABEL_24:
      if ( v12 != *(_QWORD *)(a2 + 16) || v11 != *(_QWORD *)(a2 + 24) || *(_QWORD *)(a2 + 40) != v5 )
      {
        *(_QWORD *)(a2 + 16) = v12;
        result = 1;
        *(_QWORD *)(a2 + 24) = v11;
        *(_QWORD *)(a2 + 40) = v5;
        return result;
      }
    }
    else
    {
      *(_QWORD *)(a2 + 40) = v5;
    }
  }
}
