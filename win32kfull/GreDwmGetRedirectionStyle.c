__int64 __fastcall GreDwmGetRedirectionStyle(Gre::Base *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebp
  struct Gre::Base::SESSION_GLOBALS *v6; // r14
  HSEMAPHORE v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  SFMLOGICALSURFACE *v10; // rbx
  __int64 v11; // rdi
  _BYTE v13[40]; // [rsp+30h] [rbp-28h] BYREF
  Gre::Base *v14; // [rsp+60h] [rbp+8h] BYREF
  char v15; // [rsp+78h] [rbp+20h] BYREF

  v14 = a1;
  v5 = -1073741811;
  v6 = Gre::Base::Globals(a1);
  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v6 + 10));
  EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDynamicModeChange", *((_QWORD *)v6 + 10));
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v13, *((HSEMAPHORE *)v6 + 14));
  v7 = (HSEMAPHORE)*((_QWORD *)v6 + 9);
  LODWORD(v14) = 0;
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v15, v7, 1);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( a2 )
    {
      LOBYTE(v8) = 18;
      v9 = HmgShareLockCheck(a2, v8);
      v10 = (SFMLOGICALSURFACE *)v9;
      if ( v9 )
      {
        v11 = v9 + 256;
        if ( v9 != -256 )
        {
          KeEnterCriticalRegion();
          GreAcquirePushLockShared(v11);
        }
        SFMLOGICALSURFACE::GetRedirectionInfo(
          v10,
          (enum _HLSURF_REDIRECTIONSTYLE *)a3,
          (unsigned int *)(a3 + 4),
          (unsigned int *)(a3 + 8),
          (void **)(a3 + 24),
          (struct _LUID *)(a3 + 12));
        v5 = 0;
        if ( v11 )
        {
          GreReleasePushLockShared(v11);
          KeLeaveCriticalRegion();
        }
        DEC_SHARE_REF_CNT(v10);
      }
    }
  }
  else
  {
    v5 = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
  GreReleaseSemaphoreInternal(*((_QWORD *)v6 + 10));
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v15);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v14);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v13);
  return v5;
}
