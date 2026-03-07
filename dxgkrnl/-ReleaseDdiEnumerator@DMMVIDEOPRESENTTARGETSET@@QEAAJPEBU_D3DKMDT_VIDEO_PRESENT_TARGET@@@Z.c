__int64 __fastcall DMMVIDEOPRESENTTARGETSET::ReleaseDdiEnumerator(
        DMMVIDEOPRESENTTARGETSET *this,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a2)
{
  D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *p_VideoOutputTechnology; // r11
  __int64 v3; // rdx

  if ( !a2 )
    return 3223192325LL;
  p_VideoOutputTechnology = &a2[-1].VideoOutputTechnology;
  if ( a2[-1].VideoOutputTechnology != 305419896 )
    return 3223192325LL;
  v3 = *(_QWORD *)&a2[-1].MonitorOrientationAwareness;
  if ( v3
    && !DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::ContainsByReference(
          (__int64)this + 8,
          v3) )
  {
    return 3223192368LL;
  }
  operator delete(p_VideoOutputTechnology);
  return 0LL;
}
