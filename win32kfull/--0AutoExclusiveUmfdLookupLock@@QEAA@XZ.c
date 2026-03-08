/*
 * XREFs of ??0AutoExclusiveUmfdLookupLock@@QEAA@XZ @ 0x1C011D930
 * Callers:
 *     FreeFileView @ 0x1C00B7620 (FreeFileView.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1C00BAEC0 (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 *     UmfdLoadFontFile @ 0x1C011D7E0 (UmfdLoadFontFile.c)
 *     UmfdUnloadFontFileInternal @ 0x1C0121FD8 (UmfdUnloadFontFileInternal.c)
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C01255E8 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C0125770 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 *     GreMakeFontDir @ 0x1C02D77CC (GreMakeFontDir.c)
 * Callees:
 *     <none>
 */

AutoExclusiveUmfdLookupLock *__fastcall AutoExclusiveUmfdLookupLock::AutoExclusiveUmfdLookupLock(
        AutoExclusiveUmfdLookupLock *this)
{
  __int64 v2; // rdx

  v2 = *(_QWORD *)(SGDGetSessionState(this) + 32);
  *(_QWORD *)this = v2 + 23464;
  if ( v2 != -23464 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(*(_QWORD *)this, 0LL);
  }
  return this;
}
