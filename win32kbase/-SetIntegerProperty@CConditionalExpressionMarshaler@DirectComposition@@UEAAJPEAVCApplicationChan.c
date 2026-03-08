/*
 * XREFs of ?SetIntegerProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0263540
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C009E0C0 (-SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 */

__int64 __fastcall DirectComposition::CConditionalExpressionMarshaler::SetIntegerProperty(
        DirectComposition::CConditionalExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  __int64 result; // rax

  result = 0LL;
  *a5 = 0;
  if ( a3 != 13 )
    return DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
  if ( *((_DWORD *)this + 38) != (_DWORD)a4 )
  {
    *((_DWORD *)this + 38) = a4;
    *a5 = 1;
    *((_DWORD *)this + 4) &= ~0x1000u;
  }
  return result;
}
