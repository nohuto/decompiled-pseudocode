struct _LUID __fastcall COverlaySwapChainBase::GetDisplayAdapterLuid(COverlaySwapChainBase *this, _QWORD *a2)
{
  *a2 = *(_QWORD *)((char *)this + 116);
  return (struct _LUID)a2;
}
