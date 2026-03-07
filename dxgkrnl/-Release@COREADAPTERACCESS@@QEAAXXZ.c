void __fastcall COREADAPTERACCESS::Release(COREADAPTERACCESS *this)
{
  if ( *((_QWORD *)this + 3) != *((_QWORD *)this + 11) )
    COREACCESS::Release((COREADAPTERACCESS *)((char *)this + 8));
  COREACCESS::Release((COREADAPTERACCESS *)((char *)this + 72));
  *((_BYTE *)this + 1) = 0;
}
