/*
 * XREFs of ??1CRenderTarget@@MEAA@XZ @ 0x1800C6CF0
 * Callers:
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x1800C76E4 (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ??1CRemoteRenderTarget@@UEAA@XZ @ 0x18010A774 (--1CRemoteRenderTarget@@UEAA@XZ.c)
 *     ??1CDDisplayRenderTarget@@UEAA@XZ @ 0x1801BEB48 (--1CDDisplayRenderTarget@@UEAA@XZ.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x1801E671C (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ??1CRemoteAppRenderTarget@@MEAA@XZ @ 0x1801E7574 (--1CRemoteAppRenderTarget@@MEAA@XZ.c)
 *     ??1CDDARenderTarget@@UEAA@XZ @ 0x1801F61C8 (--1CDDARenderTarget@@UEAA@XZ.c)
 *     ??1CHolographicInteropTarget@@MEAA@XZ @ 0x1802A59F0 (--1CHolographicInteropTarget@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReleaseVisualTree@CRenderTarget@@IEAAXXZ @ 0x1800C73AC (-ReleaseVisualTree@CRenderTarget@@IEAAXXZ.c)
 */

void __fastcall CRenderTarget::~CRenderTarget(CRenderTarget *this)
{
  CRenderTarget::ReleaseVisualTree(this);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 12);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 11);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
