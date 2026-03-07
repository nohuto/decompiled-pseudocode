void __fastcall vSrcCopyS8D4(struct BLTINFO *a1)
{
  __int64 v1; // rdx
  int v3; // esi
  int v4; // ebp
  __int64 v5; // r14
  _BYTE *v6; // r8
  unsigned __int8 *v7; // r10
  int v8; // edx
  _BYTE *v9; // r11
  unsigned __int8 *v10; // rbx
  int i; // edi
  char v12; // cl
  __int64 v13; // rax

  v1 = *((int *)a1 + 14);
  v3 = v1 + *((_DWORD *)a1 + 7);
  v4 = *((_DWORD *)a1 + 8);
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v6 = (_BYTE *)(*((_QWORD *)a1 + 2) + (v1 >> 1));
  v7 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + *((int *)a1 + 12));
  while ( 1 )
  {
    v8 = *((_DWORD *)a1 + 14);
    v9 = v6;
    v10 = v7;
    if ( (v8 & 1) != 0 )
    {
      v10 = v7 + 1;
      v9 = v6 + 1;
      *v6 = *(_BYTE *)(v5 + 4LL * *v7) | *v6 & 0xF0;
      ++v8;
    }
    for ( i = v8 + 1; i < v3; i += 2 )
    {
      v8 += 2;
      v12 = *(_BYTE *)(v5 + 4LL * *v10);
      v13 = v10[1];
      v10 += 2;
      *v9++ = *(_BYTE *)(v5 + 4 * v13) | (16 * v12);
    }
    if ( v8 < v3 )
      *v9 = *v9 & 0xF | (16 * *(_BYTE *)(v5 + 4LL * *v10));
    if ( !--v4 )
      break;
    v7 += *((int *)a1 + 10);
    v6 += *((int *)a1 + 11);
  }
}
