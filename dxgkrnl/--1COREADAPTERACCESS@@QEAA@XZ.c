void __fastcall COREADAPTERACCESS::~COREADAPTERACCESS(COREADAPTERACCESS *this)
{
  COREACCESS *v2; // rbx
  struct _KTHREAD **v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( *((_BYTE *)this + 1) )
  {
    if ( *((_QWORD *)this + 3) != *((_QWORD *)this + 11) )
      COREACCESS::Release((COREADAPTERACCESS *)((char *)this + 8));
    v2 = (COREADAPTERACCESS *)((char *)this + 72);
    if ( !*((_BYTE *)this + 96) )
      WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)this + 72, 0LL, 0LL);
    v3 = (struct _KTHREAD **)*((_QWORD *)this + 11);
    *((_BYTE *)this + 96) = 0;
    if ( KeGetCurrentThread() != v3[23] )
      DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v3, *((char **)this + 13));
    *((_QWORD *)this + 13) = 0LL;
    *((_BYTE *)this + 1) = 0;
  }
  else
  {
    v2 = (COREADAPTERACCESS *)((char *)this + 72);
  }
  if ( *((_QWORD *)v2 + 2) )
  {
    if ( *((_BYTE *)v2 + 24) )
      COREACCESS::Release(v2);
    v4 = *((_QWORD *)v2 + 2);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v4 + 16), (struct DXGADAPTER *)v4);
  }
  if ( *((_QWORD *)this + 3) )
  {
    if ( *((_BYTE *)this + 32) )
      COREACCESS::Release((COREADAPTERACCESS *)((char *)this + 8));
    v5 = *((_QWORD *)this + 3);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v5 + 16), (struct DXGADAPTER *)v5);
  }
}
