/*
 * XREFs of ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C000AD70
 * Callers:
 *     RFONTOBJ_vDeleteRFONTWrap @ 0x1C000A7E0 (RFONTOBJ_vDeleteRFONTWrap.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C000A940 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     bUnloadEudcFont @ 0x1C00119A4 (bUnloadEudcFont.c)
 *     vKillRFONTList @ 0x1C027108C (vKillRFONTList.c)
 *     ?vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z @ 0x1C0271130 (-vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z.c)
 *     ?RestartInactiveHelper@@YAXPEAVRFONT@@@Z @ 0x1C02A62A0 (-RestartInactiveHelper@@YAXPEAVRFONT@@@Z.c)
 *     ?vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z @ 0x1C02A7330 (-vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C02A7404 (vRemoveAllInactiveRFONTs.c)
 * Callees:
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C000AD50 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C000B034 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C000B0DC (--$FreeIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?vDeleteCache@RFONTOBJ@@QEAAXXZ @ 0x1C000B10C (-vDeleteCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C000B1C8 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C000B238 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x1C000B438 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z.c)
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C000B48C (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C000B524 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C000B838 (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0027858 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 */

void __fastcall RFONTOBJ::vDeleteRFONT(struct _FONTOBJ **this, struct PDEVOBJ *a2, struct PFFOBJ *a3, int a4)
{
  struct _FONTOBJ *v6; // rdx
  __int64 iTTUniq_high; // rax
  struct _FONTOBJ *v10; // rcx
  __int64 v11; // rax
  BOOL v12; // ecx
  bool v13; // si
  __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // eax
  struct _FONTOBJ *v18; // rcx
  PVOID v19[2]; // [rsp+50h] [rbp-10h] BYREF
  struct RFONT *sizLogResPpi; // [rsp+90h] [rbp+30h] BYREF
  __int64 v21; // [rsp+98h] [rbp+38h] BYREF
  char v22; // [rsp+A0h] [rbp+40h] BYREF

  v6 = *this;
  v19[0] = (*this)[1].pvProducer;
  iTTUniq_high = SHIDWORD(v6[10].iTTUniq);
  if ( (_DWORD)iTTUniq_high )
  {
    DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 49LL, iTTUniq_high, 0LL, 0LL, 0LL, 0LL, 0);
    v6 = *this;
  }
  v10 = v6;
  sizLogResPpi = (struct RFONT *)v6[1].sizLogResPpi;
  if ( *((_QWORD *)sizLogResPpi + 376) && a4 )
  {
    PDEVOBJ::DestroyFont((PDEVOBJ *)&sizLogResPpi, v6);
    v10 = *this;
  }
  v11 = *(_QWORD *)&v10[1].ulStyleSize;
  if ( v11 )
  {
    v21 = *(_QWORD *)&v10[1].ulStyleSize;
    v12 = *(_DWORD *)(v11 + 40) & 1;
    v13 = v12 && *(_DWORD *)(v11 + 8);
    NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&sizLogResPpi, v12);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v22, (struct PDEVOBJ *)&v21);
    if ( v13 )
    {
      GreAcquireSemaphore(*(_QWORD *)(v21 + 48));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"pdoCon.hsemDevLock()", *(_QWORD *)(v21 + 48), 11LL);
    }
    v14 = v21;
    if ( *(_QWORD *)(v21 + 3008) && a4 )
    {
      PDEVOBJ::DestroyFont((PDEVOBJ *)&v21, *this);
      v14 = v21;
    }
    if ( v13 )
    {
      EtwTraceGreLockReleaseSemaphore(L"pdoCon.hsemDevLock()", *(_QWORD *)(v14 + 48));
      GreReleaseSemaphoreInternal(*(_QWORD *)(v21 + 48));
    }
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v22);
    NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&sizLogResPpi);
  }
  v21 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  if ( a2 )
  {
    sizLogResPpi = PDEVOBJ::prfntInactive(a2);
    RFONTOBJ::vRemove(this, &sizLogResPpi, 1LL);
    PDEVOBJ::prfntInactive(a2, sizLogResPpi);
    v15 = PDEVOBJ::cInactive(a2);
    v16 = *(_QWORD *)a2;
    v17 = v15 - 1;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 0x800000) != 0 )
      *(_DWORD *)(*(_QWORD *)(v16 + 3496) + 1528LL) = v17;
    else
      *(_DWORD *)(v16 + 1528) = v17;
  }
  if ( a3 )
  {
    sizLogResPpi = *(struct RFONT **)(*(_QWORD *)a3 + 72LL);
    RFONTOBJ::vRemove(this, &sizLogResPpi, 0LL);
    *(_QWORD *)(*(_QWORD *)a3 + 72LL) = sizLogResPpi;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v21);
  PFEOBJ::vFreepfdg((PFEOBJ *)v19);
  if ( a3 )
    PFFOBJ::vDeleteRFONTRef(a3);
  RFONTOBJ::vDeleteCache((RFONTOBJ *)this);
  v18 = *this;
  if ( (*this)[10].pvConsumer )
  {
    Win32FreePool((*this)[10].pvConsumer);
    v18 = *this;
  }
  if ( v18[13].iTTUniq )
  {
    GreDeleteSemaphore(v18[13].iTTUniq);
    v18 = *this;
  }
  GreDeleteSemaphore(v18[7].pvProducer);
  FreeIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>(*this);
  *this = 0LL;
}
