struct _LUID __fastcall CCompSwapChain::GetAdapterLuid(CCompSwapChain *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this - 37);
  return (struct _LUID)a2;
}
