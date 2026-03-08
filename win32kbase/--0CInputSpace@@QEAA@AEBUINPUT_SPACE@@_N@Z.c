/*
 * XREFs of ??0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z @ 0x1C0013300
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C00130D0 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     ??0CInputConfig@@AEAA@XZ @ 0x1C0097D00 (--0CInputConfig@@AEAA@XZ.c)
 *     NtConfigureInputSpace @ 0x1C0169520 (NtConfigureInputSpace.c)
 * Callees:
 *     ??0CInputSpaceRegion@@QEAA@XZ @ 0x1C0013370 (--0CInputSpaceRegion@@QEAA@XZ.c)
 */

CInputSpace *__fastcall CInputSpace::CInputSpace(CInputSpace *this, const struct INPUT_SPACE *a2, char a3)
{
  int v5; // eax

  *(_QWORD *)this = *(_QWORD *)a2;
  v5 = *((_DWORD *)a2 + 2);
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 2) = v5;
  CInputSpaceRegion::CInputSpaceRegion((CInputSpace *)((char *)this + 24));
  CInputSpaceRegion::CInputSpaceRegion((CInputSpace *)((char *)this + 736));
  *((_DWORD *)this + 363) = 0;
  *((_BYTE *)this + 1448) = a3;
  *((_QWORD *)this + 183) = 0LL;
  *((_QWORD *)this + 183) = (char *)this + 1456;
  *((_QWORD *)this + 182) = (char *)this + 1456;
  return this;
}
