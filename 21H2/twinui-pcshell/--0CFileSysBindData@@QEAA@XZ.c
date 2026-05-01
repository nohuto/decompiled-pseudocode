/*
 * XREFs of ??0CFileSysBindData@@QEAA@XZ @ 0x180152950
 * Callers:
 *     ?_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z @ 0x18015D4A0 (-_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z.c)
 * Callees:
 *     memset_0 @ 0x180090978 (memset_0.c)
 */

CFileSysBindData *__fastcall CFileSysBindData::CFileSysBindData(CFileSysBindData *this)
{
  CFileSysBindData *result; // rax

  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CFileSysBindData::`vftable';
  memset_0((char *)this + 40, 0, 0x250uLL);
  memset_0((char *)this + 16, 0, 8uLL);
  result = this;
  *(_OWORD *)((char *)this + 24) = xmmword_180569CE8;
  return result;
}
