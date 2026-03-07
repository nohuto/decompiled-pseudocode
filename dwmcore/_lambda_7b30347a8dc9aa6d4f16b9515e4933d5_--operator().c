bool __fastcall lambda_7b30347a8dc9aa6d4f16b9515e4933d5_::operator()(__int64 a1, int a2)
{
  int v2; // r9d

  v2 = *(_DWORD *)(**(_QWORD **)a1 + 8LL * **(int **)(a1 + 8) + 464);
  if ( !v2 )
    return (a2 & 3) != 0;
  return v2 == 1 && a2;
}
