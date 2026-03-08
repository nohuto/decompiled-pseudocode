/*
 * XREFs of ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C001EF7C
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001E2BC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0022E20 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0049800 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 */

void __fastcall MULTIDEVLOCKOBJ::vLock(MULTIDEVLOCKOBJ *this)
{
  unsigned int v1; // esi
  unsigned int v3; // ebp
  __int64 v4; // rbx

  v1 = 0;
  if ( *((_QWORD *)this + 1) && (*(_DWORD *)this & 4) == 0 )
  {
    v3 = 0;
    if ( (*((_DWORD *)this + 1) & 0xFFFFFFFE) != 0 )
    {
      do
      {
        EngAcquireSemaphore(*(HSEMAPHORE *)(*((_QWORD *)this + 2) + 8LL * v3));
        EtwTraceGreLockAcquireSemaphoreExclusive(
          L"*(phsemArrayP + i)",
          *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * v3++),
          4LL);
      }
      while ( v3 < *((_DWORD *)this + 1) >> 1 );
    }
    v4 = *(_QWORD *)(SGDGetSessionState(this) + 24);
    EngAcquireSemaphore(*(HSEMAPHORE *)(v4 + 112));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", *(_QWORD *)(v4 + 112), 5LL);
    if ( (*((_DWORD *)this + 1) & 0xFFFFFFFE) != 0 )
    {
      do
      {
        EngAcquireSemaphore(*(HSEMAPHORE *)(*((_QWORD *)this + 1) + 8LL * v1));
        EtwTraceGreLockAcquireSemaphoreExclusive(
          L"*(phsemArrayD + i)",
          *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * v1++),
          11LL);
      }
      while ( v1 < *((_DWORD *)this + 1) >> 1 );
    }
    *(_DWORD *)this |= 4u;
  }
}
