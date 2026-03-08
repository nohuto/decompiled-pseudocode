/*
 * XREFs of ?DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18003E970
 * Callers:
 *     ?DetachFromChannel@CCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801E9C60 (-DetachFromChannel@CCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CInteractionTracker@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18022EC60 (-DetachFromChannel@CInteractionTracker@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CHolographicComposition@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802A40E0 (-DetachFromChannel@CHolographicComposition@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CHolographicDisplay@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802A4430 (-DetachFromChannel@CHolographicDisplay@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?RemoveResourceDebugInfo@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z @ 0x18003EA18 (-RemoveResourceDebugInfo@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CNotificationResource::DetachFromChannel(CNotificationResource *this, struct CChannelContext *a2)
{
  __int64 v2; // r11
  _DWORD *v5; // rdi
  __int64 v6; // rcx

  v2 = *((_QWORD *)this + 6);
  if ( (struct CChannelContext *)v2 == a2 )
  {
    if ( v2 && *(_DWORD *)(v2 + 76) )
    {
      v5 = (_DWORD *)((char *)this + 64);
      if ( *((_DWORD *)this + 16) )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1240LL) + 24LL);
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v6 + 80LL))(
          v6,
          *(unsigned int *)(v2 + 76),
          (unsigned int)*v5,
          0LL);
        v2 = *((_QWORD *)this + 6);
      }
    }
    else
    {
      v5 = (_DWORD *)((char *)this + 64);
    }
    *v5 = 0;
  }
  if ( a2 == (struct CChannelContext *)v2 )
  {
    if ( (*((_BYTE *)this + 32) & 0x10) != 0 )
      CAnimationLoggingManager::RemoveResourceDebugInfo(*(CAnimationLoggingManager **)(v2 + 64), this);
    *((_QWORD *)this + 6) = 0LL;
  }
}
