__int64 __fastcall CTransform3D::OnChanged(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 32);
  result = 1LL;
  if ( (v1 & 1) != 0 )
    return 0LL;
  *(_DWORD *)(a1 + 32) = v1 | 1;
  return result;
}
