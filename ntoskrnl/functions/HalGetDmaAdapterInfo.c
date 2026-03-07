__int64 __fastcall HalGetDmaAdapterInfo(__int64 a1, _DWORD *a2)
{
  int v3; // ecx
  __int64 v4; // rax

  if ( *a2 != 1 )
    return 3221225659LL;
  a2[4] = *(_DWORD *)(a1 + 448);
  if ( *(_BYTE *)(a1 + 441) )
  {
    if ( !*(_BYTE *)(a1 + 440) )
      a2[5] = 3;
    a2[3] = -1;
    v3 = 1;
    a2[2] = 0;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 368);
    a2[2] = 1;
    a2[3] = 1;
    a2[5] = 0;
    v3 = *(_DWORD *)(v4 + 164);
  }
  a2[6] = v3;
  return 0LL;
}
