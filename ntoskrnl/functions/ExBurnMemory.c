unsigned __int64 __fastcall ExBurnMemory(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r10
  unsigned __int64 v3; // r9
  __int64 v4; // r8
  int v5; // eax
  unsigned __int64 v6; // rcx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax

  v2 = a1 + 32;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 40);
  while ( 1 )
  {
    v5 = *(_DWORD *)(v4 + 24);
    if ( v5 == 2 || v5 == 5 )
    {
      v6 = *(_QWORD *)(v4 + 40);
      if ( v6 )
        break;
    }
LABEL_7:
    v4 = *(_QWORD *)(v4 + 8);
    if ( v4 == v2 )
      return a2 - v3;
  }
  if ( v6 <= v3 )
  {
    *(_DWORD *)(v4 + 24) = 6;
    v3 -= v6;
    if ( !v3 )
      return a2 - v3;
    goto LABEL_7;
  }
  v8 = v6 - v3;
  *(_QWORD *)(v4 + 40) = v8;
  qword_140C64280 = *(_QWORD *)(v4 + 32) + v8;
  qword_140C64288 = v3;
  dword_140C64278 = 6;
  v9 = *(_QWORD *)v4;
  if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 )
    __fastfail(3u);
  BurnMemoryDescriptor = *(_QWORD *)v4;
  qword_140C64268 = v4;
  v3 = 0LL;
  *(_QWORD *)(v9 + 8) = &BurnMemoryDescriptor;
  *(_QWORD *)v4 = &BurnMemoryDescriptor;
  return a2 - v3;
}
