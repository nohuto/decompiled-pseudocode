/*
 * XREFs of ??0COPM@@QEAA@PEAJ@Z @ 0x1C00C91E4
 * Callers:
 *     OPMInitialize @ 0x1C00C9154 (OPMInitialize.c)
 * Callees:
 *     ??0CMutex@OPM@@QEAA@PEAJ@Z @ 0x1C00C9370 (--0CMutex@OPM@@QEAA@PEAJ@Z.c)
 */

COPM *__fastcall COPM::COPM(COPM *this, int *a2)
{
  struct _LOOKASIDE_LIST_EX *Pool2; // rax
  struct _LOOKASIDE_LIST_EX *v5; // rax
  struct _LOOKASIDE_LIST_EX *v6; // rax

  *(_QWORD *)this = 0LL;
  if ( *a2 >= 0 )
  {
    Pool2 = (struct _LOOKASIDE_LIST_EX *)ExAllocatePool2(66LL, 96LL, 1297108807LL);
    *(_QWORD *)this = Pool2;
    if ( Pool2 )
      *a2 = ExInitializeLookasideListEx(Pool2, 0LL, 0LL, PagedPool, 0, 0x1010uLL, 0x4D504F47u, 0);
    else
      *a2 = -1073741670;
  }
  *((_QWORD *)this + 1) = 0LL;
  if ( *a2 >= 0 )
  {
    v5 = (struct _LOOKASIDE_LIST_EX *)ExAllocatePool2(66LL, 96LL, 1297108807LL);
    *((_QWORD *)this + 1) = v5;
    if ( v5 )
      *a2 = ExInitializeLookasideListEx(v5, 0LL, 0LL, PagedPool, 0, 0x1000uLL, 0x4D504F47u, 0);
    else
      *a2 = -1073741670;
  }
  *((_QWORD *)this + 2) = 0LL;
  if ( *a2 >= 0 )
  {
    v6 = (struct _LOOKASIDE_LIST_EX *)ExAllocatePool2(66LL, 96LL, 1297108807LL);
    *((_QWORD *)this + 2) = v6;
    if ( v6 )
      *a2 = ExInitializeLookasideListEx(v6, 0LL, 0LL, PagedPool, 0, 0x1000uLL, 0x4D504F47u, 0);
    else
      *a2 = -1073741670;
  }
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = -1071774452;
  OPM::CMutex::CMutex((COPM *)((char *)this + 48), a2);
  OPM::CMutex::CMutex((COPM *)((char *)this + 56), a2);
  return this;
}
