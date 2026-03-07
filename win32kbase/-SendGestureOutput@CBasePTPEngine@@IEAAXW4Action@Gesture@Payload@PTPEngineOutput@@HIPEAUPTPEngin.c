void *__fastcall CBasePTPEngine::SendGestureOutput(__int64 a1, int a2, int a3, unsigned int a4, void *Src)
{
  void *v5; // rdi

  *(_DWORD *)(a1 + 576) = a2;
  v5 = (void *)(a1 + 572);
  *(_DWORD *)(a1 + 588) = a4;
  *(_DWORD *)(a1 + 572) = 2;
  *(_DWORD *)(a1 + 580) = a3 != 0;
  memmove((void *)(a1 + 592), Src, 96LL * a4);
  (***(void (__fastcall ****)(_QWORD, void *))(a1 + 8))(*(_QWORD *)(a1 + 8), v5);
  return memset(v5, 0, 0x254uLL);
}
