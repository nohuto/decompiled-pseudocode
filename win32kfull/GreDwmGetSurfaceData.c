__int64 __fastcall GreDwmGetSurfaceData(Gre::Base *a1, __int64 a2, struct tagDWMSURFACEDATA *a3)
{
  struct Gre::Base::SESSION_GLOBALS *v6; // rbp
  HSEMAPHORE v7; // rdx
  __int64 v8; // rdx
  SFMLOGICALSURFACE *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned int SoSurfaceData; // esi
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+50h] [rbp+8h] BYREF
  char v16; // [rsp+68h] [rbp+20h] BYREF

  v6 = Gre::Base::Globals(a1);
  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v6 + 10));
  EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDynamicModeChange", *((_QWORD *)v6 + 10));
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v14, *((HSEMAPHORE *)v6 + 14));
  v7 = (HSEMAPHORE)*((_QWORD *)v6 + 9);
  v15 = 0;
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v16, v7, 1);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( (unsigned int)IsDwmActive() )
    {
      if ( *(_DWORD *)(*((_QWORD *)a1 + 316) + 96LL) == 6 )
      {
        v9 = 0LL;
        if ( a2 && (LOBYTE(v8) = 18, v10 = HmgShareLockCheck(a2, v8), (v9 = (SFMLOGICALSURFACE *)v10) != 0LL) )
        {
          v11 = v10 + 256;
          if ( v10 != -256 )
          {
            KeEnterCriticalRegion();
            GreAcquirePushLockShared(v11);
          }
          SoSurfaceData = SFMLOGICALSURFACE::GetSoSurfaceData(v9, a3);
          if ( v11 )
          {
            GreReleasePushLockShared(v11);
            KeLeaveCriticalRegion();
          }
        }
        else
        {
          SoSurfaceData = -1073741816;
          if ( !v9 )
            goto LABEL_11;
        }
        DEC_SHARE_REF_CNT(v9);
      }
      else
      {
        SoSurfaceData = -1073741811;
      }
    }
    else
    {
      SoSurfaceData = -1071775733;
    }
  }
  else
  {
    SoSurfaceData = -1073741790;
  }
LABEL_11:
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
  GreReleaseSemaphoreInternal(*((_QWORD *)v6 + 10));
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v16);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v15);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v14);
  return SoSurfaceData;
}
