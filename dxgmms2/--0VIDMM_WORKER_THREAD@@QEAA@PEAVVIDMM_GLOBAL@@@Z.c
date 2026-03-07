VIDMM_WORKER_THREAD *__fastcall VIDMM_WORKER_THREAD::VIDMM_WORKER_THREAD(
        VIDMM_WORKER_THREAD *this,
        struct VIDMM_GLOBAL *a2)
{
  char *v2; // rbx

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = 0LL;
  v2 = (char *)this + 416;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 1;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 66;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *(_QWORD *)((char *)this + 164) = 1LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_BYTE *)this + 184) = 0;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_BYTE *)this + 240) = 1;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  memset((char *)this + 416, 0, 0x1B8uLL);
  memset(v2 + 440, 0, 0x1B8uLL);
  memset(v2 + 880, 0, 0x1B8uLL);
  memset(v2 + 1320, 0, 0x1B8uLL);
  memset(v2 + 1760, 0, 0x1B8uLL);
  memset(v2 + 2200, 0, 0x1B8uLL);
  memset(v2 + 2640, 0, 0x1B8uLL);
  *((_QWORD *)v2 + 396) = 0LL;
  *((_QWORD *)v2 + 397) = 0LL;
  *((_DWORD *)v2 + 796) = 0;
  *((_DWORD *)v2 + 797) = 1;
  *((_QWORD *)this + 11) = (char *)this + 80;
  *((_QWORD *)this + 10) = (char *)this + 80;
  *((_QWORD *)this + 15) = (char *)this + 112;
  *((_QWORD *)this + 14) = (char *)this + 112;
  *((_QWORD *)this + 13) = (char *)this + 96;
  *((_QWORD *)this + 12) = (char *)this + 96;
  *((_QWORD *)this + 17) = (char *)this + 128;
  *((_QWORD *)this + 16) = (char *)this + 128;
  return this;
}
