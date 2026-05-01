/*
 * XREFs of ?GetDimmingLayerThumbnail@CMultitaskingViewFrameElement@@UEAAJPEAPEAUIDCompThumbnail@@@Z @ 0x18041A430
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CMultitaskingViewFrameElement::GetDimmingLayerThumbnail(
        CMultitaskingViewFrameElement *this,
        struct IDCompThumbnail **a2)
{
  struct IDCompThumbnail **v2; // rbx

  *a2 = 0LL;
  v2 = (struct IDCompThumbnail **)((char *)this + 304);
  if ( *((_QWORD *)this + 38) )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 38);
    *a2 = *v2;
  }
  return 0LL;
}
