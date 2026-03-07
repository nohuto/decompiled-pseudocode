__int64 __fastcall DXGGLOBAL::RemoveIndirectOutputDuplMgr(DXGGLOBAL *this, struct OUTPUTDUPL_MGR_INDIRECT ***a2)
{
  struct OUTPUTDUPL_MGR_INDIRECT **v3; // rcx
  struct OUTPUTDUPL_MGR_INDIRECT **v4; // rax
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (DXGGLOBAL *)((char *)this + 1552), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  v3 = *a2;
  if ( (*a2)[1] != (struct OUTPUTDUPL_MGR_INDIRECT *)a2 || (v4 = a2[1], *v4 != (struct OUTPUTDUPL_MGR_INDIRECT *)a2) )
    __fastfail(3u);
  *v4 = (struct OUTPUTDUPL_MGR_INDIRECT *)v3;
  v3[1] = (struct OUTPUTDUPL_MGR_INDIRECT *)v4;
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
  return 0LL;
}
