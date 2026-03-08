/*
 * XREFs of GreGetWindowResizeDCompositionSynchronizationObject @ 0x1C00DFF20
 * Callers:
 *     ?GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1C00DFDF0 (-GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00296D4 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     IsDwmActive @ 0x1C002CF30 (IsDwmActive.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetWindowResizeDCompositionSynchronizationObject(Gre::Base *a1, _QWORD *a2)
{
  unsigned int v4; // esi
  struct Gre::Base::SESSION_GLOBALS *v5; // rdi
  Gre::Base *v6; // rcx
  Gre::Base *v7; // rcx
  __int64 v8; // rbx
  void *v9; // rcx
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  v5 = Gre::Base::Globals(a1);
  v12 = *((_QWORD *)v5 + 15);
  GreAcquireSemaphore(v12);
  if ( IsDwmActive(v6) )
  {
    GreAcquireSemaphore(*((_QWORD *)v5 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v5 + 9), 7LL);
    if ( IsDwmActive(v7) )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v11, (HWND)a1);
      v8 = v11;
      if ( v11 )
      {
        v9 = *(void **)(v11 + 96);
        if ( v9 )
          ObfReferenceObject(v9);
        v4 = 1;
        *a2 = *(_QWORD *)(v8 + 96);
        if ( v8 )
          _InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v5 + 9));
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v12);
  return v4;
}
