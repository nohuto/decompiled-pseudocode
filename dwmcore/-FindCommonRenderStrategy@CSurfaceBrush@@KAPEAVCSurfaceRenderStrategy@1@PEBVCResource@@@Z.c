void ***__fastcall CSurfaceBrush::FindCommonRenderStrategy(const struct CResource *a1)
{
  if ( !a1 )
    return off_1803E0718;
  if ( CBitmapRenderStrategy::IsSupportedSurface(a1) )
    return &off_1803E0720;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 56LL))(a1, 202LL) )
    return off_1803E0708;
  return (void ***)((unsigned __int64)off_1803E0710 & -(__int64)((*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 56LL))(
                                                                   a1,
                                                                   129LL) != 0));
}
