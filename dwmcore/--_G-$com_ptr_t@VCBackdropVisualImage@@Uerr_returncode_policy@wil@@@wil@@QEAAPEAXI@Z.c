/*
 * XREFs of ??_G?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAXI@Z @ 0x1800ED868
 * Callers:
 *     ??$destruct_range@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x1800ED82C (--$destruct_range@V-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@detail@.c)
 * Callees:
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078858 (-InternalRelease@CResource@@IEAAKXZ.c)
 */

CResource **__fastcall wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>::`scalar deleting destructor'(
        CResource **a1)
{
  CResource *v2; // rcx

  v2 = *a1;
  if ( v2 )
    CResource::InternalRelease(v2);
  return a1;
}
