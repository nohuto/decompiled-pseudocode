/*
 * XREFs of GreSfmCloseCompositorRef @ 0x1C0089AE4
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C0089CD0 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C0020C74 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C0020CA8 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0022038 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00228A4 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00228D8 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C0086D14 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C0089970 (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C0089C48 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015D684 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreSfmCloseCompositorRef(HDEV a1, HLSURF a2)
{
  unsigned int v3; // ebx
  SFMLOGICALSURFACE *v5; // rdi
  int v6; // eax
  __int64 *v8; // rcx
  _BYTE v10[32]; // [rsp+20h] [rbp-30h] BYREF
  SFMLOGICALSURFACE *v11; // [rsp+40h] [rbp-10h]
  int v12; // [rsp+48h] [rbp-8h]
  int v13; // [rsp+70h] [rbp+20h] BYREF
  __int64 v14; // [rsp+80h] [rbp+30h] BYREF

  v3 = 0;
  v13 = 0;
  ENTER_GRE_DWM_CRIT((__int64)a1, &v13);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( g_pDwmState )
    {
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v10);
      v11 = 0LL;
      v12 = 0;
      SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v10, a2);
      v5 = v11;
      if ( v11 )
      {
        PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v14, (SFMLOGICALSURFACE *)((char *)v11 + 256));
        v6 = *((_DWORD *)v5 + 61);
        if ( (v6 & 8) == 0 || (v6 & 0x10) != 0 )
        {
          v3 = -2147020579;
        }
        else if ( (*((_DWORD *)v5 + 62))-- == 1 )
        {
          SFMLOGICALSURFACE::StopSfmStateTracking(v5, a1, gpSfmState);
          if ( *((_WORD *)v5 + 6) == 1 && !*((_DWORD *)v5 + 2) )
          {
            if ( v14 )
            {
              GreReleasePushLockExclusive();
              KeLeaveCriticalRegion();
              v14 = 0LL;
            }
            v8 = (__int64 *)v11;
            if ( v11 )
              _InterlockedDecrement((volatile signed __int32 *)v11 + 3);
            v11 = 0LL;
            if ( !(unsigned int)bhLSurfDestroyLogicalSurfaceObject(v8, 1, 0) )
              v3 = -1073741823;
          }
        }
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v14);
      }
      else
      {
        v3 = -1073741816;
      }
      SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v10);
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
  LEAVE_GRE_DWM_CRIT((__int64)a1, v13);
  return v3;
}
