/*
 * XREFs of _lambda_257d7c3e5d4eac318129c4c4e210f286_::operator() @ 0x1C005E66C
 * Callers:
 *     DpiFdoValidateDxgkColorimetry @ 0x1C02148C0 (DpiFdoValidateDxgkColorimetry.c)
 * Callees:
 *     <none>
 */

bool __fastcall lambda_257d7c3e5d4eac318129c4c4e210f286_::operator()(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( (_DWORD)a2 && HIDWORD(a2) && (unsigned int)a2 <= 0x3FF )
    return HIDWORD(a2) <= 0x3FF;
  return result;
}
