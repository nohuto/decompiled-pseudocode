/*
 * XREFs of ?SetRemarshalingFlags@CExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C022AC50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C022AD80 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CExpressionMarshaler::SetRemarshalingFlags(
        DirectComposition::CExpressionMarshaler *this)
{
  char v1; // bl

  *((_DWORD *)this + 4) &= ~0x800u;
  v1 = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 57) = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(this)
    || *((_QWORD *)this + 17) && *((_QWORD *)this + 19) )
  {
    return 1;
  }
  return v1;
}
