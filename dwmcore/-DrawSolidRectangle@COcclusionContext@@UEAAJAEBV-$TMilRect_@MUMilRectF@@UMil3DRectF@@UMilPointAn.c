__int64 __fastcall COcclusionContext::DrawSolidRectangle(__int64 a1, int a2, __int64 a3, int a4)
{
  if ( !*(_DWORD *)(a1 + 1432) && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a3 + 12) - 1.0) & _xmm) < 0.0000011920929 )
    COcclusionContext::CollectRectangleForOcclusion(a1, a2, 0, a4, 0LL);
  return 0LL;
}
