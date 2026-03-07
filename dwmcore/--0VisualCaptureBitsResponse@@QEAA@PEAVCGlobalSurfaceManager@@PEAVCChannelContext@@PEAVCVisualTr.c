VisualCaptureBitsResponse *__fastcall VisualCaptureBitsResponse::VisualCaptureBitsResponse(
        VisualCaptureBitsResponse *this,
        struct CGlobalSurfaceManager *a2,
        struct CChannelContext *a3,
        struct CVisualTree *a4,
        const struct WICRect *a5,
        enum DXGI_FORMAT a6,
        unsigned __int64 a7,
        void *a8,
        void *a9)
{
  CaptureBitsResponse::CaptureBitsResponse(this, a2, a3, a4, 1.0, a5, a6, a7);
  *(_QWORD *)this = &VisualCaptureBitsResponse::`vftable';
  *((_QWORD *)this + 211) = 0LL;
  *((_QWORD *)this + 212) = a8;
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=((char *)this + 1688, *((_QWORD *)a4 + 8));
  *((_QWORD *)this + 207) = a9;
  return this;
}
