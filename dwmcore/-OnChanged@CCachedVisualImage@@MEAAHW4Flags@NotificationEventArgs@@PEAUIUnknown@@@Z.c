__int64 __fastcall CCachedVisualImage::OnChanged(CCachedVisualImage *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*((_BYTE *)a1 + 1776) )
  {
    CCachedVisualImage::MarkAllTargetsDirty(a1);
    return 1LL;
  }
  return result;
}
