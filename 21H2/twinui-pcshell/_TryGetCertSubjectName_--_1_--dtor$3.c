/*
 * XREFs of _TryGetCertSubjectName_::_1_::dtor$3 @ 0x1804CFF46
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall TryGetCertSubjectName_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::cert_context_t>::~unique_any_t<wil::cert_context_t>((const CERT_CONTEXT **)(a2 + 128));
}
