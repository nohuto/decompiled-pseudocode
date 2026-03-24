/*
 * XREFs of ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x1801687F0
 * Callers:
 *     ??1CSceneResourceManager@@QEAA@XZ @ 0x180168090 (--1CSceneResourceManager@@QEAA@XZ.c)
 *     ?NotifyInvalidResource@CSceneResourceManager@@UEAAXPEBVIDeviceResource@@@Z @ 0x180168780 (-NotifyInvalidResource@CSceneResourceManager@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180047FF0 (-RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x180168760 (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801689A0 (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CSceneResourceManager::ReleaseSceneCompositor(CSceneResourceManager *this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  struct ISpectreRenderer *SpectreRenderer; // rbp
  _QWORD *v5; // r15
  unsigned __int64 v6; // rsi

  v2 = 0LL;
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    CD3DResource::RemoveResourceNotifier((CD3DResource *)(v3 + 24), this);
    SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(this);
    if ( SpectreRenderer )
    {
      v5 = (_QWORD *)*((_QWORD *)this + 5);
      v6 = (unsigned __int64)(*((_QWORD *)this + 6) - (_QWORD)v5 + 7LL) >> 3;
      if ( (unsigned __int64)v5 > *((_QWORD *)this + 6) )
        v6 = 0LL;
      if ( v6 )
      {
        do
        {
          (*(void (__fastcall **)(_QWORD, struct ISpectreRenderer *))(*(_QWORD *)*v5 + 8LL))(*v5, SpectreRenderer);
          ++v2;
          ++v5;
        }
        while ( v2 != v6 );
      }
    }
    wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset((char *)this + 24);
  }
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((CD3DDevice **)this + 4);
}
