__int64 __fastcall CCursorVisual::CollectOcclusion(
        CCursorVisual *this,
        struct COcclusionContext *a2,
        struct COcclusionInfo *a3)
{
  struct CCursorVisual *v3; // rcx
  COcclusionContext *v4; // r8

  if ( *((_BYTE *)a2 + 1206) && *((_BYTE *)this + 712) && CCursorVisual::IsVisible(this) )
    COcclusionContext::CollectCursor(v4, v3);
  return 0LL;
}
