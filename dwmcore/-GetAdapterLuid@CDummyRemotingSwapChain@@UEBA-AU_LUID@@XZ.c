struct _LUID __fastcall CDummyRemotingSwapChain::GetAdapterLuid(CDummyRemotingSwapChain *this, _QWORD *a2)
{
  struct _LUID result; // rax

  result = (struct _LUID)a2;
  *a2 = *(_QWORD *)(*((_QWORD *)this - 27) + 896LL);
  return result;
}
