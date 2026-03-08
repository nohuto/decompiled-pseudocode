/*
 * XREFs of ?SetIntegerProperty@CHolographicCompositionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C02659B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicCompositionMarshaler::SetIntegerProperty(
        DirectComposition::CHolographicCompositionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  __int64 result; // rax
  _BYTE *v6; // rdx
  char v8; // r8

  result = 0LL;
  v6 = (char *)this + 88;
  if ( !*((_BYTE *)this + 68) || (v8 = 1, !*v6) )
    v8 = 0;
  if ( a3 != 1 )
    return 3221225485LL;
  *((_DWORD *)this + 16) = a4;
  *((_BYTE *)this + 68) = 1;
  if ( v8 )
  {
    *((_DWORD *)this + 4) |= 0x80u;
  }
  else if ( *v6 )
  {
    *((_DWORD *)this + 4) |= 0x40u;
  }
  *a5 = 1;
  return result;
}
