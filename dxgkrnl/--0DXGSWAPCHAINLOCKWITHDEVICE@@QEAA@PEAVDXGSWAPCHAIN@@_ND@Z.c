DXGSWAPCHAINLOCKWITHDEVICE *__fastcall DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE(
        DXGSWAPCHAINLOCKWITHDEVICE *this,
        struct DXGSWAPCHAIN *a2,
        char a3,
        char a4)
{
  *((_BYTE *)this + 16) = a3;
  *(_BYTE *)this = a4;
  *((_QWORD *)this + 1) = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24), a2, 0);
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_BYTE *)this + 80) = 0;
  *((_QWORD *)this + 11) = 0LL;
  return this;
}
