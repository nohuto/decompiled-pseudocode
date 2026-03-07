VIDMM_PROCESS_ADAPTER_INFO *__fastcall VIDMM_PROCESS_ADAPTER_INFO::VIDMM_PROCESS_ADAPTER_INFO(
        VIDMM_PROCESS_ADAPTER_INFO *this)
{
  _OWORD *v1; // rdi

  v1 = (_OWORD *)((char *)this + 472);
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 88) = 0;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 95) = 1;
  *((_DWORD *)this + 96) = 54;
  *((_DWORD *)this + 100) = 2;
  *((_DWORD *)this + 101) = 2;
  *((_QWORD *)this + 49) = 0LL;
  VIDMM_PROCESS_ADAPTER_INFO::_unnamed_type__Policy_::_unnamed_type__Policy_((VIDMM_PROCESS_ADAPTER_INFO *)((char *)this + 472));
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  memset((char *)this + 528, 0, 0x108uLL);
  *((_BYTE *)this + 792) = 0;
  memset((char *)this + 800, 0, 0x15CuLL);
  *((_BYTE *)this + 1148) = 0;
  *((_OWORD *)this + 72) = 0LL;
  *((_OWORD *)this + 73) = 0LL;
  *((_OWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 150) = 0LL;
  *((_DWORD *)this + 302) = 0;
  *((_BYTE *)this + 1212) = 0;
  memset((char *)this + 1216, 0, 0x210uLL);
  *((_BYTE *)this + 1744) = 0;
  *((_QWORD *)this + 219) = 0LL;
  *((_QWORD *)this + 220) = 0LL;
  *((_DWORD *)this + 442) = 0;
  *((_BYTE *)this + 1772) = 0;
  *((_QWORD *)this + 222) = 0LL;
  memset((char *)this + 1784, 0, 0x3C8uLL);
  *((_BYTE *)this + 2752) = 0;
  *v1 = 0LL;
  *(_OWORD *)((char *)this + 488) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_OWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 54) = (char *)this + 424;
  *((_QWORD *)this + 53) = (char *)this + 424;
  return this;
}
