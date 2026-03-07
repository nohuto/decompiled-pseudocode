__int64 __fastcall DMMVIDEOPRESENTSOURCESET::ReleaseDdiEnumerator(
        DMMVIDEOPRESENTSOURCESET *this,
        const struct _D3DKMDT_VIDEO_PRESENT_SOURCE *a2)
{
  struct _D3DKMDT_VIDEO_PRESENT_SOURCE *v2; // r11
  __int64 v3; // rdx

  if ( !a2 )
    return 3223192324LL;
  v2 = (struct _D3DKMDT_VIDEO_PRESENT_SOURCE *)&a2[-2];
  if ( a2[-2].Id != 305419896 )
    return 3223192324LL;
  v3 = (__int64)a2[-1];
  if ( v3
    && !DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::ContainsByReference(
          (__int64)this + 8,
          v3) )
  {
    return 3223192368LL;
  }
  operator delete(v2);
  return 0LL;
}
