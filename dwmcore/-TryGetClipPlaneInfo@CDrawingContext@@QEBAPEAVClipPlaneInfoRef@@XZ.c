struct ClipPlaneInfoRef *__fastcall CDrawingContext::TryGetClipPlaneInfo(CDrawingContext *this)
{
  __int64 v1; // rdx
  struct ClipPlaneInfoRef *result; // rax

  v1 = *((_QWORD *)this + 428);
  result = 0LL;
  if ( v1 )
    return *(struct ClipPlaneInfoRef **)(v1 + 256);
  return result;
}
