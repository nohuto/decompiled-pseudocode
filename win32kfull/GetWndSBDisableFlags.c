__int64 __fastcall GetWndSBDisableFlags(__int64 a1, int a2)
{
  int *v2; // rax
  int v3; // ecx
  int v4; // eax

  v2 = *(int **)(a1 + 152);
  if ( v2 )
  {
    v3 = *v2;
    v4 = *v2 >> 2;
    if ( !a2 )
      LOBYTE(v4) = v3;
    return v4 & 3;
  }
  else
  {
    UserSetLastError(1447);
    return 0LL;
  }
}
