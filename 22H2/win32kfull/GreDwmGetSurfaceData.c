/*
 * XREFs of GreDwmGetSurfaceData @ 0x1C007AA30
 * Callers:
 *     NtGdiHLSurfGetInformation @ 0x1C007E160 (NtGdiHLSurfGetInformation.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001B818 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C007AC00 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C007AC44 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ?GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z @ 0x1C007AC9C (-GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z.c)
 *     IsDwmActive @ 0x1C00D4B60 (IsDwmActive.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00D544C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C013DFC4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreDwmGetSurfaceData(Gre::Base *a1, __int64 a2, struct tagDWMSURFACEDATA *a3)
{
  struct Gre::Base::SESSION_GLOBALS *v6; // rsi
  HSEMAPHORE v7; // rdx
  __int64 v8; // rdx
  SFMLOGICALSURFACE *v9; // rax
  char *v10; // rbx
  unsigned int SoSurfaceData; // edi
  _BYTE v13[8]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v14[32]; // [rsp+28h] [rbp-28h] BYREF
  SFMLOGICALSURFACE *v15; // [rsp+48h] [rbp-8h]
  int v16; // [rsp+70h] [rbp+20h] BYREF
  char v17; // [rsp+88h] [rbp+38h] BYREF

  v6 = Gre::Base::Globals(a1);
  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v6 + 10));
  EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDynamicModeChange", *((_QWORD *)v6 + 10));
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v13, *((HSEMAPHORE *)v6 + 14));
  v7 = (HSEMAPHORE)*((_QWORD *)v6 + 9);
  v16 = 0;
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v17, v7, 1);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( (unsigned int)IsDwmActive() )
    {
      if ( *(_DWORD *)(*((_QWORD *)a1 + 316) + 96LL) == 6 )
      {
        UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v14);
        v9 = 0LL;
        v15 = 0LL;
        if ( a2 && (LOBYTE(v8) = 18, v9 = (SFMLOGICALSURFACE *)HmgShareLockCheck(a2, v8), (v15 = v9) != 0LL) )
        {
          v10 = (char *)v9 + 256;
          if ( v9 != (SFMLOGICALSURFACE *)-256LL )
          {
            KeEnterCriticalRegion();
            GreAcquirePushLockShared(v10);
            v9 = v15;
          }
          SoSurfaceData = SFMLOGICALSURFACE::GetSoSurfaceData(v9, a3);
          if ( v10 )
          {
            GreReleasePushLockShared(v10);
            KeLeaveCriticalRegion();
          }
          v9 = v15;
        }
        else
        {
          SoSurfaceData = -1073741816;
        }
        if ( v9 )
          DEC_SHARE_REF_CNT(v9);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v14);
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
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
  GreReleaseSemaphoreInternal(*((_QWORD *)v6 + 10));
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v17);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v16);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v13);
  return SoSurfaceData;
}
