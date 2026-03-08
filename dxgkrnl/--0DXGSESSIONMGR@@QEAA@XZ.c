/*
 * XREFs of ??0DXGSESSIONMGR@@QEAA@XZ @ 0x1C0208560
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0205878 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 */

DXGSESSIONMGR *__fastcall DXGSESSIONMGR::DXGSESSIONMGR(DXGSESSIONMGR *this)
{
  char *v2; // rcx

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 44;
  *((_DWORD *)this + 10) = 50;
  v2 = (char *)this + 56;
  *((_DWORD *)this + 20) = 3;
  *((_QWORD *)this + 6) = v2;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 32) = 1;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = 45;
  *((_DWORD *)this + 36) = -1;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_DWORD *)this + 88) = 0;
  *((_DWORD *)this + 89) = 66;
  *((_QWORD *)this + 48) = 0LL;
  *((_DWORD *)this + 103) = -1;
  *((_DWORD *)this + 104) = 1;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_DWORD *)this + 102) = 0;
  *((_QWORD *)this + 54) = (char *)this + 424;
  *((_QWORD *)this + 53) = (char *)this + 424;
  *((_BYTE *)this + 440) = 0;
  memset(v2, 0, 8LL * *((unsigned int *)this + 20));
  *((_QWORD *)this + 46) = (char *)this + 360;
  *((_QWORD *)this + 45) = (char *)this + 360;
  *((_DWORD *)this + 37) = 0;
  ExInitializePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192), 0LL, 0LL, 0x200u, 0x30uLL, 0x4B677844u, 0);
  *((_QWORD *)this + 41) = (char *)this + 320;
  *((_QWORD *)this + 40) = (char *)this + 320;
  return this;
}
