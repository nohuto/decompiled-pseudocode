void __fastcall DXGPRESENTMUTEX::Release(DXGPRESENTMUTEX *this)
{
  if ( *((_BYTE *)this + 16) )
  {
    *((_BYTE *)this + 16) = 0;
    DXGFASTMUTEX::Release((DXGFASTMUTEX *)(*((_QWORD *)this + 1) + 776LL));
  }
}
