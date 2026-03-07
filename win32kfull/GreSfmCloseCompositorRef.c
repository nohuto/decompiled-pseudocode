__int64 __fastcall GreSfmCloseCompositorRef(HDEV a1, HLSURF a2)
{
  unsigned int v3; // ebx
  SFMLOGICALSURFACE *v5; // rdi
  Gre::Base *v6; // rcx
  int v7; // eax
  struct Gre::Base::SESSION_GLOBALS *v9; // rax
  SFMLOGICALSURFACE *v11; // [rsp+20h] [rbp-10h] BYREF
  int v12; // [rsp+28h] [rbp-8h]
  unsigned int v13; // [rsp+50h] [rbp+20h] BYREF
  __int64 v14; // [rsp+60h] [rbp+30h] BYREF

  v3 = 0;
  v13 = 0;
  ENTER_GRE_DWM_CRIT(a1, &v13);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( (unsigned int)IsDwmActive() )
    {
      v11 = 0LL;
      v12 = 0;
      SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v11, a2);
      v5 = v11;
      if ( v11 )
      {
        PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v14, (SFMLOGICALSURFACE *)((char *)v11 + 256));
        v7 = *((_DWORD *)v5 + 61);
        if ( (v7 & 8) == 0 || (v7 & 0x10) != 0 )
        {
          v3 = -2147020579;
        }
        else if ( (*((_DWORD *)v5 + 62))-- == 1 )
        {
          v9 = Gre::Base::Globals(v6);
          SFMLOGICALSURFACE::StopSfmStateTracking(v5, a1, *((struct SfmState **)v9 + 809));
          if ( *((_WORD *)v5 + 6) == 1 && !*((_DWORD *)v5 + 2) )
          {
            if ( v14 )
            {
              GreReleasePushLockExclusive();
              KeLeaveCriticalRegion();
              v14 = 0LL;
            }
            _InterlockedDecrement((volatile signed __int32 *)v5 + 3);
            v11 = 0LL;
            if ( !(unsigned int)bhLSurfDestroyLogicalSurfaceObject(v5, 1) )
              v3 = -1073741823;
          }
        }
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v14);
      }
      else
      {
        v3 = -1073741816;
      }
      SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)&v11);
    }
    else
    {
      v3 = -1071775733;
    }
  }
  else
  {
    v3 = -1073741790;
  }
  LEAVE_GRE_DWM_CRIT(a1, v13);
  return v3;
}
