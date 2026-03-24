/*
 * XREFs of ?GetOffset@CCompositionEnvironmentLight@@UEBAAEBUfloat3@Numerics@Foundation@Windows@@XZ @ 0x18020F750
 * Callers:
 *     <none>
 * Callees:
 *     _Init_thread_footer @ 0x1800E7650 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E76B8 (_Init_thread_header.c)
 */

const struct Windows::Foundation::Numerics::float3 *__fastcall CCompositionEnvironmentLight::GetOffset(
        CCompositionEnvironmentLight *this)
{
  if ( dword_18034BDC0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18034BDC0);
    if ( dword_18034BDC0 == -1 )
    {
      dword_18034BDC8 = 0;
      dword_18034BDCC = 0;
      dword_18034BDD0 = 0;
      Init_thread_footer(&dword_18034BDC0);
    }
  }
  return (const struct Windows::Foundation::Numerics::float3 *)&dword_18034BDC8;
}
