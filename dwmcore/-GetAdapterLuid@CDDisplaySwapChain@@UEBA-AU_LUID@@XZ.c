struct _LUID __fastcall CDDisplaySwapChain::GetAdapterLuid(CDDisplaySwapChain *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this - 62);
  return (struct _LUID)a2;
}
