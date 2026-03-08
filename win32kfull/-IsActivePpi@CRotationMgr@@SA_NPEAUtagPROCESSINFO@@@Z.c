/*
 * XREFs of ?IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z @ 0x1C00166F8
 * Callers:
 *     NtUserSetDisplayAutoRotationPreferences @ 0x1C0016690 (NtUserSetDisplayAutoRotationPreferences.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0029DD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C011CC38 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

bool __fastcall CRotationMgr::IsActivePpi(struct tagPROCESSINFO *a1)
{
  bool v2; // bl
  char v4; // [rsp+38h] [rbp+10h] BYREF

  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v4, gRotationProcessLock);
  v2 = 0;
  if ( grpdeskRitInput )
    v2 = *(_QWORD *)(grpdeskRitInput + 248LL) == (_QWORD)a1;
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v4);
  return v2;
}
