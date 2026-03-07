void __fastcall COREDEVICEACCESS::Release(COREDEVICEACCESS *this)
{
  COREACCESS::Release((COREDEVICEACCESS *)((char *)this + 8));
  if ( *((_BYTE *)this + 144) )
    COREACCESS::Release((COREDEVICEACCESS *)((char *)this + 72));
}
