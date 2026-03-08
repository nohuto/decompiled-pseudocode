/*
 * XREFs of ?SetIntegerProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C026B880
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C009E0C0 (-SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 */

__int64 __fastcall DirectComposition::CNaturalAnimationMarshaler::SetIntegerProperty(
        DirectComposition::CNaturalAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        unsigned __int64 a4,
        bool *a5)
{
  __int64 result; // rax

  result = 0LL;
  *a5 = 0;
  if ( a3 != 19 )
  {
    if ( a3 != 29 )
      return DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
    if ( a4 <= 1 )
    {
      if ( *((_DWORD *)this + 47) == (_DWORD)a4 )
        return result;
      *((_DWORD *)this + 47) = a4;
      goto LABEL_11;
    }
    return 3221225485LL;
  }
  if ( a4 > 2 )
    return 3221225485LL;
  if ( *((_DWORD *)this + 48) == (_DWORD)a4 )
    return result;
  *((_DWORD *)this + 48) = a4;
LABEL_11:
  *((_DWORD *)this + 4) |= 0x20000u;
  *a5 = 1;
  return result;
}
