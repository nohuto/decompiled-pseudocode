void __fastcall COREACCESS::~COREACCESS(COREACCESS *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    if ( *((_BYTE *)this + 24) )
    {
      *((_BYTE *)this + 24) = 0;
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v2 + 184) )
      {
        DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v2, *((char **)this + 4));
        v2 = *((_QWORD *)this + 2);
      }
      *((_QWORD *)this + 4) = 0LL;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v2 + 16), (struct DXGADAPTER *)v2);
  }
}
