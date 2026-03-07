void __fastcall vTransparentCopyS32D32Identity(struct BLTINFO *a1)
{
  int v1; // esi
  int v3; // r10d
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // edx
  _DWORD *v7; // rcx
  int *v8; // r9
  _DWORD *v9; // rdi
  int *v10; // r11
  int i; // ebx
  int v12; // eax

  v1 = *((_DWORD *)a1 + 7);
  v3 = *((_DWORD *)a1 + 8);
  v4 = *((_QWORD *)a1 + 9);
  v5 = *(_QWORD *)(v4 + 128);
  if ( v5 || (*(_DWORD *)(v4 + 112) & 0x100) != 0 )
    v6 = **(_DWORD **)(v5 + 112) | *(_DWORD *)(*(_QWORD *)(v5 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v5 + 112) + 8LL);
  else
    v6 = -1;
  v7 = (_DWORD *)(*((_QWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 12));
  v8 = (int *)(*((_QWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 14));
  while ( v3 )
  {
    --v3;
    v9 = v7;
    v10 = v8;
    for ( i = v1; i; ++v10 )
    {
      --i;
      v12 = v6 & *v9++;
      if ( v12 != *((_DWORD *)a1 + 37) )
        *v10 = v12;
    }
    v7 = (_DWORD *)((char *)v7 + *((int *)a1 + 10));
    v8 = (int *)((char *)v8 + *((int *)a1 + 11));
  }
}
