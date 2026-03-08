/*
 * XREFs of ?SetRemarshalingFlags@CExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0262CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0262E50 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CExpressionMarshaler::SetRemarshalingFlags(
        DirectComposition::CExpressionMarshaler *this)
{
  char v1; // bl

  *((_DWORD *)this + 4) &= ~0x800u;
  v1 = 0;
  *((_DWORD *)this + 51) = 0;
  *((_DWORD *)this + 55) = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(this)
    || *((_QWORD *)this + 16) && *((_QWORD *)this + 18) )
  {
    return 1;
  }
  return v1;
}
