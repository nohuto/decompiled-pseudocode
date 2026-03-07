int __fastcall IopFillTriageDumpDataBlocks(unsigned int *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r11
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r10
  unsigned int *v8; // rdx
  char *v9; // rbx
  unsigned int i; // edi
  __int64 v11; // r13
  ULONGLONG *v12; // rsi
  unsigned int v13; // r14d
  unsigned __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // r10
  int v17; // r11d
  unsigned __int64 v18; // rcx
  unsigned int v19; // ecx
  unsigned int *v20; // r12
  ULONGLONG pullResult; // [rsp+28h] [rbp-80h] BYREF
  char *v23; // [rsp+30h] [rbp-78h]
  ULONGLONG *v24; // [rsp+38h] [rbp-70h]
  __int64 v25; // [rsp+40h] [rbp-68h]
  __int64 v26; // [rsp+48h] [rbp-60h]
  __int64 v27; // [rsp+50h] [rbp-58h]
  __int64 v28; // [rsp+58h] [rbp-50h]
  unsigned int *v29; // [rsp+60h] [rbp-48h]
  unsigned int *v30; // [rsp+B0h] [rbp+8h]
  __int64 v32; // [rsp+C0h] [rbp+18h]

  v32 = a3;
  v30 = a1;
  v4 = a4;
  LODWORD(v5) = a2;
  pullResult = 0LL;
  v6 = a4 + a1[30];
  v25 = v6;
  v7 = v6;
  v8 = a1 + 31;
  v29 = a1 + 31;
  v9 = (char *)(v6 + 16LL * a1[31]);
  v23 = v9;
  for ( i = 0; i < (unsigned int)v5; ++i )
  {
    v11 = a3 + 16LL * i;
    v26 = v11;
    v12 = *(ULONGLONG **)(v11 + 8);
    v13 = 0;
    while ( 1 )
    {
      v24 = v12;
      if ( v13 >= *(_DWORD *)v11 )
        break;
      v5 = (v7 - v6) >> 4;
      if ( (unsigned int)v5 >= *v8 )
        return v5;
      v14 = v4 + a1[1];
      LODWORD(v5) = v7 + 16;
      v28 = v7 + 16;
      if ( v7 + 16 > v14 )
        return v5;
      LODWORD(v5) = RtlULongLongSub(v12[1], *v12, &pullResult);
      if ( (int)v5 < 0 )
        return v5;
      v18 = (unsigned __int64)&v9[(unsigned int)pullResult];
      if ( v18 < (unsigned __int64)v9 )
      {
        v18 = -1LL;
        LODWORD(v5) = 0;
      }
      else
      {
        LODWORD(v5) = 1;
      }
      if ( !(_DWORD)v5 || v18 > v14 )
        return v5;
      *(_QWORD *)v16 = v15;
      *(_DWORD *)(v16 + 8) = (_DWORD)v9 - v17;
      v19 = *((_DWORD *)v12 + 2) - *(_DWORD *)v12;
      v20 = (unsigned int *)(v16 + 12);
      v27 = v16 + 12;
      *(_DWORD *)(v16 + 12) = v19;
      memmove(v9, (const void *)*v12, v19);
      v9 += *v20;
      v23 = v9;
      v7 = v28;
      ++v13;
      v12 += 2;
      a1 = v30;
      v4 = a4;
      v8 = v29;
    }
    LODWORD(v5) = a2;
    a3 = v32;
  }
  return v5;
}
