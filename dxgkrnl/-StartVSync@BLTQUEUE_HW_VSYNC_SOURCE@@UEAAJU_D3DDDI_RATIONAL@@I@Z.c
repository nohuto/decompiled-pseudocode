__int64 __fastcall BLTQUEUE_HW_VSYNC_SOURCE::StartVSync(BLTQUEUE_HW_VSYNC_SOURCE *this, struct _D3DDDI_RATIONAL a2)
{
  KeSetTimerEx((PKTIMER)((char *)this + 16), (LARGE_INTEGER)(-10000000LL * (unsigned int)dword_1C013BA7C), 0, 0LL);
  DXGDODPRESENT::StartHwVSync(*((struct _KTHREAD ***)this + 1));
  return 0LL;
}
