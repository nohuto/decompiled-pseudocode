/*
 * XREFs of ??0VIDMM_PROCESS@@QEAA@XZ @ 0x1C0093FEC
 * Callers:
 *     VidMmCreateProcess @ 0x1C0001A60 (VidMmCreateProcess.c)
 * Callees:
 *     memset @ 0x1C001AC80 (memset.c)
 */

VIDMM_PROCESS *__fastcall VIDMM_PROCESS::VIDMM_PROCESS(VIDMM_PROCESS *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 1;
  *((_DWORD *)this + 22) = -1;
  *(_QWORD *)((char *)this + 100) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 61) = 66;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 62) = -1;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 69) = 66;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 70) = -1;
  *((_DWORD *)this + 68) = 0;
  *((_QWORD *)this + 37) = -1LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_OWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 24) |= 1u;
  *((_QWORD *)this + 7) = (char *)this + 48;
  *((_QWORD *)this + 6) = (char *)this + 48;
  memset((char *)this + 136, 0, 0x50uLL);
  return this;
}
