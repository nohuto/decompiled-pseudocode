__int64 __fastcall CmpPopulateKeyFullInformation(
        __int64 a1,
        const void *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v6; // edi
  int v7; // r10d
  unsigned int v9; // eax

  v6 = a3 + 44;
  v7 = 44;
  *a6 = a3 + 44;
  if ( a5 < 0x2C )
    return 3221225507LL;
  *(_QWORD *)a4 = *(_QWORD *)a1;
  *(_DWORD *)(a4 + 24) = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a4 + 28) = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(a4 + 36) = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a4 + 40) = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a4 + 8) = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a4 + 16) = a3;
  *(_DWORD *)(a4 + 20) = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a4 + 32) = *(_DWORD *)(a1 + 32);
  if ( !a3 )
    v7 = -1;
  *(_DWORD *)(a4 + 12) = v7;
  if ( a3 )
  {
    v9 = a5 - 44;
    if ( a5 - 44 > a3 )
      v9 = a3;
    memmove((void *)(a4 + 44), a2, v9);
  }
  return a5 < v6 ? 0x80000005 : 0;
}
