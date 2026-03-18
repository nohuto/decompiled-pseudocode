/*
 * XREFs of GreDwmGetRedirectionStyle @ 0x1C026D294
 * Callers:
 *     NtGdiHLSurfGetInformation @ 0x1C00221E0 (NtGdiHLSurfGetInformation.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001F4EC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00495DC (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C0086ADC (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0086CD0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00ED78C (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C015D33C (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreDwmGetRedirectionStyle(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r14d
  __int64 v6; // rdx
  SFMLOGICALSURFACE *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  _BYTE v11[8]; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v12[2]; // [rsp+38h] [rbp-28h] BYREF
  SFMLOGICALSURFACE *v13; // [rsp+58h] [rbp-8h]
  __int64 v14; // [rsp+80h] [rbp+20h] BYREF
  char v15; // [rsp+98h] [rbp+38h] BYREF

  v14 = a1;
  v5 = -1073741811;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v11, ghsemSprite);
  LODWORD(v14) = 0;
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v15, ghsemDwmState, 1);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v12);
    v7 = 0LL;
    v13 = 0LL;
    if ( a2 )
    {
      LOBYTE(v6) = 18;
      v8 = HmgShareLockCheck(a2, v6);
      v13 = (SFMLOGICALSURFACE *)v8;
      v7 = (SFMLOGICALSURFACE *)v8;
      if ( v8 )
      {
        v9 = v8 + 256;
        if ( v8 != -256 )
        {
          KeEnterCriticalRegion();
          GreAcquirePushLockShared(v9);
          v7 = v13;
        }
        SFMLOGICALSURFACE::GetRedirectionInfo(
          v7,
          (enum _HLSURF_REDIRECTIONSTYLE *)a3,
          (unsigned int *)(a3 + 4),
          (unsigned int *)(a3 + 8),
          (void **)(a3 + 24),
          (struct _LUID *)(a3 + 12));
        v5 = 0;
        if ( v9 )
        {
          GreReleasePushLockShared(v9);
          KeLeaveCriticalRegion();
          v7 = v13;
        }
      }
    }
    if ( v7 )
      DEC_SHARE_REF_CNT(v7);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v12);
  }
  else
  {
    v5 = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v15);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v14);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v11);
  return v5;
}
