const void **__fastcall RtlSidHashLookup(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // rax
  unsigned __int8 v5; // bp
  __int16 v6; // r8
  unsigned int v7; // r9d
  unsigned __int64 i; // rdi
  int v9; // esi
  unsigned int v10; // esi
  unsigned int v11; // edi
  __int64 v13; // r13
  int v14; // ecx
  int v15; // r12d
  const void **v16; // r15
  __int64 v17; // rbp
  const void **v18; // rbx
  __int16 v19; // [rsp+60h] [rbp+8h]
  unsigned int v20; // [rsp+70h] [rbp+18h]

  if ( !a1 || !a2 )
    return 0LL;
  v4 = a2[1];
  v5 = 0;
  v6 = *(_WORD *)a2;
  v19 = *(_WORD *)a2;
  v7 = 4 * v4 + 8;
  LODWORD(v4) = a2[4 * v4 + 4];
  v20 = v7;
  for ( i = *(_QWORD *)(a1 + 8 * (v4 & 0xF) + 16) & *(_QWORD *)(a1 + 8 * ((unsigned __int64)(unsigned int)v4 >> 4) + 144);
        i;
        i >>= 8 )
  {
    LOBYTE(v9) = i;
    if ( (_BYTE)i )
    {
      v13 = *(_QWORD *)(a1 + 8);
      v14 = v5;
      do
      {
        v15 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v9);
        v16 = (const void **)(v13 + 16LL * (unsigned int)(v14 + v15));
        if ( *(_WORD *)*v16 == v6 )
        {
          if ( !memcmp(a2, *v16, v7) )
            return v16;
          v6 = v19;
          v7 = v20;
          v14 = v5;
        }
        v9 = (unsigned __int8)v9 ^ (1 << v15);
      }
      while ( (_BYTE)v9 );
    }
    v5 += 8;
  }
  v10 = *(_DWORD *)a1;
  v11 = 64;
  if ( *(_DWORD *)a1 <= 0x40u )
    return 0LL;
  v17 = *(_QWORD *)(a1 + 8);
  while ( 1 )
  {
    v18 = (const void **)(v17 + 16LL * v11);
    if ( *(_WORD *)*v18 != v6 )
      goto LABEL_19;
    if ( !memcmp(a2, *v18, v7) )
      return (const void **)(v17 + 16LL * v11);
    v6 = v19;
LABEL_19:
    if ( ++v11 >= v10 )
      return 0LL;
    v7 = v20;
  }
}
