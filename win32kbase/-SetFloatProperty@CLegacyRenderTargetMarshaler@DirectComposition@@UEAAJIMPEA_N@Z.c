/*
 * XREFs of ?SetFloatProperty@CLegacyRenderTargetMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00D3430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLegacyRenderTargetMarshaler::SetFloatProperty(
        DirectComposition::CLegacyRenderTargetMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 == 7 )
  {
    if ( a3 == *((float *)this + 26) )
      return result;
    if ( a3 > 0.0 )
    {
      *((_DWORD *)this + 4) |= 0x80u;
      *((float *)this + 26) = a3;
LABEL_6:
      *a4 = 1;
      return result;
    }
    return 3221225485LL;
  }
  if ( a2 != 11 )
    return 3221225485LL;
  if ( a3 != *((float *)this + 32) )
  {
    if ( a3 >= 1.0 )
    {
      *((_DWORD *)this + 4) |= 0x100u;
      *((float *)this + 32) = a3;
      goto LABEL_6;
    }
    return 3221225485LL;
  }
  return result;
}
