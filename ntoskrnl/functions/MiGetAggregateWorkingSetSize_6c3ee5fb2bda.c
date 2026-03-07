__int64 __fastcall MiGetAggregateWorkingSetSize(__int64 a1)
{
  __int64 v1; // rdx
  char v2; // al
  int *v3; // rcx

  v1 = *(_QWORD *)(a1 + 144);
  v2 = *(_BYTE *)(a1 + 184);
  v3 = &dword_140C69E80;
  if ( (v2 & 7) != 2 )
    v3 = 0LL;
  if ( v3 )
    return *((_QWORD *)v3 + 1);
  return v1;
}
