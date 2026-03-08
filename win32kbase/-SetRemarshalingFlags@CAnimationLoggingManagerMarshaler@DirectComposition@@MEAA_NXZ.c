/*
 * XREFs of ?SetRemarshalingFlags@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0262C80
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

  v1 = *((_BYTE *)this + 256) & 0xFD;
  *((_DWORD *)this + 24) = 0;
  result = 1;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 60) = 0;
  *((_BYTE *)this + 256) = v1;
  if ( *((_QWORD *)this + 31) )
    *((_BYTE *)this + 256) = v1 | 1;
  *((_DWORD *)this + 4) &= ~0x20u;
  return result;
}
