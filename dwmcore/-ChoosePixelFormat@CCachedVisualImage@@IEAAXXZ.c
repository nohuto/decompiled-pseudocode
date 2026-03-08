/*
 * XREFs of ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x1800A8D04
 * Callers:
 *     ?Initialize@CBackdropVisualImage@@EEAAJXZ @ 0x1800A5F10 (-Initialize@CBackdropVisualImage@@EEAAJXZ.c)
 *     ?ProcessUpdate@CCachedVisualImage@@IEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x1800A8B1C (-ProcessUpdate@CCachedVisualImage@@IEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE@@@Z.c)
 *     ?CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B06AC (-CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?SetForDCompSnapshot@CCachedVisualImage@@IEAAJPEAVCVisual@@AEBUD2D_SIZE_U@@_N@Z @ 0x180214524 (-SetForDCompSnapshot@CCachedVisualImage@@IEAAJPEAVCVisual@@AEBUD2D_SIZE_U@@_N@Z.c)
 *     ?SetForVisualBitmap@CCachedVisualImage@@IEAAX_N@Z @ 0x18021461C (-SetForVisualBitmap@CCachedVisualImage@@IEAAX_N@Z.c)
 *     ?Initialize@CDebugVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x180215110 (-Initialize@CDebugVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x1800525D0 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x1800A8DE4 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CCachedVisualImage::ChoosePixelFormat(CCachedVisualImage *this)
{
  enum DXGI_FORMAT v2; // ecx
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  struct IMonitorTarget *v4; // rcx
  enum DXGI_FORMAT *v5; // rax
  int v6; // edx
  BOOL v7; // eax
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  char v19[16]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_DWORD *)this + 39);
  if ( v2 == DXGI_FORMAT_UNKNOWN )
  {
    PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2)
                                                                                                  + 216LL));
    if ( PrimaryMonitorTarget )
    {
      v4 = (struct IMonitorTarget *)((char *)PrimaryMonitorTarget
                                   + *(int *)(*((_QWORD *)PrimaryMonitorTarget + 1) + 8LL)
                                   + 8);
      v5 = (enum DXGI_FORMAT *)(**(__int64 (__fastcall ***)(struct IMonitorTarget *, char *))v4)(v4, v19);
      v2 = *v5;
      *((enum DXGI_FORMAT *)this + 39) = *v5;
    }
    else
    {
      *((_DWORD *)this + 39) = 87;
      v2 = DXGI_FORMAT_B8G8R8A8_UNORM;
    }
  }
  v7 = (unsigned int)HasAlphaChannel(v2) && !*((_BYTE *)this + 1779);
  *((_DWORD *)this + 40) = v7;
  if ( !*((_DWORD *)this + 41) )
  {
    if ( v6 <= 65 )
    {
      if ( v6 == 65 )
        goto LABEL_10;
      v9 = v6 - 2;
      if ( !v9 || (v10 = v9 - 8) == 0 )
      {
        *((_DWORD *)this + 41) = 2;
        return;
      }
      v11 = v10 - 1;
      if ( !v11 )
        goto LABEL_10;
      v12 = v11 - 13;
      if ( !v12 )
        goto LABEL_10;
      v13 = v12 - 4;
      if ( !v13 )
        goto LABEL_10;
      v14 = v13 - 21;
      if ( !v14 || v14 == 12 )
        goto LABEL_10;
    }
    else
    {
      v8 = v6 - 87;
      if ( !v8
        || (v15 = v8 - 1) == 0
        || (v16 = v15 - 3) == 0
        || (v17 = v16 - 12) == 0
        || (v18 = v17 - 1) == 0
        || (unsigned int)(v18 - 2) <= 1 )
      {
LABEL_10:
        *((_DWORD *)this + 41) = 1;
      }
    }
  }
}
