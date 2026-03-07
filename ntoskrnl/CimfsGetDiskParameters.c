__int64 __fastcall CimfsGetDiskParameters(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v6; // esi
  int v7; // eax

  v6 = -1073741811;
  if ( a1 && a2 && a3 && *(_DWORD *)(a1 + 4) == 6 && !*(_DWORD *)(a1 + 36) )
  {
    memset(a2, 0, 0x90uLL);
    a2[6] = *(_DWORD *)a1;
    v7 = *(_DWORD *)(a1 + 40);
    if ( v7 == 1 )
    {
      *((_QWORD *)a2 + 1) = *(_QWORD *)(a1 + 20);
LABEL_10:
      v6 = 0;
      *a3 = a1 + 44;
      return v6;
    }
    if ( !v7 )
    {
      *a2 = 1;
      *((_OWORD *)a2 + 3) = *(_OWORD *)(a1 + 20);
      goto LABEL_10;
    }
  }
  return v6;
}
