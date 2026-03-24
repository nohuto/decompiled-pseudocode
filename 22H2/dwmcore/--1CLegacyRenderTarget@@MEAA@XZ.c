/*
 * XREFs of ??1CLegacyRenderTarget@@MEAA@XZ @ 0x180025C94
 * Callers:
 *     ??_GCLegacyRenderTarget@@MEAAPEAXI@Z @ 0x180024490 (--_GCLegacyRenderTarget@@MEAAPEAXI@Z.c)
 *     ??_ECLegacyStereoRenderTarget@@UEAAPEAXI@Z @ 0x18016CFF0 (--_ECLegacyStereoRenderTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     PubSebUnregisterRpc @ 0x1800244D4 (PubSebUnregisterRpc.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024CA8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1COverlayContext@@QEAA@XZ @ 0x18002E684 (--1COverlayContext@@QEAA@XZ.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x180060070 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     McTemplateU0zqq_EventWriteTransfer @ 0x180185114 (McTemplateU0zqq_EventWriteTransfer.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x180216990 (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 */

void __fastcall CLegacyRenderTarget::~CLegacyRenderTarget(CLegacyRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  struct _SEB_RPC_PUBLISH_DATA *v5; // rcx
  struct _SEB_RPC_PUBLISH_DATA *v6; // rcx
  char *v7; // rcx
  CRenderTargetBitmap *v8; // rcx
  CRenderTargetBitmap *v9; // rcx
  char updated; // al
  int v11; // edx
  int v12; // ecx
  int v13; // r8d

  *(_QWORD *)this = &CLegacyRenderTarget::`vftable'{for `CRenderTarget'};
  *((_QWORD *)this + 8) = &CLegacyRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 17) = &CLegacyRenderTarget::`vftable'{for `IOverlayMonitorTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 4LL) + 72) = &CLegacyRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 8LL) + 72) = &CLegacyRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 12LL) + 72) = &CLegacyRenderTarget::`vftable'{for `IRenderTarget'};
  v2 = *(int *)(*((_QWORD *)this + 9) + 4LL);
  *(_DWORD *)((char *)this + v2 + 68) = v2 - 18552;
  v3 = *(int *)(*((_QWORD *)this + 9) + 8LL);
  *(_DWORD *)((char *)this + v3 + 68) = v3 - 18568;
  v4 = *(int *)(*((_QWORD *)this + 9) + 12LL);
  *(_DWORD *)((char *)this + v4 + 68) = v4 - 18592;
  v5 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 2325);
  if ( v5 )
  {
    if ( *((_BYTE *)this + 18593) )
    {
      if ( *((_BYTE *)this + 18594) && *((_QWORD *)this + 2326) )
      {
        PubSebiUpdateLevelEventRpc(*((struct _SEB_RPC_PUBLISH_DATA **)this + 2326), 0);
        v5 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 2325);
      }
      updated = PubSebiUpdateLevelEventRpc(v5, 0);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0zqq_EventWriteTransfer(v12, v11, v13, 0, updated);
      v5 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 2325);
      *((_BYTE *)this + 18593) = 0;
    }
    PubSebUnregisterRpc(v5);
    *((_QWORD *)this + 2325) = 0LL;
  }
  v6 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 2326);
  if ( v6 )
  {
    PubSebUnregisterRpc(v6);
    *((_QWORD *)this + 2326) = 0LL;
  }
  v7 = (char *)*((_QWORD *)this + 2322);
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v7);
  COverlayContext::~COverlayContext((CLegacyRenderTarget *)((char *)this + 472));
  v8 = (CRenderTargetBitmap *)*((_QWORD *)this + 22);
  if ( v8 )
    CRenderTargetBitmap::Release(v8);
  v9 = (CRenderTargetBitmap *)*((_QWORD *)this + 21);
  if ( v9 )
    CRenderTargetBitmap::Release(v9);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 160);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 19);
  CRenderTarget::~CRenderTarget(this);
}
