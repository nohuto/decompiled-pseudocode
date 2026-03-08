/*
 * XREFs of ?SetFloatProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C026CB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetFloatProperty(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  int v5; // r10d
  bool v6; // al

  v4 = 0;
  v5 = 0;
  if ( a2 == 7 )
  {
    v5 = 4096;
    if ( *((float *)this + 32) == a3 )
    {
      v6 = 0;
    }
    else
    {
      *((float *)this + 32) = a3;
      v6 = 1;
    }
    *a4 = v6;
  }
  else
  {
    v4 = -1073741811;
  }
  if ( *a4 )
    *((_DWORD *)this + 4) |= v5;
  return v4;
}
