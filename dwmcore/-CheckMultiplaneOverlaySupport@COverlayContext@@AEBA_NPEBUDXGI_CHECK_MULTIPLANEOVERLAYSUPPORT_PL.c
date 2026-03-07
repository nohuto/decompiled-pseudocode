__int64 __fastcall COverlayContext::CheckMultiplaneOverlaySupport(
        COverlayContext *this,
        const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        bool *a4)
{
  __int64 v7; // rax

  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 176LL))(*(_QWORD *)this);
  return (*(__int64 (__fastcall **)(__int64, const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *, _QWORD, bool *))(*(_QWORD *)v7 + 144LL))(
           v7,
           a2,
           a3,
           a4);
}
