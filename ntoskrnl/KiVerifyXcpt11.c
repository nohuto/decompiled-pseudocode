__int64 __fastcall KiVerifyXcpt11(__int64 a1)
{
  __int64 v1; // rdx
  int *v2; // r8
  __int64 result; // rax
  int v4; // eax

  v1 = a1;
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    ++**(_DWORD **)a1;
    v2 = (int *)(a1 + 12);
    v4 = *(_DWORD *)(a1 + 12) + 12;
    *(_DWORD *)(a1 + 12) = v4;
    if ( v4 == 36 )
      KiVerifyXcptFilter(a1);
  }
  else
  {
    v2 = (int *)(a1 + 12);
    *(_DWORD *)(a1 + 12) = -1;
    *(_DWORD *)(a1 + 16) = 1;
  }
  result = *v2;
  *(_QWORD *)(v1 + 24) += result;
  return result;
}
