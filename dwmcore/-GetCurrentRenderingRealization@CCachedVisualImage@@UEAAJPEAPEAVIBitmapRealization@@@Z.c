__int64 __fastcall CCachedVisualImage::GetCurrentRenderingRealization(
        CCachedVisualImage *this,
        struct IBitmapRealization **a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rcx

  v2 = ((unsigned __int64)this - 1736) & -(__int64)(this != (CCachedVisualImage *)1808);
  *a2 = (struct IBitmapRealization *)v2;
  v3 = v2 + 8 + *(int *)(*(_QWORD *)(v2 + 8) + 4LL);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return 0LL;
}
