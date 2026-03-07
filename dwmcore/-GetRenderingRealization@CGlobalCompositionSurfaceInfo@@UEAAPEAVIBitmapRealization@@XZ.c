struct IBitmapRealization *__fastcall CGlobalCompositionSurfaceInfo::GetRenderingRealization(
        CGlobalCompositionSurfaceInfo *this)
{
  __int64 v1; // rbx
  __int64 v3; // rdx

  v1 = 0LL;
  if ( !*((_QWORD *)this + 26) )
    CGlobalCompositionSurfaceInfo::ForceUpdateRenderingRealization(this);
  v3 = *((_QWORD *)this + 26);
  if ( v3 )
    return (struct IBitmapRealization *)(*(int *)(*(_QWORD *)(v3 + 8) + 16LL) + v3 + 8);
  return (struct IBitmapRealization *)v1;
}
