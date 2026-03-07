void __fastcall CTokenBase::Retire(
        CTokenBase *this,
        const struct DXGI_FRAME_STATISTICS *a2,
        const struct DXGI_FRAME_STATISTICS *a3)
{
  *((_DWORD *)this + 6) = 5;
}
