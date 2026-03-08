/*
 * XREFs of ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x1801BA1EC
 * Callers:
 *     ??1CSceneResourceManager@@QEAA@XZ @ 0x1801B9788 (--1CSceneResourceManager@@QEAA@XZ.c)
 *     ?NotifyInvalidResource@CSceneResourceManager@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801BA170 (-NotifyInvalidResource@CSceneResourceManager@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800292C0 (-RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180034A40 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x1801B9E78 (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801BA3FC (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CSceneResourceManager::ReleaseSceneCompositor(CSceneResourceManager *this)
{
  CD3DResource *v2; // rcx
  struct ISpectreRenderer *SpectreRenderer; // r14
  _QWORD *v4; // rbp
  _QWORD *i; // rdi
  CD3DDevice *v6; // rcx

  v2 = (CD3DResource *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    CD3DResource::RemoveResourceNotifier(v2, this);
    SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(this);
    if ( SpectreRenderer )
    {
      v4 = (_QWORD *)*((_QWORD *)this + 6);
      for ( i = (_QWORD *)*((_QWORD *)this + 5); i != v4; ++i )
        (*(void (__fastcall **)(_QWORD, struct ISpectreRenderer *))(*(_QWORD *)*i + 8LL))(*i, SpectreRenderer);
    }
    wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset((char *)this + 24);
  }
  v6 = (CD3DDevice *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v6 )
    CD3DDevice::Release(v6);
}
