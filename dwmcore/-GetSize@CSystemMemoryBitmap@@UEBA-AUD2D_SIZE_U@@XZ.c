/*
 * XREFs of ?GetSize@CSystemMemoryBitmap@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180105CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CSystemMemoryBitmap::GetSize(CSystemMemoryBitmap *this, _DWORD *a2)
{
  *a2 = *((_DWORD *)this - 8);
  a2[1] = *((_DWORD *)this - 7);
  return (struct D2D_SIZE_U)a2;
}
