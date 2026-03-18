/*
 * XREFs of ?SetRemarshalingFlags@CGenericInkMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C02196F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CGenericInkMarshaler::SetRemarshalingFlags(
        DirectComposition::CGenericInkMarshaler *this)
{
  unsigned int v1; // edx

  v1 = *((_DWORD *)this + 4) & 0xFFFFFF9F;
  *((_DWORD *)this + 4) = v1;
  if ( *((_BYTE *)this + 188) )
  {
    v1 &= ~0x100u;
    *((_DWORD *)this + 4) = v1;
  }
  *((_DWORD *)this + 39) = 0;
  *((_BYTE *)this + 160) = 1;
  if ( *((_QWORD *)this + 21) )
  {
    v1 &= ~0x80u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( *((_QWORD *)this + 29) )
    *((_DWORD *)this + 4) = v1 & 0xFFFFFDFF;
  *((_DWORD *)this + 62) = 0;
  return 1;
}
