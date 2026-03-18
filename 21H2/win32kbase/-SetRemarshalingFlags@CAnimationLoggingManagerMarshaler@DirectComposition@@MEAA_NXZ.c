/*
 * XREFs of ?SetRemarshalingFlags@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C022AAE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::SetRemarshalingFlags(
        DirectComposition::CAnimationLoggingManagerMarshaler *this)
{
  char v1; // dl
  bool result; // al

  v1 = *((_BYTE *)this + 264) & 0xFD;
  *((_DWORD *)this + 26) = 0;
  result = 1;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 62) = 0;
  *((_BYTE *)this + 264) = v1;
  if ( *((_QWORD *)this + 32) )
    *((_BYTE *)this + 264) = v1 | 1;
  *((_DWORD *)this + 4) &= ~0x20u;
  return result;
}
