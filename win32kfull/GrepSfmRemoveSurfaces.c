struct Gre::Base::SESSION_GLOBALS *__fastcall GrepSfmRemoveSurfaces(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *result; // rax
  struct Gre::Base::SESSION_GLOBALS *v2; // rbp
  struct Gre::Base::SESSION_GLOBALS **v3; // rcx
  struct Gre::Base::SESSION_GLOBALS *v4; // rsi
  SFMLOGICALSURFACE *v5; // rdi
  HLSURF v6; // rdx
  struct SFMLOGICALSURFACE *v7; // rbx
  int v8; // eax
  struct SFMLOGICALSURFACE *v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]

  result = Gre::Base::Globals(a1);
  v2 = result;
  v3 = (struct Gre::Base::SESSION_GLOBALS **)(*((_QWORD *)result + 809) + 40LL);
  v4 = *v3;
  if ( *v3 != (struct Gre::Base::SESSION_GLOBALS *)v3 )
  {
    do
    {
      v9 = 0LL;
      v5 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v4 - 32);
      v6 = (HLSURF)*((_QWORD *)v4 - 4);
      v4 = *(struct Gre::Base::SESSION_GLOBALS **)v4;
      v10 = 0;
      SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v9, v6);
      v7 = v9;
      if ( v9 )
      {
        v8 = *((_DWORD *)v5 + 61);
        if ( (v8 & 0x10) != 0 )
          *((_DWORD *)v5 + 61) = v8 & 0xFFFFFFEF;
        else
          *((_DWORD *)v5 + 62) = 0;
        SFMLOGICALSURFACE::StopSfmStateTracking(v5, 0LL, *((struct SfmState **)v2 + 809));
        if ( v7 )
          _InterlockedDecrement((volatile signed __int32 *)v7 + 3);
        v9 = 0LL;
        bhLSurfDestroyLogicalSurfaceObject((HLSURF *)v7, 1);
      }
      SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF(&v9);
      result = (struct Gre::Base::SESSION_GLOBALS *)(*((_QWORD *)v2 + 809) + 40LL);
    }
    while ( v4 != result );
  }
  return result;
}
