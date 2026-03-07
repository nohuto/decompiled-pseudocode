void __fastcall OUTPUTDUPL_SESSION_MGR::~OUTPUTDUPL_SESSION_MGR(OUTPUTDUPL_SESSION_MGR *this)
{
  struct OUTPUTDUPL_MGR *v2; // rcx
  AUTOEXPANDALLOCATION *v3; // rcx

  v2 = (struct OUTPUTDUPL_MGR *)*((_QWORD *)this + 15);
  if ( v2 )
  {
    DestroyOutputDuplManager(v2);
    *((_QWORD *)this + 15) = 0LL;
  }
  v3 = (AUTOEXPANDALLOCATION *)*((_QWORD *)this + 7);
  if ( v3 )
  {
    AUTOEXPANDALLOCATION::`scalar deleting destructor'(v3);
    *((_QWORD *)this + 7) = 0LL;
    *((_DWORD *)this + 1) = 0;
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((OUTPUTDUPL_SESSION_MGR *)((char *)this + 72));
  DXGFASTMUTEX::~DXGFASTMUTEX((OUTPUTDUPL_SESSION_MGR *)((char *)this + 8));
}
