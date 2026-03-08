/*
 * XREFs of ?SetRemarshalingFlags@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C02622C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CPrimitiveGroupMarshaler::SetRemarshalingFlags(
        DirectComposition::CPrimitiveGroupMarshaler *this)
{
  unsigned int v1; // eax
  bool v2; // zf
  bool result; // al

  v1 = *((_DWORD *)this + 4) & 0xFFFFFFDF;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 23) = 0;
  v2 = *((_QWORD *)this + 7) == 0LL;
  *((_DWORD *)this + 4) = v1 | 0x100;
  result = !v2;
  *((_DWORD *)this + 27) = 0;
  return result;
}
