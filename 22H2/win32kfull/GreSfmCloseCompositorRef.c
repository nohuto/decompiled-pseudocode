/*
 * XREFs of GreSfmCloseCompositorRef @ 0x1C0079C9C
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C007ADC0 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C0079E0C (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C007A73C (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C007A88C (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C007C7E0 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C007E800 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0080520 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     IsDwmActive @ 0x1C00D4B60 (IsDwmActive.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z @ 0x1C00D5374 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C00D5418 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C013E508 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreSfmCloseCompositorRef(HDEV a1, HLSURF a2)
{
  unsigned int v3; // ebx
  SFMLOGICALSURFACE *v5; // rdi
  Gre::Base *v6; // rcx
  int v7; // eax
  struct Gre::Base::SESSION_GLOBALS *v9; // rax
  struct SFMLOGICALSURFACE *v10; // rcx
  _BYTE v12[32]; // [rsp+20h] [rbp-30h] BYREF
  SFMLOGICALSURFACE *v13; // [rsp+40h] [rbp-10h]
  int v14; // [rsp+48h] [rbp-8h]
  unsigned int v15; // [rsp+70h] [rbp+20h] BYREF
  __int64 v16; // [rsp+80h] [rbp+30h] BYREF

  v3 = 0;
  v15 = 0;
  ENTER_GRE_DWM_CRIT(a1, &v15);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( (unsigned int)IsDwmActive() )
    {
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v12);
      v13 = 0LL;
      v14 = 0;
      SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v12, a2);
      v5 = v13;
      if ( v13 )
      {
        PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v16, (SFMLOGICALSURFACE *)((char *)v13 + 256));
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
            if ( v16 )
            {
              GreReleasePushLockExclusive();
              KeLeaveCriticalRegion();
              v16 = 0LL;
            }
            v10 = v13;
            if ( v13 )
              _InterlockedDecrement((volatile signed __int32 *)v13 + 3);
            v13 = 0LL;
            if ( !(unsigned int)bhLSurfDestroyLogicalSurfaceObject(v10, 1) )
              v3 = -1073741823;
          }
        }
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v16);
      }
      else
      {
        v3 = -1073741816;
      }
      SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v12);
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
  LEAVE_GRE_DWM_CRIT(a1, v15);
  return v3;
}
