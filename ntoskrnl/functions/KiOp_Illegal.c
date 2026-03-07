__int64 __fastcall KiOp_Illegal(__int64 a1)
{
  _DWORD *v1; // rax

  v1 = *(_DWORD **)(a1 + 32);
  v1[6] = 0;
  *v1 = -1073741795;
  return 0LL;
}
