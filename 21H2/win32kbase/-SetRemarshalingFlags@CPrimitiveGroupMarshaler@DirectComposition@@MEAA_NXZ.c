/*
 * XREFs of ?SetRemarshalingFlags@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0229760
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
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 25) = 0;
  v2 = *((_QWORD *)this + 8) == 0LL;
  *((_DWORD *)this + 4) = v1 | 0x100;
  result = !v2;
  *((_DWORD *)this + 29) = 0;
  return result;
}
