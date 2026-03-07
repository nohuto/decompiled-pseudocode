void __fastcall COREDEVICEACCESS::AcquireSharedUncheck(COREDEVICEACCESS *this, char *a2)
{
  if ( *((_BYTE *)this + 144) )
    COREACCESS::AcquireShared((COREDEVICEACCESS *)((char *)this + 72), 0LL);
  COREACCESS::AcquireShared((COREDEVICEACCESS *)((char *)this + 8), 0LL);
}
