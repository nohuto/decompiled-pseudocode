/*
 * XREFs of ??1?$unique_any_t@Ucert_context_t@wil@@@wil@@QEAA@XZ @ 0x1804CF854
 * Callers:
 *     _TryGetCertSubjectName_::_1_::dtor$3 @ 0x1804CFF46 (_TryGetCertSubjectName_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::unique_any_t<wil::cert_context_t>::~unique_any_t<wil::cert_context_t>(const CERT_CONTEXT **a1)
{
  const CERT_CONTEXT *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return CertFreeCertificateContext(v1);
  return result;
}
