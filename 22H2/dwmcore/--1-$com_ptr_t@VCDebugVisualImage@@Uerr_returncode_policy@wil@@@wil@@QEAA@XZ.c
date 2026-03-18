/*
 * XREFs of ??1?$com_ptr_t@VCDebugVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18019D9E0
 * Callers:
 *     ?Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@@Z @ 0x1800A61F4 (-Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@.c)
 *     ?Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z @ 0x18020FD08 (-Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z.c)
 *     ?Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1802185AC (-Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078A28 (-InternalRelease@CResource@@IEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<CDebugVisualImage,wil::err_returncode_policy>::~com_ptr_t<CDebugVisualImage,wil::err_returncode_policy>(
        CResource **a1)
{
  CResource *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return CResource::InternalRelease(v1);
  return result;
}
