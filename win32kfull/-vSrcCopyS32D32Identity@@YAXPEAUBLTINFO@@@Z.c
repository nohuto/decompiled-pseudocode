void __fastcall vSrcCopyS32D32Identity(struct BLTINFO *a1)
{
  int v2; // r14d
  int v3; // ebp
  unsigned __int8 *v4; // rdi
  unsigned __int8 *v5; // rsi
  unsigned int v6; // r14d
  __int64 v7; // rcx

  v2 = *((_DWORD *)a1 + 7);
  v3 = *((_DWORD *)a1 + 8);
  v4 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 12));
  v5 = (unsigned __int8 *)(*((_QWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 14));
  if ( *((int *)a1 + 6) < 0 )
  {
    v7 = 4LL * (unsigned int)(v2 - 1);
    v4 -= v7;
    v5 -= v7;
  }
  v6 = 4 * v2;
  while ( 1 )
  {
    if ( *((_DWORD *)a1 + 16) )
      vSrcAlignCopyMemory(v5, v4, v6);
    else
      memmove(v5, v4, v6);
    if ( !--v3 )
      break;
    v4 += *((int *)a1 + 10);
    v5 += *((int *)a1 + 11);
  }
}
