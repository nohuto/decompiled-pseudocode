/*
 * XREFs of ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0143CA4
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0012620 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C000D904 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00218E0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C002AE08 (PALLOCMEM2.c)
 *     HmgShareLockCheck @ 0x1C002DBE0 (HmgShareLockCheck.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0038C70 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C0038DC0 (EngAcquireSemaphore.c)
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0039040 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C0066F20 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0079AF0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C007DB70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ??1SPRITELOCK@@QEAA@XZ @ 0x1C0082D50 (--1SPRITELOCK@@QEAA@XZ.c)
 *     vEnableSynchronize @ 0x1C00B3D38 (vEnableSynchronize.c)
 *     bSpEnableSprites @ 0x1C00B54EC (bSpEnableSprites.c)
 *     ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00CA7F8 (--0-$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1C00CA83C (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C013D1F0 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C013E10C (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 */

struct PDEV *__fastcall DrvCreateCloneHDEV(struct PDEV *a1)
{
  __int64 v2; // rax
  struct PDEV *v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct PDEV *v6; // rbx
  _QWORD *v7; // rdi
  int v8; // esi
  int v9; // eax
  unsigned int DeviceRoutine; // ecx
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // r8d
  __int64 v20[6]; // [rsp+40h] [rbp-30h] BYREF
  struct PDEV *v21; // [rsp+A0h] [rbp+30h] BYREF
  struct PDEV *v22; // [rsp+B0h] [rbp+40h] BYREF
  char v23; // [rsp+B8h] [rbp+48h] BYREF

  v2 = WdLogNewEntry5_WdEvent(a1);
  *(_QWORD *)(v2 + 24) = a1;
  *(_QWORD *)(v2 + 32) = 1LL;
  WdLogEvent5_WdEvent(v2);
  v22 = a1;
  v3 = 0LL;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v23, (struct PDEVOBJ *)&v22);
  PDEVOBJ::PDEVOBJ((PDEVOBJ *)&v21, (char *)a1);
  v6 = v21;
  if ( v21 )
  {
    v7 = PALLOCMEM2(0x868uLL, 1886221383LL, 1);
    if ( v7
      && ((v8 = -1073741637, !qword_1C02563B0) ? (v9 = -1073741637) : (v9 = qword_1C02563B0()),
          v9 >= 0 && (unsigned int)bSpEnableSprites()) )
    {
      if ( qword_1C02563C0 )
        v8 = qword_1C02563C0();
      if ( v8 >= 0 )
        vEnableSynchronize();
      DeviceRoutine = (unsigned int)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
      v7[122] = v7 + 68;
      *((_DWORD *)v7 + 182) = 0;
      *(_DWORD *)(v7[122] + 176LL) = 0xFFFFFF;
      v11 = v7[122];
      *((_DWORD *)v7 + 30) = 0;
      *(_QWORD *)(v11 + 248) = 0LL;
      v12 = HmgShareLockCheck(DeviceRoutine, 16);
      HmgShareLockResult<BRUSH>::HmgShareLockResult<BRUSH>((__int64)v20, v12);
      *((_QWORD *)v6 + 197) = 0LL;
      *((_QWORD *)v6 + 194) = 0LL;
      *((_DWORD *)v6 + 390) = 0;
      EBRUSHOBJ::vInitBrush(
        (int *)v6 + 386,
        (__int64)v7,
        v20[0],
        (__int64)ppalDefault,
        *(_QWORD *)(*((_QWORD *)v6 + 319) + 128LL),
        *((_QWORD *)v6 + 319),
        1u);
      HmgShareLockResult<BRUSH>::~HmgShareLockResult<BRUSH>((__int64)v20);
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
      --*((_DWORD *)a1 + 3);
      PDEVOBJ::vUnreferencePdev(&v22, 0, v13);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v14);
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
      PDEVOBJ::bDisabled((PDEVOBJ *)&v21, *((_DWORD *)a1 + 10) & 0x400);
      v3 = v6;
    }
    else
    {
      PDEVOBJ::vClearSurface((PDEVOBJ *)&v21);
      PDEVOBJ::vUnreferencePdev(&v21, 0, v15);
    }
    if ( v7 )
      Win32FreePool((__int64)v7);
  }
  v16 = WdLogNewEntry5_WdTrace(v5, v4);
  *(_QWORD *)(v16 + 24) = v3;
  WdLogEvent5_WdTrace(v16);
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v23, v17, v18);
  return v3;
}
