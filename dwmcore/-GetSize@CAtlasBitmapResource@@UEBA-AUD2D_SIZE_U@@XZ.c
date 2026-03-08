/*
 * XREFs of ?GetSize@CAtlasBitmapResource@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1800F4250
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSize@CAtlasTexture@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800F427C (-GetSize@CAtlasTexture@@QEBA-AUD2D_SIZE_U@@XZ.c)
 */

struct D2D_SIZE_U __fastcall CAtlasBitmapResource::GetSize(CAtlasBitmapResource *this, _DWORD *a2)
{
  CAtlasTexture *v2; // rcx

  v2 = (CAtlasTexture *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    CAtlasTexture::GetSize(v2);
  }
  else
  {
    *a2 = 1;
    a2[1] = 1;
  }
  return (struct D2D_SIZE_U)a2;
}
