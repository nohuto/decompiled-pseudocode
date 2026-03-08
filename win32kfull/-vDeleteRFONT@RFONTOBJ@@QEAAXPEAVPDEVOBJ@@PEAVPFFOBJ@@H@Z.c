/*
 * XREFs of ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0123828
 * Callers:
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C01147B0 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     bUnloadEudcFont @ 0x1C01162DC (bUnloadEudcFont.c)
 *     RFONTOBJ_vDeleteRFONTWrap @ 0x1C0123E00 (RFONTOBJ_vDeleteRFONTWrap.c)
 *     vKillRFONTList @ 0x1C026E230 (vKillRFONTList.c)
 *     ?vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z @ 0x1C026E3D0 (-vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z.c)
 *     ?RestartInactiveHelper@@YAXPEAVRFONT@@@Z @ 0x1C02B89F0 (-RestartInactiveHelper@@YAXPEAVRFONT@@@Z.c)
 *     ?vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z @ 0x1C02B9C40 (-vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C02B9D14 (vRemoveAllInactiveRFONTs.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C0122194 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0123A3C (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C0123AD4 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0123AF4 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x1C0123B1C (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C0123B7C (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0123B9C (--$FreeIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0123BD8 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C0123C28 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C0123CA0 (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 *     ?vDeleteCache@RFONTOBJ@@QEAAXXZ @ 0x1C0123D3C (-vDeleteCache@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vDeleteRFONT(struct _FONTOBJ **this, struct PDEVOBJ *a2, struct PFFOBJ *a3, int a4)
{
  struct _FONTOBJ *v4; // r10
  __int64 iTTUniq_high; // rax
  struct _FONTOBJ *v10; // rdx
  Gre::Base *v11; // rcx
  bool v12; // si
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // eax
  PVOID pvConsumer; // rcx
  __int64 *pvProducer; // [rsp+50h] [rbp-10h] BYREF
  struct RFONT *sizLogResPpi; // [rsp+90h] [rbp+30h] BYREF
  __int64 v19; // [rsp+98h] [rbp+38h] BYREF
  char v20; // [rsp+A0h] [rbp+40h] BYREF

  v4 = *this;
  pvProducer = (__int64 *)(*this)[1].pvProducer;
  iTTUniq_high = SHIDWORD(v4[10].iTTUniq);
  if ( (_DWORD)iTTUniq_high )
    DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 49LL, iTTUniq_high, 0LL, 0LL, 0LL, 0LL, 0);
  v10 = *this;
  sizLogResPpi = (struct RFONT *)(*this)[1].sizLogResPpi;
  if ( *((_QWORD *)sizLogResPpi + 376) && a4 )
    PDEVOBJ::DestroyFont((PDEVOBJ *)&sizLogResPpi, v10);
  v11 = *(Gre::Base **)&(*this)[1].ulStyleSize;
  if ( v11 )
  {
    v19 = *(_QWORD *)&(*this)[1].ulStyleSize;
    v12 = (*((_DWORD *)v11 + 10) & 1) != 0 && *((_DWORD *)v11 + 2);
    NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
      (NEEDDYNAMICMODECHANGESHARELOCK *)&sizLogResPpi,
      *((_BYTE *)v11 + 40) & 1);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v20, (struct PDEVOBJ *)&v19);
    if ( v12 )
    {
      GreAcquireSemaphore(*(_QWORD *)(v19 + 48));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"pdoCon.hsemDevLock()", *(_QWORD *)(v19 + 48), 11LL);
    }
    if ( *(_QWORD *)(v19 + 3008) && a4 )
      PDEVOBJ::DestroyFont((PDEVOBJ *)&v19, *this);
    if ( v12 )
    {
      EtwTraceGreLockReleaseSemaphore(L"pdoCon.hsemDevLock()");
      GreReleaseSemaphoreInternal(*(_QWORD *)(v19 + 48));
    }
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v20);
    NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&sizLogResPpi);
  }
  v19 = *((_QWORD *)Gre::Base::Globals(v11) + 3);
  GreAcquireSemaphore(v19);
  if ( a2 )
  {
    sizLogResPpi = PDEVOBJ::prfntInactive(a2);
    RFONTOBJ::vRemove(this, &sizLogResPpi, 1LL);
    PDEVOBJ::prfntInactive(a2, sizLogResPpi);
    v13 = PDEVOBJ::cInactive(a2);
    v14 = *(_QWORD *)a2;
    v15 = v13 - 1;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 0x800000) != 0 )
      *(_DWORD *)(*(_QWORD *)(v14 + 3496) + 1528LL) = v15;
    else
      *(_DWORD *)(v14 + 1528) = v15;
  }
  if ( a3 )
  {
    sizLogResPpi = *(struct RFONT **)(*(_QWORD *)a3 + 72LL);
    RFONTOBJ::vRemove(this, &sizLogResPpi, 0LL);
    *(_QWORD *)(*(_QWORD *)a3 + 72LL) = sizLogResPpi;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v19);
  PFEOBJ::vFreepfdg(&pvProducer);
  if ( a3 )
    PFFOBJ::vDeleteRFONTRef(a3);
  RFONTOBJ::vDeleteCache((RFONTOBJ *)this);
  pvConsumer = (*this)[10].pvConsumer;
  if ( pvConsumer )
    Win32FreePool(pvConsumer);
  if ( (*this)[13].iTTUniq )
    ((void (*)(void))GreDeleteSemaphore)();
  GreDeleteSemaphore((*this)[7].pvProducer);
  FreeIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>(*this);
  *this = 0LL;
}
