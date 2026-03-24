/*
 * XREFs of ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x180032A0C
 * Callers:
 *     ?ProcessUpdate@CCachedVisualImage@@IEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x18003287C (-ProcessUpdate@CCachedVisualImage@@IEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE@@@Z.c)
 *     ?SetForDCompSnapshot@CCachedVisualImage@@IEAAJPEAVCVisual@@AEBUD2D_SIZE_U@@_N@Z @ 0x1801AB7D4 (-SetForDCompSnapshot@CCachedVisualImage@@IEAAJPEAVCVisual@@AEBUD2D_SIZE_U@@_N@Z.c)
 *     ?CreateCVI@CVisualSurface@@AEAAJPEAPEAVCCachedVisualImage@@@Z @ 0x1801F229C (-CreateCVI@CVisualSurface@@AEAAJPEAPEAVCCachedVisualImage@@@Z.c)
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180033940 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x18006EEF8 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCachedVisualImage::ChoosePixelFormat(CCachedVisualImage *this)
{
  enum DXGI_FORMAT v2; // ecx
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  struct IMonitorTarget *v4; // rcx
  BOOL v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  char v12[16]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_DWORD *)this + 37);
  if ( v2 == DXGI_FORMAT_UNKNOWN )
  {
    PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2)
                                                                                                  + 88LL));
    if ( PrimaryMonitorTarget )
    {
      v4 = (struct IMonitorTarget *)((char *)PrimaryMonitorTarget
                                   + *(int *)(*((_QWORD *)PrimaryMonitorTarget + 1) + 8LL)
                                   + 8);
      v2 = *(_DWORD *)(**(__int64 (__fastcall ***)(struct IMonitorTarget *, char *))v4)(v4, v12);
    }
    else
    {
      v2 = DXGI_FORMAT_B8G8R8A8_UNORM;
    }
    *((_DWORD *)this + 37) = v2;
  }
  v5 = (unsigned int)HasAlphaChannel(v2) && !*((_BYTE *)this + 1803);
  *((_DWORD *)this + 38) = v5;
  if ( !*((_DWORD *)this + 39) )
  {
    v6 = *((_DWORD *)this + 37);
    if ( v6 <= 61 )
    {
      if ( v6 == 61 )
        goto LABEL_13;
      v7 = v6 - 2;
      if ( !v7 || (v8 = v7 - 8) == 0 )
      {
        *((_DWORD *)this + 39) = 2;
        return;
      }
      v9 = v8 - 1;
      if ( !v9 )
        goto LABEL_13;
      v10 = v9 - 13;
      if ( !v10 )
        goto LABEL_13;
      v11 = v10 - 4;
      if ( !v11 || v11 == 21 )
        goto LABEL_13;
    }
    else if ( v6 == 65 || v6 > 86 && (v6 <= 88 || v6 == 91 || v6 == 103 || (unsigned int)(v6 - 106) <= 1) )
    {
LABEL_13:
      *((_DWORD *)this + 39) = 1;
    }
  }
}
