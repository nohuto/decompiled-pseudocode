/*
 * XREFs of GreGetWindowResizeDCompositionSynchronizationObject @ 0x1C00C8130
 * Callers:
 *     ?GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1C00C7F30 (-GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00C89F8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     IsDwmActive @ 0x1C00D4B60 (IsDwmActive.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetWindowResizeDCompositionSynchronizationObject(Gre::Base *a1, _QWORD *a2)
{
  unsigned int v4; // edi
  struct Gre::Base::SESSION_GLOBALS *v5; // rbx
  __int64 v6; // rdx
  void *v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  _BYTE v11[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v5 = Gre::Base::Globals(a1);
  v13 = *((_QWORD *)v5 + 15);
  GreAcquireSemaphore(v13);
  if ( (unsigned int)IsDwmActive() )
  {
    GreAcquireSemaphore(*((_QWORD *)v5 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v5 + 9), 7LL);
    if ( (unsigned int)IsDwmActive() )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v11, (HWND)a1);
      v6 = v12;
      if ( v12 )
      {
        v7 = *(void **)(v12 + 96);
        v8 = v12;
        if ( v7 )
        {
          ObfReferenceObject(v7);
          v6 = v12;
        }
        v9 = *(_QWORD *)(v8 + 96);
        v4 = 1;
        *a2 = v9;
        if ( v6 )
          _InterlockedDecrement((volatile signed __int32 *)(v6 + 12));
      }
      v12 = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v11);
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v5 + 9));
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
  return v4;
}
