/*
 * XREFs of ?SetFloatProperty@CViewBoxMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0254050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CViewBoxMarshaler::SetFloatProperty(
        DirectComposition::CViewBoxMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax
  int v5; // edx

  result = 0LL;
  *a4 = 0;
  v5 = a2 - 3;
  if ( v5 )
  {
    if ( v5 != 1 )
      return 3221225485LL;
    *((_DWORD *)this + 4) |= 0x100u;
    *((float *)this + 19) = a3;
  }
  else
  {
    *((_DWORD *)this + 4) |= 0x80u;
    *((float *)this + 18) = a3;
  }
  *a4 = 1;
  return result;
}
