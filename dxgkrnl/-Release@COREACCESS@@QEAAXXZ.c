void __fastcall COREACCESS::Release(COREACCESS *this)
{
  struct _KTHREAD **v2; // rcx

  if ( !*((_BYTE *)this + 24) )
    WdLogSingleEntry5(0LL, 275LL, 4LL, this, 0LL, 0LL);
  v2 = (struct _KTHREAD **)*((_QWORD *)this + 2);
  *((_BYTE *)this + 24) = 0;
  if ( KeGetCurrentThread() != v2[23] )
    DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v2, *((char **)this + 4));
  *((_QWORD *)this + 4) = 0LL;
}
