const struct DEVICE_INFO *__fastcall CPointerDeviceCache::Update(struct CManipulationFrame *this)
{
  unsigned int v1; // edx
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  char v5; // r8
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 4) )
  {
    v3 = (_DWORD *)((char *)this + 380);
    do
    {
      if ( (*v3 & 0x10004) != 4 )
        break;
      ++v1;
      v3 += 62;
    }
    while ( v1 < *((_DWORD *)this + 4) );
  }
  if ( CManipulationFrame::IsMousewheelFrame(this) )
    CPointerDeviceCache::s_rcMouseRegion = *(struct tagRECT *)((char *)this + 584);
  if ( v5 )
  {
    v7 = *((_QWORD *)this + 48);
    std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::erase(
      v4,
      &v7);
  }
  return CPointerDeviceCache::Query(*((_QWORD *)this + 48));
}
