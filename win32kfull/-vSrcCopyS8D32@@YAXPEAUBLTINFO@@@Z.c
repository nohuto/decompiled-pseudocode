void __fastcall vSrcCopyS8D32(struct BLTINFO *a1)
{
  unsigned __int8 *v1; // r8
  int v2; // esi
  int v3; // edi
  _DWORD *v4; // r9
  __int64 v5; // r14
  unsigned __int8 *v6; // r10
  _DWORD *v7; // r11
  int i; // ebx
  __int64 v9; // rax

  v1 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + *((int *)a1 + 12));
  v2 = *((_DWORD *)a1 + 7);
  v3 = *((_DWORD *)a1 + 8);
  v4 = (_DWORD *)(*((_QWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 14));
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  while ( 1 )
  {
    v6 = v1;
    v7 = v4;
    for ( i = v2; i; --i )
    {
      v9 = *v6++;
      *v7++ = *(_DWORD *)(v5 + 4 * v9);
    }
    if ( !--v3 )
      break;
    v1 += *((int *)a1 + 10);
    v4 = (_DWORD *)((char *)v4 + *((int *)a1 + 11));
  }
}
