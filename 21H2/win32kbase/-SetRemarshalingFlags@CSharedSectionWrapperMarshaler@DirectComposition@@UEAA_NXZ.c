/*
 * XREFs of ?SetRemarshalingFlags@CSharedSectionWrapperMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C00CB490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CSharedSectionWrapperMarshaler::SetRemarshalingFlags(
        DirectComposition::CSharedSectionWrapperMarshaler *this)
{
  *((_DWORD *)this + 4) &= ~0x20u;
  return 1;
}
