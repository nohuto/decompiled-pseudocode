/*
 * XREFs of ?GetClip@CD2DContext@@UEAAXPEBVID2DContextOwner@@PEAUD2D_RECT_F@@PEAW4D2D1_ANTIALIAS_MODE@@@Z @ 0x18023C780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CD2DContext::GetClip(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        struct D2D_RECT_F *a3,
        enum D2D1_ANTIALIAS_MODE *a4)
{
  int v4; // edx
  __int64 v5; // rax

  v4 = *((_DWORD *)this + 100);
  v5 = 0LL;
  if ( v4 )
    v5 = *(_QWORD *)(*((_QWORD *)this + 47) + 8LL * (unsigned int)(v4 - 1));
  *a3 = *(struct D2D_RECT_F *)(v5 + 60);
  *a4 = *(enum D2D1_ANTIALIAS_MODE *)(v5 + 76);
}
