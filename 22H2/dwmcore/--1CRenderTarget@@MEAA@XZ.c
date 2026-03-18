/*
 * XREFs of ??1CRenderTarget@@MEAA@XZ @ 0x1800C7750
 * Callers:
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x1800C8144 (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ??1CRemoteRenderTarget@@UEAA@XZ @ 0x18010B2B4 (--1CRemoteRenderTarget@@UEAA@XZ.c)
 *     ??1CDDisplayRenderTarget@@UEAA@XZ @ 0x1801C1D78 (--1CDDisplayRenderTarget@@UEAA@XZ.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x1801E9A1C (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ??1CRemoteAppRenderTarget@@MEAA@XZ @ 0x1801EA874 (--1CRemoteAppRenderTarget@@MEAA@XZ.c)
 *     ??1CDDARenderTarget@@UEAA@XZ @ 0x1801F9548 (--1CDDARenderTarget@@UEAA@XZ.c)
 *     ??1CHolographicInteropTarget@@MEAA@XZ @ 0x1802A9170 (--1CHolographicInteropTarget@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800047F0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReleaseVisualTree@CRenderTarget@@IEAAXXZ @ 0x1800C7E0C (-ReleaseVisualTree@CRenderTarget@@IEAAXXZ.c)
 */

void __fastcall CRenderTarget::~CRenderTarget(CRenderTarget *this)
{
  CRenderTarget::ReleaseVisualTree(this);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 12);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 11);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
