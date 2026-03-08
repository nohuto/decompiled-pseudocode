/*
 * XREFs of ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x180018550
 * Callers:
 *     ??1CAtlasTexture@@QEAA@XZ @ 0x1800184C8 (--1CAtlasTexture@@QEAA@XZ.c)
 *     ?NotifyInvalidResource@CAtlasTexture@@UEAAXPEBVIDeviceResource@@@Z @ 0x180299230 (-NotifyInvalidResource@CAtlasTexture@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?NotifyOwner@CAtlasEntry@@AEBAXXZ @ 0x18001E050 (-NotifyOwner@CAtlasEntry@@AEBAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x1800FE6F4 (-InternalRelease@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAtlasTexture::DestroyResources(CAtlasTexture *this)
{
  __int64 v1; // rax
  int v3; // ecx
  __int64 v4; // rcx
  void *v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  CAtlasEntry *v8; // rcx

  v1 = *((unsigned int *)this + 6);
  v3 = *((_DWORD *)this + 7) + *((_DWORD *)this + 8);
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 8) = 0;
  if ( *((_QWORD *)this + 1) )
  {
    if ( v3 != (_DWORD)v1 && (_DWORD)v1 )
    {
      v6 = 0LL;
      v7 = v1;
      do
      {
        v8 = *(CAtlasEntry **)(v6 + *((_QWORD *)this + 2));
        if ( (unsigned __int64)v8 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          *(_QWORD *)v8 = 0LL;
          *((_DWORD *)v8 + 4) = -1;
          CAtlasEntry::NotifyOwner(v8);
        }
        v6 += 8LL;
        --v7;
      }
      while ( v7 );
    }
    v4 = *(int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 8LL) + *((_QWORD *)this + 1) + 8LL;
    (*(void (__fastcall **)(__int64, CAtlasTexture *))(*(_QWORD *)v4 + 48LL))(v4, this);
    Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease((char *)this + 8);
  }
  v5 = (void *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v5 )
    operator delete(v5);
}
