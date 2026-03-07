__int64 __fastcall CMergedDirtyRect::GetRects(CMergedDirtyRect *this, unsigned int *a2, const struct MilRectF **a3)
{
  if ( *((_QWORD *)this + 11) != GetCurrentFrameId() )
    (*(void (__fastcall **)(CMergedDirtyRect *))(*(_QWORD *)this + 8LL))(this);
  return CMergedRectBase<4>::GetRects(this, a2, a3);
}
