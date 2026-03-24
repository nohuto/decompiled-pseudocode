/*
 * XREFs of ??0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z @ 0x1C006DF88
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C006DA90 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     ??0CInputConfig@@AEAA@XZ @ 0x1C008ABC4 (--0CInputConfig@@AEAA@XZ.c)
 *     NtConfigureInputSpace @ 0x1C0128AA0 (NtConfigureInputSpace.c)
 * Callees:
 *     ??0CInputSpaceRegion@@QEAA@XZ @ 0x1C006DFF8 (--0CInputSpaceRegion@@QEAA@XZ.c)
 */

CInputSpace *__fastcall CInputSpace::CInputSpace(CInputSpace *this, const struct INPUT_SPACE *a2, char a3)
{
  int v5; // eax

  *(_QWORD *)this = *(_QWORD *)a2;
  v5 = *((_DWORD *)a2 + 2);
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 2) = v5;
  CInputSpaceRegion::CInputSpaceRegion((CInputSpace *)((char *)this + 24));
  CInputSpaceRegion::CInputSpaceRegion((CInputSpace *)((char *)this + 720));
  *((_DWORD *)this + 355) = 0;
  *((_BYTE *)this + 1416) = a3;
  *((_QWORD *)this + 179) = 0LL;
  *((_QWORD *)this + 179) = (char *)this + 1424;
  *((_QWORD *)this + 178) = (char *)this + 1424;
  return this;
}
