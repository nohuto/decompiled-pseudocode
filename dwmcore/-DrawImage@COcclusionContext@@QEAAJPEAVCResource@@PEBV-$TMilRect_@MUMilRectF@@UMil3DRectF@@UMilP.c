__int64 __fastcall COcclusionContext::DrawImage(COcclusionContext *a1, struct IUnknown *a2, int a3, char a4)
{
  int v5; // ebx
  int v6; // r9d

  v5 = (int)a1;
  if ( !*((_DWORD *)a1 + 358) && COcclusionContext::DoesImageOcclude(a1, a2, a4 & 1) )
    COcclusionContext::CollectRectangleForOcclusion(v5, a3, 0, v6, 0LL);
  return 0LL;
}
