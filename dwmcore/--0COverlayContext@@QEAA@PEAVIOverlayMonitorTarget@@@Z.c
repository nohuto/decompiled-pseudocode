COverlayContext *__fastcall COverlayContext::COverlayContext(COverlayContext *this, struct IOverlayMonitorTarget *a2)
{
  COverlayContext *result; // rax

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = 0LL;
  *(_OWORD *)((char *)this + 44) = 0LL;
  *(_OWORD *)((char *)this + 60) = 0LL;
  *(_QWORD *)((char *)this + 76) = 0LL;
  *((_DWORD *)this + 21) = 0;
  *((_QWORD *)this + 11) = (char *)this + 112;
  *((_QWORD *)this + 12) = (char *)this + 112;
  *((_QWORD *)this + 13) = (char *)this + 3696;
  *((_QWORD *)this + 462) = (char *)this + 3720;
  *((_QWORD *)this + 463) = (char *)this + 3720;
  *((_QWORD *)this + 464) = (char *)this + 7304;
  *((_QWORD *)this + 913) = (char *)this + 7328;
  *((_QWORD *)this + 914) = (char *)this + 7328;
  *((_QWORD *)this + 915) = (char *)this + 10912;
  *((_QWORD *)this + 1379) = 0LL;
  *((_QWORD *)this + 1382) = 0LL;
  *((_QWORD *)this + 1384) = 0LL;
  *((_QWORD *)this + 1385) = 0LL;
  *((_QWORD *)this + 1380) = 0LL;
  *((_QWORD *)this + 1381) = 0LL;
  *((_QWORD *)this + 1383) = 0LL;
  *((_QWORD *)this + 1386) = 0LL;
  *((_QWORD *)this + 1387) = 0LL;
  *((_BYTE *)this + 11104) = 0;
  *(_QWORD *)((char *)this + 11108) = 0LL;
  *(_OWORD *)((char *)this + 11116) = 0LL;
  *(_QWORD *)((char *)this + 11132) = 0LL;
  *(_QWORD *)((char *)this + 11140) = 0LL;
  *((_QWORD *)this + 1394) = 0LL;
  *((_DWORD *)this + 2790) = 0x1000000;
  *((_WORD *)this + 5582) = 0;
  *((_QWORD *)this + 1396) = 0LL;
  *((_QWORD *)this + 1397) = (char *)this + 11184;
  *((_DWORD *)this + 2796) = 0;
  result = this;
  *((_QWORD *)this + 1406) = 0LL;
  *((_QWORD *)this + 1407) = 0LL;
  *((_QWORD *)this + 1408) = 0LL;
  *((_DWORD *)this + 2818) = 0;
  *((_DWORD *)this + 4490) = -1;
  *((_QWORD *)this + 1410) = 0LL;
  *((_QWORD *)this + 1411) = 0LL;
  *((_WORD *)this + 5648) = 1;
  *((_BYTE *)this + 11299) = 0;
  *((_BYTE *)this + 11301) = 0;
  *(_QWORD *)((char *)this + 11316) = 0LL;
  *((_DWORD *)this + 2831) = 0;
  *((_BYTE *)this + 11328) = 0;
  return result;
}
