void __fastcall vSrcCopyS24D32(struct BLTINFO *a1)
{
  int v1; // r14d
  XLATE *v2; // rbp
  int v3; // esi
  int *v4; // rdi
  int v5; // r15d
  unsigned __int8 *v6; // rbx
  int v7; // r12d
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  unsigned int (*v11)(struct _XLATEOBJ *, unsigned int); // r12
  int v12; // r13d
  int v13; // [rsp+60h] [rbp+8h]
  unsigned int (*i)(struct _XLATEOBJ *, unsigned int); // [rsp+68h] [rbp+10h]

  v1 = *((_DWORD *)a1 + 7);
  v2 = *(XLATE **)a1;
  v3 = *((_DWORD *)a1 + 8);
  v4 = (int *)(*((_QWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 14));
  v5 = *((_DWORD *)a1 + 10) - 3 * v1;
  v6 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 12));
  v7 = *((_DWORD *)a1 + 11) - 4 * v1;
  v13 = v7;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 24LL) & 8) != 0
    && (*(_DWORD *)(*((_QWORD *)v2 + 6) + 24LL) & 8) != 0 )
  {
    while ( 1 )
    {
      v8 = v1;
      do
      {
        v9 = *v6;
        v10 = *(unsigned __int16 *)(v6 + 1) << 8;
        v6 += 3;
        *v4++ = v9 | v10;
        --v8;
      }
      while ( v8 );
      if ( !--v3 )
        break;
      v6 += v5;
      v4 = (int *)((char *)v4 + v7);
    }
  }
  else
  {
    v11 = XLATE::pfnXlateBetweenBitfields(v2);
    for ( i = v11; ; v11 = i )
    {
      v12 = v1;
      do
      {
        *v4 = ((__int64 (__fastcall *)(XLATE *, _QWORD))v11)(v2, *v6 | (*(unsigned __int16 *)(v6 + 1) << 8));
        v6 += 3;
        ++v4;
        --v12;
      }
      while ( v12 );
      if ( !--v3 )
        break;
      v6 += v5;
      v4 = (int *)((char *)v4 + v13);
    }
  }
}
