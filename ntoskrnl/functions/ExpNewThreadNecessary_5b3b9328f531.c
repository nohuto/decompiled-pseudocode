bool __fastcall ExpNewThreadNecessary(__int64 a1, int a2)
{
  int v2; // r8d

  v2 = *(_DWORD *)(a1 + 712);
  if ( v2 < (2 * *(_DWORD *)(a1 + 716)) >> 1 )
    return 1;
  if ( v2 >= a2 || *(_QWORD *)(a1 + 8) != a1 + 8 )
    return 0;
  return *(_DWORD *)(a1 + 4) || *(int *)(a1 + 716) < 0;
}
