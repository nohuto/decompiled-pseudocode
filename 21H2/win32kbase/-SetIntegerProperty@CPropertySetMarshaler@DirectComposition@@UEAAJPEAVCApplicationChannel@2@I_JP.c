/*
 * XREFs of ?SetIntegerProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C022C040
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0099660 (-SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationCha.c)
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::SetIntegerProperty(
        DirectComposition::CPropertySetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  __int64 result; // rax

  result = 0LL;
  *a5 = 0;
  if ( a3 != 3 )
    return DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
  if ( *((_DWORD *)this + 28) != a4 )
  {
    *((_DWORD *)this + 4) |= 0x100u;
    *((_DWORD *)this + 28) = a4;
    *a5 = 1;
  }
  return result;
}
