/*
 * XREFs of ?SetRemarshalingFlags@CSynchronousSuperWetInkMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C025ECC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSynchronousSuperWetInkMarshaler::SetRemarshalingFlags(
        DirectComposition::CSynchronousSuperWetInkMarshaler *this)
{
  _DWORD *v1; // rdx

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((_QWORD *)this + 7) )
    *v1 |= 0x20u;
  if ( *((_QWORD *)this + 8) )
    *v1 |= 0x40u;
  if ( *((_DWORD *)this + 18) )
    *v1 |= 0x80u;
  if ( *((_DWORD *)this + 19) )
    *v1 |= 0x100u;
  if ( *((_DWORD *)this + 20) )
    *v1 |= 0x200u;
  if ( *((_QWORD *)this + 11) )
    *v1 |= 0x400u;
  if ( *((_DWORD *)this + 24) )
    *v1 |= 0x800u;
  if ( *((_DWORD *)this + 25) )
    *v1 |= 0x1000u;
  if ( *((_DWORD *)this + 26) )
    *v1 |= 0x2000u;
  if ( *((_BYTE *)this + 108) )
    *v1 |= 0x4000u;
  if ( *((_DWORD *)this + 28) )
    *v1 |= 0x8000u;
  if ( *((_DWORD *)this + 29) )
    *v1 |= 0x10000u;
  return (*v1 & 0x1FFE0) != 0;
}
