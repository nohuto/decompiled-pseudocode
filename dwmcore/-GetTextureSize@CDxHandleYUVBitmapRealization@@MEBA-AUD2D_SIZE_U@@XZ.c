/*
 * XREFs of ?GetTextureSize@CDxHandleYUVBitmapRealization@@MEBA?AUD2D_SIZE_U@@XZ @ 0x1802B0C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CDxHandleYUVBitmapRealization::GetTextureSize(
        CDxHandleYUVBitmapRealization *this,
        __int64 a2)
{
  __int64 v2; // r8

  v2 = *((_QWORD *)this + 47);
  *(_QWORD *)a2 = 0LL;
  if ( v2 )
  {
    *(_DWORD *)a2 = *(_DWORD *)(v2 + 104);
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(v2 + 108);
  }
  return (struct D2D_SIZE_U)a2;
}
