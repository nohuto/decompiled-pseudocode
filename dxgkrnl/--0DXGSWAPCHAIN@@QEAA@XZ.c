/*
 * XREFs of ??0DXGSWAPCHAIN@@QEAA@XZ @ 0x1C03522BC
 * Callers:
 *     DxgkCreateSwapChain @ 0x1C0356B70 (DxgkCreateSwapChain.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01DC800 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

DXGSWAPCHAIN *__fastcall DXGSWAPCHAIN::DXGSWAPCHAIN(DXGSWAPCHAIN *this)
{
  char *v2; // rcx

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 62;
  *((_DWORD *)this + 10) = 66;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  v2 = (char *)this + 80;
  *(_QWORD *)v2 = 0LL;
  *((_QWORD *)v2 + 1) = 0LL;
  AUTOEXPANDALLOCATION::GetBuffer((const void **)v2, 0, 0);
  *((_QWORD *)this + 24) = 1LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = 16;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 58) = 0;
  memset((char *)this + 96, 0, 0x60uLL);
  *((_DWORD *)this + 31) = 1;
  *((_DWORD *)this + 46) = -1;
  *((_DWORD *)this + 34) = -1;
  return this;
}
