void __fastcall HvUnCOWReconciledPages(__int64 a1)
{
  __int64 v2; // r14
  unsigned int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // r9
  int v6; // edx
  struct _KTHREAD *v7; // rcx
  unsigned int v8; // r8d
  _DWORD *v9; // r10
  unsigned int v10; // edi
  _DWORD *v11; // rdx
  int v12; // r9d
  unsigned __int64 v13; // r11
  unsigned int v14; // r9d
  __int64 v15; // rcx
  unsigned int v16; // ebx
  unsigned __int64 i; // rax
  unsigned int v18; // edi
  unsigned int v19; // r8d
  __int64 v20; // rdx
  unsigned int v21; // ecx
  unsigned int v22; // r10d
  __int64 v23; // rdi
  unsigned int v24; // r8d
  unsigned __int64 v25; // r11
  _DWORD *v26; // rdx
  int v27; // r9d
  _DWORD *j; // rax
  unsigned int v29; // r9d
  __int64 v30; // rcx
  unsigned __int64 k; // rax
  unsigned int v32; // r8d
  unsigned int *v33; // rax
  unsigned int *v34; // rax
  _DWORD *v35; // rax

  if ( (*(_DWORD *)(a1 + 160) & 0x20000) != 0 )
  {
    v2 = a1 + 1736;
    if ( *(struct _KTHREAD **)(a1 + 4192) == KeGetCurrentThread() )
      RtlMergeBitMaps(a1 + 1736, a1 + 1688);
    v3 = *(_DWORD *)v2;
    v4 = 0LL;
    if ( *(_DWORD *)v2 )
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(v2 + 8);
        v6 = *(_DWORD *)(v5 + 4 * v4);
        if ( v3 < 0x20 )
          break;
        *(_DWORD *)(v5 + 4 * v4) = ~v6;
        v4 = (unsigned int)(v4 + 1);
        v3 -= 32;
        if ( !v3 )
          goto LABEL_7;
      }
      *(_DWORD *)(v5 + 4LL * (unsigned int)v4) = v6 ^ ((1 << v3) - 1);
    }
LABEL_7:
    RtlMergeBitMaps(v2, a1 + 88);
    RtlMergeBitMaps(v2, a1 + 112);
    v7 = *(struct _KTHREAD **)(a1 + 4192);
    if ( v7 && v7 != KeGetCurrentThread() )
      RtlMergeBitMaps(v2, a1 + 1688);
    v8 = *(_DWORD *)v2;
    if ( *(_DWORD *)v2 )
    {
      v9 = *(_DWORD **)(v2 + 8);
      v10 = 0;
      v11 = v9;
      v12 = *v9;
      v13 = (unsigned __int64)&v9[(unsigned __int64)(v8 - 1) >> 5];
      while ( 1 )
      {
        v14 = ~v12;
        if ( v14 )
          break;
        v35 = v11 + 1;
        v11 = v35;
        if ( (unsigned __int64)v35 > v13 )
          goto LABEL_47;
        v12 = *v35;
      }
      _BitScanForward64((unsigned __int64 *)&v15, v14);
      v16 = v15 + 32 * (v11 - v9);
      if ( v16 > v8 )
      {
LABEL_47:
        v16 = *(_DWORD *)v2;
        goto LABEL_20;
      }
      for ( i = ~(v14 | ((1 << v15) - 1)); ; i = *v34 )
      {
        if ( (_DWORD)i )
        {
          _BitScanForward64(&i, i);
          goto LABEL_17;
        }
        v34 = v11 + 1;
        if ( (unsigned __int64)(v11 + 1) > v13 )
          break;
        ++v11;
      }
      LODWORD(i) = 32;
LABEL_17:
      v18 = i + 32 * (v11 - v9);
      if ( v18 > v8 )
        v18 = *(_DWORD *)v2;
      v10 = v18 - v16;
LABEL_20:
      if ( v10 )
      {
        do
        {
          v19 = ((v16 << 9) + (v10 << 9)) & 0xFFFFF000;
          v20 = ((v16 << 9) + 4095) & 0xFFFFF000;
          if ( (_DWORD)v20 != v19 )
            HvpViewMapUnCOWAndSealRange(a1 + 224, v20, v19 - (unsigned int)v20);
          v21 = v16 + v10;
          v22 = *(_DWORD *)v2;
          if ( *(_DWORD *)v2 <= v16 + v10 )
            break;
          v23 = *(_QWORD *)(v2 + 8);
          v24 = 0;
          v25 = v23 + 4 * ((unsigned __int64)(v22 - 1) >> 5);
          v26 = (_DWORD *)(v23 + 4 * ((unsigned __int64)v21 >> 5));
          v27 = ((1 << (v21 & 0x1F)) - 1) | *v26;
          for ( j = v26 + 1; ; ++j )
          {
            v29 = ~v27;
            if ( v29 )
              break;
            if ( (unsigned __int64)j > v25 )
              goto LABEL_44;
            v27 = *++v26;
          }
          _BitScanForward64((unsigned __int64 *)&v30, v29);
          v16 = v30 + 32 * (((__int64)v26 - v23) >> 2);
          if ( v16 > v22 )
          {
LABEL_44:
            v16 = *(_DWORD *)v2;
            goto LABEL_35;
          }
          for ( k = ~(v29 | ((1 << v30) - 1)); ; k = *v33 )
          {
            if ( (_DWORD)k )
            {
              _BitScanForward64(&k, k);
              goto LABEL_32;
            }
            v33 = v26 + 1;
            if ( (unsigned __int64)(v26 + 1) > v25 )
              break;
            ++v26;
          }
          LODWORD(k) = 32;
LABEL_32:
          v32 = k + 32 * (((__int64)v26 - v23) >> 2);
          if ( v32 > v22 )
            v32 = *(_DWORD *)v2;
          v24 = v32 - v16;
LABEL_35:
          v10 = v24;
        }
        while ( v24 );
      }
    }
  }
}
