__int64 __fastcall GetVidMmAllocFromOwner(int a1, __int64 a2)
{
  int v2; // ecx
  int v3; // ecx

  v2 = a1 - 1;
  if ( !v2 )
    return a2;
  v3 = v2 - 3;
  if ( !v3 )
    return *(_QWORD *)(a2 + 64);
  if ( v3 == 1 )
    return *(_QWORD *)(a2 + 24);
  return 0LL;
}
