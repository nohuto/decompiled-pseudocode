__int64 __fastcall CBrushDrawListGenerator::AttachInput(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 *v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 result; // rax

  v5 = (__int64 *)(a1 + 8 * (a2 + 5LL));
  if ( v5 != a3 )
  {
    v6 = *a3;
    *a3 = 0LL;
    v7 = *v5;
    *v5 = v6;
    if ( v7 )
      std::default_delete<CDrawListBrush>::operator()(a1, v7);
  }
  result = *(unsigned int *)(a1 + 72);
  if ( (unsigned int)result <= a2 + 1 )
    result = a2 + 1;
  *(_DWORD *)(a1 + 72) = result;
  return result;
}
